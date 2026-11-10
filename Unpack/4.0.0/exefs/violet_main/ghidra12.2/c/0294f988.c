/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294f988; name: FUN_0294f988
 */


int * FUN_0294f988(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0x2420);
  if (uVar2 != 0) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      uVar2 = uVar2 - 1;
      piVar1 = piVar1 + 0x23;
    } while (uVar2 != 0);
  }
  return (int *)0x0;
}


