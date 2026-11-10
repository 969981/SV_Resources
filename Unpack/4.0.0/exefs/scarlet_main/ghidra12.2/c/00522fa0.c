/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00522fa0; name: FUN_00522fa0
 */


long FUN_00522fa0(long param_1,int param_2,long param_3)

{
  byte bVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar4 = *(int **)(param_1 + 0x10);
    uVar3 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar2 = piVar4, uVar3 != 0) {
      uVar8 = uVar3 >> 1;
      piVar4 = piVar2 + uVar8 * 8 + 8;
      uVar3 = uVar3 + ~uVar8;
      if (param_2 <= piVar2[uVar8 * 8]) {
        piVar4 = piVar2;
        uVar3 = uVar8;
      }
    }
    if (piVar2 == *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) {
      return param_3;
    }
    plVar5 = (long *)(piVar2 + 2);
    if (*piVar2 != param_2) {
      return param_3;
    }
    bVar1 = *(byte *)((long)piVar2 + 0x12);
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar7 = (long *)*plVar5;
    if (plVar7 == (long *)0x0) {
      return param_3;
    }
    plVar6 = plVar5;
    do {
      if (param_2 <= (int)plVar7[4]) {
        plVar6 = plVar7;
      }
      plVar7 = (long *)plVar7[(int)plVar7[4] < param_2];
    } while (plVar7 != (long *)0x0);
    if (plVar6 == plVar5) {
      return param_3;
    }
    if (param_2 < (int)plVar6[4]) {
      return param_3;
    }
    plVar5 = plVar6 + 5;
    bVar1 = *(byte *)((long)plVar6 + 0x32);
  }
  if ((bVar1 & 1) == 0) {
    param_3 = *plVar5;
  }
  return param_3;
}


