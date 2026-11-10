/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cd880; name: FUN_003cd880
 */


int FUN_003cd880(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &DAT_03cdcc78;
  do {
    piVar2 = piVar1;
    if (*piVar2 == 0) break;
    piVar1 = piVar2 + 2;
  } while (*piVar2 != param_1);
  return piVar2[1];
}


