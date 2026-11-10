/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a5c94; name: FUN_004a5c94
 */


int * FUN_004a5c94(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x84)) {
    piVar1 = *(int **)(param_1 + 0x58);
    lVar2 = 0;
    do {
      if ((*piVar1 <= param_2) && (param_2 < piVar1[1])) {
        return piVar1;
      }
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (lVar2 < *(int *)(param_1 + 0x84));
  }
  return (int *)0x0;
}


