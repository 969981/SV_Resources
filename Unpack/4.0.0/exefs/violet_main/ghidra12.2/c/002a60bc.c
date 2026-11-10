/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a60bc; name: FUN_002a60bc
 */


ulong * FUN_002a60bc(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (*param_1 >> 1 <= uVar1) {
    return (ulong *)0x0;
  }
  if ((*param_1 & 1) == 0) {
    return param_1 + uVar1 * 3 + 1;
  }
  return (ulong *)(param_1[1] + uVar1 * 0x18);
}


