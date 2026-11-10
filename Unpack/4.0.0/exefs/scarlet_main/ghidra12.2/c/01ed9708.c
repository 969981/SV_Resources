/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed9708; name: FUN_01ed9708
 */


bool FUN_01ed9708(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x7d50);
  piVar1 = (int *)(param_1 + 0x7ee0);
  do {
    if (*piVar2 == *(int *)(param_2 + 8) && (char)piVar2[1] == *(char *)(param_2 + 0x13))
    goto LAB_01ed9764;
    if ((piVar2[2] == *(int *)(param_2 + 8)) && ((char)piVar2[3] == *(char *)(param_2 + 0x13))) {
      piVar2 = piVar2 + 2;
      goto LAB_01ed9764;
    }
    piVar2 = piVar2 + 4;
  } while (piVar2 != piVar1);
  piVar2 = piVar1;
LAB_01ed9764:
  return piVar2 != piVar1;
}


