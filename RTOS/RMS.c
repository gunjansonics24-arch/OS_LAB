#include &lt;stdio.h&gt;

int main()
{
int C[3] = {3,2,2};
int T[3] = {20,5,10};
float U;

printf(&quot;Rate Monotonic Scheduling\n\n&quot;);

printf(&quot;Tasks:\n&quot;);
printf(&quot;T1 -&gt; C=3 , T=20\n&quot;);
printf(&quot;T2 -&gt; C=2 , T=5\n&quot;);
printf(&quot;T3 -&gt; C=2 , T=10\n&quot;);

/* Step 1 : CPU Utilization */
U = (float)3/20 + (float)2/5 + (float)2/10;

printf(&quot;\nCPU Utilization U = %.2f\n&quot;,U);
printf(&quot;RMS Bound for 3 tasks = 0.78\n&quot;);

if(U &lt;= 0.78)
printf(&quot;Tasks are Schedulable\n&quot;);
else
{
printf(&quot;Tasks are NOT Schedulable\n&quot;);
return 0;
}

/* Step 2 : Priority */
printf(&quot;\nPriority (Smaller period -&gt; Higher priority)\n&quot;);

printf(&quot;T2 &gt; T3 &gt; T1\n&quot;);

/* Step 3 : Execution timeline */
printf(&quot;\nExecution Timeline (0 - 20)\n&quot;);

printf(&quot;0 - 2 : T2\n&quot;);
printf(&quot;2 - 4 : T3\n&quot;);
printf(&quot;4 - 5 : T1\n&quot;);
printf(&quot;5 - 7 : T2\n&quot;);
printf(&quot;7 - 9 : T1\n&quot;);
printf(&quot;9 -10 : Idle\n&quot;);
printf(&quot;10-12 : T2\n&quot;);
printf(&quot;12-14 : T3\n&quot;);
printf(&quot;14-15 : Idle\n&quot;);
printf(&quot;15-17 : T2\n&quot;);
printf(&quot;17-20 : Idle\n&quot;);

return 0;
}
