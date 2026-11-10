/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030fd700; name: FUN_030fd700
 */


void FUN_030fd700(long param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  lVar2 = tpidr_el0;
  do {
    iVar1 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar6 = param_2;
    iVar8 = param_3;
    do {
      uVar3 = *param_4;
      *param_4 = uVar3 + 0xe6afc;
      if (0xfff19503 < uVar3) {
        iVar5 = *(int *)PTR_DAT_047e4f38;
        lVar4 = *(long *)(lVar2 + 0x1000b8);
        if (lVar4 == 0) {
          lVar4 = FUN_00e5d3b4();
          *(long *)(lVar2 + 0x1000b8) = lVar4;
        }
        if (*(long *)(lVar4 + (long)iVar5 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      iVar5 = 0xd1b71;
      piVar10 = (int *)(param_1 + -4 + (long)iVar6 * 4);
      do {
        iVar9 = iVar6;
        piVar10 = piVar10 + 1;
        iVar5 = iVar5 + -0xd1b71;
        iVar6 = iVar9 + 1;
      } while (*piVar10 < iVar1);
      uVar3 = *param_4 - iVar5;
      *param_4 = uVar3;
      if (uVar3 < (uint)-iVar5) {
        iVar6 = *(int *)PTR_DAT_047e4f38;
        lVar4 = *(long *)(lVar2 + 0x1000b8);
        if (lVar4 == 0) {
          lVar4 = FUN_00e5d3b4();
          *(long *)(lVar2 + 0x1000b8) = lVar4;
        }
        if (*(long *)(lVar4 + (long)iVar6 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar3 = *param_4;
      }
      *param_4 = uVar3 + 0xe6afc;
      if (0xfff19503 < uVar3) {
        iVar6 = *(int *)PTR_DAT_047e4f38;
        lVar4 = *(long *)(lVar2 + 0x1000b8);
        if (lVar4 == 0) {
          lVar4 = FUN_00e5d3b4();
          *(long *)(lVar2 + 0x1000b8) = lVar4;
        }
        if (*(long *)(lVar4 + (long)iVar6 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      iVar6 = 0xd1b71;
      piVar7 = (int *)(param_1 + 4 + (long)iVar8 * 4);
      iVar8 = iVar8 + 1;
      do {
        iVar5 = iVar8;
        piVar7 = piVar7 + -1;
        iVar8 = iVar5 + -1;
        iVar6 = iVar6 + -0xd1b71;
      } while (iVar1 < *piVar7);
      uVar3 = *param_4;
      *param_4 = uVar3 - iVar6;
      if (uVar3 - iVar6 < (uint)-iVar6) {
        iVar6 = *(int *)PTR_DAT_047e4f38;
        lVar4 = *(long *)(lVar2 + 0x1000b8);
        if (lVar4 == 0) {
          lVar4 = FUN_00e5d3b4();
          *(long *)(lVar2 + 0x1000b8) = lVar4;
        }
        if (*(long *)(lVar4 + (long)iVar6 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      iVar6 = iVar9;
      if (iVar9 <= iVar8) {
        if (iVar9 != iVar8) {
          iVar8 = *piVar7;
          *piVar7 = *piVar10;
          *piVar10 = iVar8;
        }
        iVar8 = iVar5 + -2;
        iVar6 = iVar9 + 1;
      }
    } while (iVar6 <= iVar8);
    if (param_2 < iVar8) {
      FUN_030fd700(param_1,param_2,iVar8,param_4);
    }
    param_2 = iVar6;
  } while (iVar6 < param_3);
  return;
}


