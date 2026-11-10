/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f129c; name: FUN_008f129c
 */


int FUN_008f129c(int param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0x38;
  piVar2 = &DAT_045197b0;
  do {
    uVar4 = uVar3 >> 1;
    piVar1 = piVar2 + uVar4 * 2 + 2;
    uVar3 = uVar3 + ~uVar4;
    if (param_1 <= piVar2[uVar4 * 2]) {
      piVar1 = piVar2;
      uVar3 = uVar4;
    }
    piVar2 = piVar1;
  } while (uVar3 != 0);
  if ((piVar1 == (int *)&DAT_04519970) || (param_1 < *piVar1)) {
    return 0;
  }
  return piVar1[1];
}


