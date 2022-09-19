
clear
hold off

% x = 1:8192*10; % signal_duration=10s under Fs=8192
% x = 1:8192*5;  % signal_duration=5s under Fs=8192
Fs = 8192;
x = 1:Fs*1;      % signal_duration=1s
freq = 50; % signal frequency /Hz


sq_wid_h = 0.01;
sq_wid_l = 1-sq_wid_h;
tep = zeros(size(x));
for k = 1:x(end)
    sec = freq/Fs*k;
    if sec-fix(sec)<sq_wid_h
        tep(k) = 1;
    else
        tep(k) = 0;
    end
end
SIG_sq = tep;

plot(x, SIG_sq)
sound(SIG_sq)




