/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


