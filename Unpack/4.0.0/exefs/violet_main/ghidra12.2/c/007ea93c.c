/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ea93c; name: FUN_007ea93c
 */


ulong FUN_007ea93c(int *param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = param_1 + 0x600;
  if (*piVar1 < 1) {
    return 0xffffffff;
  }
  uVar2 = 0;
  do {
    if (*param_1 == param_2) {
      return uVar2 & 0xffffffff;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0xc;
  } while ((long)uVar2 < (long)*piVar1);
  return 0xffffffff;
}


