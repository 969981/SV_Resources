/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ab234; name: FUN_015ab234
 */


bool FUN_015ab234(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x98);
  piVar1 = piVar2;
  if (*(long *)(param_1 + 0xa0) != 0) {
    piVar1 = piVar2 + *(long *)(param_1 + 0xa0) * 3;
  }
  if (piVar1 != piVar2) {
    do {
      if (((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) && (piVar2[2] == param_2[2]))
      goto LAB_015ab28c;
      piVar2 = piVar2 + 3;
    } while (piVar1 != piVar2);
    piVar2 = piVar1;
  }
LAB_015ab28c:
  return piVar1 != piVar2;
}


