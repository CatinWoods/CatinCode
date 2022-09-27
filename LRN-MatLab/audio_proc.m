
clear
%{
% [audio_data, fs] = audioread('Sia - Reaper.mp3',[1, 30]);
[audio_data, fs] = audioread('Sia - Reaper.mp3');

L = length(audio_data)
fs;

% listen
sound(audio_data, fs);

%}













%{
% listen
soundsc(audio_data, fs);

figure('Name', 'Original');

tt = (1 : L) * 1/fs;
subplot(4, 1, 1);
plot(tt, audio_data);
grid;
title('Time Doman');
xlabel('Time(s)');
ylable('Amp');
%}





