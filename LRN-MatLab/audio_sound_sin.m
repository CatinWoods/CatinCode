
clear
hold off

% x = 1:8192*10; % signal_duration=10s under Fs=8192
% x = 1:8192*5;  % signal_duration=5s under Fs=8192
Fs = 8192;
x = 1:Fs*1;      % signal_duration=1s
freq = 50; % signal frequency /Hz


SIG_sin = sin(2*pi*freq/Fs*x);


plot(x, SIG_sin)
sound(SIG_sin);





