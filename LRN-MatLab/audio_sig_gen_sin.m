%{
clear
hold off

Fs = 8192;       % sampling_frequency = 8192 (default)
x = 1:Fs*1;      % signal_duration = 1s
freq = 100;      % signal_frequency = 100Hz

SIG_sin = sin(2*pi*freq/Fs*x)+1; % sine signal

plot(x, SIG_sin)
sound(SIG_sin);
%}



%% frequency test 1

clear
hold off
Fs = 8192;
x = 1:Fs*20;
freq_sel = [100, 200, 300, 400, 500,...
            600, 700, 800, 900, 1000,...
            1100, 1200, 1300, 1400, 1500,...
            1600, 1700, 1800, 1900, 2000];
for k=0:19
    freq = freq_sel(k+1);
    t1 = Fs*k+1;
    t2 = Fs*(k+1);
    SIG_sin(t1:t2) = sin(2*pi*freq/Fs*x(t1:t2));
end

plot(x, SIG_sin)
sound(SIG_sin);


%% frequency test 2 -- Doi 

clear
hold off
Fs = 8192;
x = 1:Fs*20;
freq_sel = [100, 200, 300, 400, 500,...
            600, 700, 800, 900, 1000,...
            1100, 1200, 1300, 1400, 1500,...
            1600, 1700, 1800, 1900, 2000];
for k=0:19
    freq = freq_sel(k+1);
    t1 = Fs*k+1;
    t2 = Fs*(k+1);
    SIG_sin(t1:t2) = sin(2*pi*freq/Fs*x(t1:t2));
end

plot(x, SIG_sin)
sound(SIG_sin);





















