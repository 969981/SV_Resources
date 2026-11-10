/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f40c0; name: FUN_003f40c0
 */


ulong FUN_003f40c0(long *param_1)

{
  ulong uVar1;
  int in_w4;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if (0 < (int)uVar1) {
    param_1[1] = param_1[1] + (long)in_w4;
    param_1[2] = param_1[2] + (uVar1 & 0xffffffff);
  }
  return uVar1;
}


