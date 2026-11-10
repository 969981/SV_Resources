/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003748a0; name: FUN_003748a0
 */


bool FUN_003748a0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  if (uVar1 < 5) {
    return false;
  }
  lVar2 = param_1[2];
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
  }
  return *(int *)(lVar2 + uVar1 + -4) == 0x6e69622d;
}


