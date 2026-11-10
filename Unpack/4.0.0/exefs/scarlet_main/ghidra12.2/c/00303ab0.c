/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00303ab0; name: FUN_00303ab0
 */


long FUN_00303ab0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    uVar1 = *(long *)(param_1 + 0x10) + 4;
    lVar2 = 0;
    if (uVar1 <= param_2) {
      lVar2 = param_2 - uVar1;
    }
  }
  return lVar2;
}


