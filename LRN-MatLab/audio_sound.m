
clear
hold off
%% 以下为数字信号采样a


% x = 1:Fs*5;    % signal_duration = 5s
% x = 1:Fa*10;   % signal_duration = 10s

% x = 1:8192*10; % signal_duration=10s under Fs=8192
% x = 1:8192*5;  % signal_duration=5s under Fs=8192
Fs = 8192;
Fs = 1000;
Fs_v = [1000, 2000, 3000, 4000, 5000;
        6000, 7000, 8000, 9000, 10000;
        1100, 12000,13000,14000,15000;]
for kk = 1:10
    Fs = Fs_v(kk);
x = 1:Fs*1;      % signal_duration=1s
freq = 50; % signal frequency /Hz


% SIG_sin
SIG_sin = sin(2*pi*freq/Fs*x);
plot(x, SIG_sin)
hold on
sound(SIG_sin, Fs);


% SIG_sq
sq_wid_l = 0.5;
sq_wid_s = 1-sq_wid_l;
tep = zeros(size(x));

for k = 1:x(end)
    sec = freq/Fs*k;
    if sec-fix(sec)<sq_wid_l
        tep(k) = 0;
    else
        tep(k) = 1;
    end
end

SIG_sq = tep;

plot(x, SIG_sq)
% sound(SIG_sq, Fs)


pause(1)
end


%% 以下为模拟信号采样




%{
t = linspace(0, 4.8, 4.8e+4);
f0 = 200;
f1 = 10000;
Fs = 1/mean(diff(t));
x = chirp(t, f0, t(end), f1);

sound(x, Fs)
figure(1)
plot(t, x)
%}



%{
load gong
% sound(y,Fs)
sound(sin(2*pi*25*(1:4000)/100));

load chirp
sound(x, Fs)
%}







