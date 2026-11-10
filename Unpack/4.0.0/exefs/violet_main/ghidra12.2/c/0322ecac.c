/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322ecac; name: FUN_0322ecac
 */


ulong FUN_0322ecac(undefined8 param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong auStack_440 [128];
  
  if (0x7f < param_3) {
    param_3 = 0x80;
  }
  uVar1 = nn::diag::GetBacktrace(auStack_440,param_3);
  if (0 < (int)uVar1) {
    memcpy(param_2,auStack_440 + param_4,(ulong)uVar1 << 3);
  }
  return (ulong)uVar1;
}


