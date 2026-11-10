/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00886fd8; name: FUN_00886fd8
 */


int * FUN_00886fd8(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (*(ushort *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(param_1 + (ulong)*(ushort *)(param_1 + 6));
    do {
      if (*piVar2 == param_2) {
        return piVar2 + 2;
      }
      uVar1 = uVar1 + 1;
      piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]);
    } while (uVar1 < *(ushort *)(param_1 + 0x10));
  }
  return (int *)0x0;
}


