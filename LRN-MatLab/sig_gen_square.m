
clear
%% Generating sqaure wave using MatLab internal function
%{
t = linspace(0, 3*pi); % vector of 100 equally spaced numbers from 0 to 3pi
y = square(t);
plot(t, y, '.')
%}

%% Self-defined function to generate sqaure wave

square_gen(5, 0.2, 2)

function square_gen(freq, duty, duration)
% square_gen generates and plots a sqaure wave
% input parameters:
%       freq: frequency of signal
%       duty: duty ratio of signal
%       duration: time duration of signal
% output parameters: none
    t = linspace(0, duration, 10*freq*duration)
    tep = [];
    for k=1:size(t, 2)
        sec = t(k)*freq;
        tep(k) = 0;
        if sec-fix(sec)<duty
            tep(k) = 1;
        end
    end
    plot(t, tep, 'r.')
end

%% Generating by composition of sinusoidals


