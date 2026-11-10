/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e9e04; name: FUN_002e9e04
 */


long FUN_002e9e04(long *param_1,char param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  if (uVar3 <= param_3) {
    return -1;
  }
  lVar1 = *param_1;
  do {
    if (*(char *)(lVar1 + param_3) == param_2) {
      lVar2 = (lVar1 + param_3) - lVar1;
      if (lVar1 + param_3 == lVar1 + uVar3) {
        lVar2 = -1;
      }
      return lVar2;
    }
    param_3 = param_3 + 1;
  } while (uVar3 != param_3);
  return -1;
}


