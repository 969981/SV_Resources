/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a5c48; name: FUN_004a5c48
 */


int * FUN_004a5c48(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x7c)) {
    piVar1 = *(int **)(param_1 + 0x48);
    lVar2 = 0;
    do {
      if ((*piVar1 <= param_2) && (param_2 < piVar1[1])) {
        return piVar1;
      }
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (lVar2 < *(int *)(param_1 + 0x7c));
  }
  return (int *)0x0;
}


