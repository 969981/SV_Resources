/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00524f90; name: FUN_00524f90
 */


undefined8 FUN_00524f90(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  ushort uVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar7 = *(int **)(param_1 + 0x10);
    uVar1 = *(ushort *)(param_1 + 10);
    piVar3 = piVar7;
    uVar2 = (ulong)uVar1;
    while (piVar8 = piVar3, uVar2 != 0) {
      uVar5 = uVar2 >> 1;
      piVar3 = piVar8 + uVar5 * 8 + 8;
      uVar2 = uVar2 + ~uVar5;
      if (param_2 <= piVar8[uVar5 * 8]) {
        piVar3 = piVar8;
        uVar2 = uVar5;
      }
    }
    for (; (piVar8 != piVar7 + (ulong)uVar1 * 8 && (*piVar8 < param_3)); piVar8 = piVar8 + 8) {
      param_4 = FUN_005250c8(piVar8 + 2,*piVar8,param_4,param_5);
    }
  }
  else {
    plVar9 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar4 = (long *)*plVar9;
    if (plVar4 != (long *)0x0) {
      plVar10 = plVar9;
      do {
        if (param_2 <= (int)plVar4[4]) {
          plVar10 = plVar4;
        }
        plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
      } while (plVar4 != (long *)0x0);
      while ((plVar10 != plVar9 && ((int)plVar10[4] < param_3))) {
        param_4 = FUN_005250c8(plVar10 + 5,(int)plVar10[4],param_4,param_5);
        plVar4 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar4 = plVar10 + 2;
          if (*(long **)*plVar4 == plVar10) {
            plVar10 = (long *)*plVar4;
          }
          else {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar10 = (long *)*plVar4;
            } while (*plVar10 != lVar6);
          }
        }
        else {
          do {
            plVar10 = plVar4;
            plVar4 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
    }
  }
  return param_4;
}


