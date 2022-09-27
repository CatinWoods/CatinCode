
clear
hold off



Fs = 8192;       % sampling_frequency = 8192 (default)
x = 1:Fs*1;      % signal_duration = 1s
freq = 300;      % signal_frequency = 100Hz

% 因为声音是振动的——
% 一个直流信号频率为0/1，是不会发出声音的，
% 只有在0/1交界处，由于信号的突变，产生了很多其他的频率分量，才能听到声音。
% 因此将sq_wid_h设置为0.1和0.9的效果实际上是一样的,
% 因为关于声音的产生只关心交界处。

sq_wid_h = 0.5;
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
SIG_sq = tep;    % square signal

plot(x, SIG_sq)
sound(SIG_sq)
