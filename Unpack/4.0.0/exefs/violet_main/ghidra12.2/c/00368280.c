/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368280; name: FUN_00368280
 */


ulong FUN_00368280(long *param_1,long *param_2)

{
  ulong uVar1;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if ((*param_1 == 0) || (*param_2 == 0)) {
    lStack_28 = param_1[1];
    local_30 = *param_1;
    lStack_18 = param_1[3];
    lStack_20 = param_1[2];
    lStack_48 = param_2[1];
    local_50 = *param_2;
    lStack_38 = param_2[3];
    lStack_40 = param_2[2];
    uVar1 = FUN_00368020(&local_30,&local_50);
    return uVar1;
  }
  if (param_1[1] == param_2[1]) {
    return (ulong)(param_1[2] == param_2[2]);
  }
  return 0;
}


