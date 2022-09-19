
clear
hold off
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

% x = 1:8192*10; % signal_duration=10s under Fs=8192
% x = 1:8192*5;  % signal_duration=5s under Fs=8192
Fs = 8192;
x = 1:Fs*1;      % signal_duration=1s
freq = 50; % signal frequency /Hz

SIG_sin = sin(2*pi*freq/Fs*x);

for k = 1:x(end)
    sec = 2*pi*freq/Fs*k;
    if((sec-fix(sec))<sq_wid_1){
            tep(k)=1;
            }
    else{
            tep(k)=0;
            }
    end
end

sq_wid_l = 0.4;
sq_wid_s = 1-sq_wid_l;
tep = zeros(size(x));
size(x)
size(tep)

    
    SIG_sq = tep;
    plot(x, SIG_sin)
    hold on
    % sound(SIG_sin);
    
    plot(x, SIG_sq)
    sound(SIG_sq)
    



