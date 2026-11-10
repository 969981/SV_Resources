/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f1dbc; name: FUN_034f1dbc
 */


void FUN_034f1dbc(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 4;
LAB_034f1de4:
  uVar4 = uVar5 & 0xffffffff;
  lVar6 = (ulong)((int)uVar5 - 1) * 8 + 0xe0;
  do {
    plVar2 = *(long **)(param_1 + lVar6);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
      iVar1 = *(int *)((long)param_2 + 0x2c);
      if (iVar1 != 0x2b) {
        if ((iVar1 != 0x11) && (iVar1 != 0x2d)) {
          return;
        }
        if ((uint)uVar4 < 4) goto LAB_034f1e64;
LAB_034f1ec0:
        if (*param_2 != 0) {
          if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
            FUN_034fad30(param_2,param_1 + 0xb8);
          }
          if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
            FUN_034fb430(param_2,param_1 + 200);
          }
          if ((*param_2 != 0) && (*(long *)(*(long *)(param_1 + 0x110) + 0x68) != 0)) {
            FUN_03512ac8(param_1 + 0x100,param_2);
          }
        }
        FUN_0350bb5c(param_1,param_2);
        iVar1 = *(int *)((long)param_2 + 0x2c);
        if ((iVar1 != 0x2d) && (iVar1 != 0x11)) {
          return;
        }
        *(int *)((long)param_2 + 0xc) = iVar1;
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 != 0) {
          do {
            if (*(int *)(lVar6 + 0x188) != 0) {
              lVar3 = *(long *)(lVar6 + 0x180);
              do {
                *(long *)(lVar3 + 0x18) = param_1 + 0x158;
                lVar3 = lVar3 + 0x158;
              } while (lVar3 != *(long *)(lVar6 + 0x180) + (ulong)*(uint *)(lVar6 + 0x188) * 0x158);
            }
            lVar6 = *(long *)(lVar6 + 0x20);
          } while (lVar6 != 0);
        }
        FUN_0350cedc(param_1,param_2);
        return;
      }
    }
    uVar4 = uVar4 - 1;
    lVar6 = lVar6 + -8;
  } while ((int)uVar4 != 0);
LAB_034f1e24:
  FUN_0350b7d0(param_1,param_2);
  uVar4 = 0;
  if ((*(int *)((long)param_2 + 0x2c) != 0x11) && (*(int *)((long)param_2 + 0x2c) != 0x2d)) {
    return;
  }
LAB_034f1e64:
  uVar5 = uVar4 & 0xffffffff;
  uVar4 = uVar5;
  if (uVar5 < 4) {
    uVar4 = 3;
  }
  do {
    plVar2 = *(long **)(param_1 + 0xe0 + uVar5 * 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
      iVar1 = *(int *)((long)param_2 + 0x2c);
      if ((iVar1 != 0x11) && (iVar1 != 0x2d)) break;
    }
    uVar5 = uVar5 + 1;
    if (uVar4 + 1 == uVar5) goto LAB_034f1ec0;
  } while( true );
  if (iVar1 != 0x2b) {
    return;
  }
  if ((int)uVar5 != 0) goto LAB_034f1de4;
  goto LAB_034f1e24;
}


