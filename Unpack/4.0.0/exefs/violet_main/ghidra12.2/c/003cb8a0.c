/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cb8a0; name: FUN_003cb8a0
 */


undefined4 FUN_003cb8a0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar9 = &DAT_044a1498;
    *param_2 = 0;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar8 = *param_1;
      *param_3 = iVar8;
      *param_2 = iVar8;
      uVar7 = 0;
      if (param_4 != (int *)0x0) {
        uVar7 = 0x44;
      }
      return uVar7;
    }
    piVar9 = &DAT_044a1528;
    *param_2 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (*piVar9 == 0) {
    *param_3 = 0;
  }
  else {
    if (param_4 == (int *)0x0) {
      iVar8 = 0;
      piVar9 = piVar9 + 6;
      bVar3 = true;
      do {
        while( true ) {
          if (*(code **)(piVar9 + -4) == (code *)0x0) goto LAB_003cbb60;
          piVar6 = (int *)(**(code **)(piVar9 + -4))();
          iVar10 = *piVar6;
          iVar5 = param_1[0x1a7];
          if ((iVar5 == 0) || (iVar10 == iVar5)) break;
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if (iVar5 <= iVar10) break;
          }
          else {
            iVar4 = 0xff00;
            if (iVar10 != 0x100) {
              iVar4 = iVar10;
            }
            iVar2 = 0xff00;
            if (iVar5 != 0x100) {
              iVar2 = iVar5;
            }
            if (iVar4 <= iVar2) break;
          }
LAB_003cbb60:
          iVar10 = *piVar9;
          piVar9 = piVar9 + 6;
          bVar3 = true;
          if (iVar10 == 0) goto LAB_003cbba4;
        }
        iVar5 = FUN_003af490(param_1,9,0,iVar10,0);
        if (iVar5 == 0) goto LAB_003cbb60;
        iVar5 = param_1[0x1a8];
        if ((iVar5 != 0) && (iVar10 != iVar5)) {
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if (iVar10 < iVar5) goto LAB_003cbb50;
          }
          else {
            iVar4 = 0xff00;
            if (iVar10 != 0x100) {
              iVar4 = iVar10;
            }
            iVar10 = 0xff00;
            if (iVar5 != 0x100) {
              iVar10 = iVar5;
            }
            if (iVar10 < iVar4) goto LAB_003cbb50;
          }
          goto LAB_003cbb60;
        }
LAB_003cbb50:
        if (((*(ulong *)(piVar6 + 2) & (ulong)(uint)param_1[0x1a5]) != 0) ||
           (((*(byte *)(piVar6 + 1) >> 1 & 1) != 0 &&
            ((*(byte *)(*(long *)(param_1 + 0x154) + 0x1e) & 3) != 0)))) goto LAB_003cbb60;
        if (bVar3) {
          iVar8 = *piVar6;
        }
        *param_2 = *piVar6;
        iVar10 = *piVar9;
        piVar9 = piVar9 + 6;
        bVar3 = false;
      } while (iVar10 != 0);
    }
    else {
      iVar10 = 0;
      iVar8 = 0;
      bVar3 = true;
      do {
        if (*(code **)(piVar9 + 2) == (code *)0x0) {
          iVar10 = 0;
          goto LAB_003cba10;
        }
        piVar6 = (int *)(**(code **)(piVar9 + 2))();
        if ((iVar10 == 0) && (bVar3)) {
          iVar10 = *piVar9;
        }
        iVar5 = *piVar6;
        iVar4 = param_1[0x1a7];
        if ((iVar4 == 0) || (iVar5 == iVar4)) {
LAB_003cb9a0:
          iVar4 = FUN_003af490(param_1,9,0,iVar5,0);
          if (iVar4 == 0) goto LAB_003cba10;
          iVar4 = param_1[0x1a8];
          if ((iVar4 != 0) && (iVar5 != iVar4)) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
              if (iVar5 < iVar4) goto LAB_003cba00;
            }
            else {
              iVar2 = 0xff00;
              if (iVar5 != 0x100) {
                iVar2 = iVar5;
              }
              iVar5 = 0xff00;
              if (iVar4 != 0x100) {
                iVar5 = iVar4;
              }
              if (iVar5 < iVar2) goto LAB_003cba00;
            }
            goto LAB_003cba10;
          }
LAB_003cba00:
          if (((*(ulong *)(piVar6 + 2) & (ulong)(uint)param_1[0x1a5]) != 0) ||
             (((*(byte *)(piVar6 + 1) >> 1 & 1) != 0 &&
              ((*(byte *)(*(long *)(param_1 + 0x154) + 0x1e) & 3) != 0)))) goto LAB_003cba10;
          if (bVar3) {
            if (iVar10 != 0) {
              *param_4 = iVar10;
            }
            iVar8 = *piVar6;
            bVar3 = false;
            *param_2 = iVar8;
          }
          else {
            *param_2 = *piVar6;
          }
        }
        else {
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if (iVar4 <= iVar5) goto LAB_003cb9a0;
          }
          else {
            iVar2 = 0xff00;
            if (iVar5 != 0x100) {
              iVar2 = iVar5;
            }
            iVar1 = 0xff00;
            if (iVar4 != 0x100) {
              iVar1 = iVar4;
            }
            if (iVar2 <= iVar1) goto LAB_003cb9a0;
          }
LAB_003cba10:
          bVar3 = true;
        }
        piVar9 = piVar9 + 6;
      } while (*piVar9 != 0);
    }
LAB_003cbba4:
    *param_3 = iVar8;
    if (iVar8 != 0) {
      return 0;
    }
  }
  return 0xbf;
}


