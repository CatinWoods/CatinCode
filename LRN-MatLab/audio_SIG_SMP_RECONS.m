clear
hold off
%% Below is a test of the Nyquist theorem experinment

% figure
subplot(3,1,1)

% Original signal (

freq_signal = 20
freq_sample = 2*freq_signal;
time_duration = 2; % second
t_signal = 0:(1/freq_signal/10):time_duration;
f_signal = cos(2*pi*freq_signal*t_signal);
plot(t_signal, f_signal, 'k')
hold on
t_sample = 0:(1/freq_sample):2;
f_sample = cos(2*pi*freq_signal*t_sample);
plot(t_sample, f_sample, 'r.');




