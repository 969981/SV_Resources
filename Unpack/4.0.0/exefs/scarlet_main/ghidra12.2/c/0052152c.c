/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052152c; name: FUN_0052152c
 */


undefined4 FUN_0052152c(long param_1,int param_2)

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
    if (piVar1 == *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) {
      return 0;
    }
    plVar4 = (long *)(piVar1 + 2);
    if (*piVar1 != param_2) {
      return 0;
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    plVar4 = plVar5;
    do {
      if (param_2 <= (int)plVar6[4]) {
        plVar4 = plVar6;
      }
      plVar6 = (long *)plVar6[(int)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if (plVar4 == plVar5) {
      return 0;
    }
    if (param_2 < (int)plVar4[4]) {
      return 0;
    }
    plVar4 = plVar4 + 5;
  }
  switch(*(undefined4 *)(PTR_DAT_047cdbe8 + (ulong)*(byte *)(plVar4 + 1) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    return *(undefined4 *)*plVar4;
  case 9:
  case 10:
    return *(undefined4 *)(*plVar4 + 8);
  default:
    return 0;
  }
}


