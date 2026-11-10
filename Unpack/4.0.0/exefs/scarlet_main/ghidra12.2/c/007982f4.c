/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007982f4; name: FUN_007982f4
 */


long FUN_007982f4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return lVar2 + (uVar1 & 0xffffffff);
}


