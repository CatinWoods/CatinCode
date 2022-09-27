
%% 1.(1) bisection
% fx = @fun;
% [steps est_root] = biscetion_test(fx, -2, -1, 10e-10) 

% function [steps, est_root] = biscetion_test(fx, a, b, tol)
    % % biscetion_test calculates the minimal number of iterations (steps) and the estimated root value (est_root) under those steps
    % % input parameter:
    % %           fx: function
    % %           a, b: the border of concerned interval
    % %           tol: tolerance
    % steps = 0;
    % while (b-a)/2 > tol
        % c = 1/2*(a+b); % the mid-value of [a, b]
        % if fx(a)==0 || fx(b)==0 || fx(c)==0
            % break;
        % end
        % if fx(a)*fx(c) < 0
            % b = c;
            % steps = steps+1;
        % end
        % if fx(b)*fx(c) < 0
            % a = c;
            % steps = steps+1;
        % end
    % end
    % est_root = 1/2*(a+b);
% end

% function f=fun(x)
   % % f = x^4-x^3-10;
    % f=(24*x^4-24*x^3+6*x^2)/(32*x^3-36*x^2+2*x-1)
% end

%% 2(1) FP_iteration
% clear; hold off; close all
% init = 0.6;
% loops = 20;

% % function list order: (b), (c), (d)
% fun_list = {'2/x^0.5',...
            % '3*x/4+1/x^2',...
            % '2*x/3+4/3/x^2'};
% % calculates all the points when spiralling toward the fixed point
% for k = 1:3
    % fx = @(x) eval(fun_list{k});
    % [x(k,:), y(k,:)] = FP_iteration(fx, init, loops)
% end

% % geometric illustration of the Fixed-Point Iteration process
% figure('Name', 'Comparing the speed of iteration');
% fig = gcf;
% fig.Position = [80, 400, 1800, 500];
% for i = 1:loops-1
    % for k = 1:3
        % subplot(1, 3, k)
        % p = plot([x(k,i), x(k,i+1), x(k,i+1)],...
                 % [y(k,i), x(k,i+1), y(k,i+1)],...
                 % '.-b')
        % if abs(1.5874-x(k,i))<0.0001
            % p.MarkerEdgeColor = 'r';
            % p.MarkerSize = 20;
        % end
        % hold on
        % plot(0:0.1:4, 0:0.1:4, 'k--')
        % xlim([0, 3.5]);
        % ylim([0, 3.5]);
    % end
    % pause(0.2);
% end

% function [x, y] = FP_iteration(fx, init, loops)
    % % FP_iteration calculates all the points when spiralling in toward the fixed point.
    % % Input parameter:
    % %           fx: function
    % %           init: initial guess
    % %           loops: number of iteration
    % tep = init;
    % for i = 1:loops
        % x(i) = tep;
        % y(i) = fx(tep);
        % tep = y(i);
    % end
% end






