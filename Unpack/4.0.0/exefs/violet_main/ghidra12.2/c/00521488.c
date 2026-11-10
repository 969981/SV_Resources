/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00521488; name: FUN_00521488
 */


long * FUN_00521488(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar3 = *(int **)(param_1 + 0x10);
    uVar2 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar1 = piVar3, uVar2 != 0) {
      uVar7 = uVar2 >> 1;
      piVar3 = piVar1 + uVar7 * 8 + 8;
      uVar2 = uVar2 + ~uVar7;
      if (param_2 <= piVar1[uVar7 * 8]) {
        piVar3 = piVar1;
        uVar2 = uVar7;
      }
    }
    if (piVar1 != *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) {
      plVar4 = (long *)(piVar1 + 2);
      if (*piVar1 != param_2) {
        plVar4 = (long *)0x0;
      }
      return plVar4;
    }
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar6 = (long *)*plVar4;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar4;
      do {
        if (param_2 <= (int)plVar6[4]) {
          plVar5 = plVar6;
        }
        plVar6 = (long *)plVar6[(int)plVar6[4] < param_2];
      } while (plVar6 != (long *)0x0);
      if ((plVar5 != plVar4) && ((int)plVar5[4] <= param_2)) {
        return plVar5 + 5;
      }
    }
  }
  return (long *)0x0;
}


