/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d5b1c; name: FUN_026d5b1c
 */


ulong FUN_026d5b1c(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  void *__src;
  ulong __n;
  
  if ((*(long *)(param_1 + 0x150) == 0) || (uVar1 = FUN_00f42d3c(), param_3 < uVar1)) {
    __n = 0;
  }
  else {
    __n = (ulong)uVar1;
    __src = (void *)FUN_00f42d24(*(undefined8 *)(param_1 + 0x150));
    memcpy(param_2,__src,__n);
    FUN_00f431e4((undefined8 *)(param_1 + 0x150),0);
  }
  return __n;
}


