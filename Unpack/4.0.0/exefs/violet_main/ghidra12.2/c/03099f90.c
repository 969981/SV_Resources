/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03099f90; name: FUN_03099f90
 */


void FUN_03099f90(long param_1,long param_2,int *param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  
  if (0 < (short)param_3[2]) {
    iVar10 = 0;
    do {
      iVar5 = *param_3 + iVar10;
      iVar3 = iVar5 - *(int *)(param_1 + 0x30);
      if (iVar5 < *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar2 = iVar5;
        }
        else {
          iVar2 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar5 * 4);
        }
        lVar8 = *(long *)(param_1 + 0x28);
        iVar3 = iVar5;
        if (iVar2 != -1) {
          lVar8 = *(long *)(param_1 + 0xc0);
          iVar3 = iVar2;
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0xe0);
      }
      if ((*(byte *)(lVar8 + (long)iVar3 * 0x14 + 0x10) >> 6 & 1) != 0) {
        puVar11 = (uint *)(lVar8 + (long)iVar3 * 0x14 + 8);
        uVar6 = *puVar11;
        lVar8 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(uVar6 >> 0xe) & 0x3ff00));
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (*(char *)(lVar8 + 0x30) == '\x01') {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        else {
          lVar8 = FUN_0307d71c();
          uVar6 = *puVar11;
        }
        uVar6 = uVar6 & 0x3fffff;
        uVar4 = uVar6 - *(int *)(lVar8 + 0x30);
        if ((int)uVar6 < *(int *)(lVar8 + 0x30)) {
          if ((*(int *)(lVar8 + 0x78) == 0) ||
             (uVar6 = *(uint *)(*(long *)(lVar8 + 0x70) + (ulong)uVar6 * 4), uVar6 != 0xffffffff)) {
            plVar9 = (long *)(lVar8 + 0xc0);
            uVar4 = uVar6;
            goto LAB_0309a0ac;
          }
          lVar8 = 0;
        }
        else {
          plVar9 = (long *)(lVar8 + 0xe0);
LAB_0309a0ac:
          lVar8 = *plVar9 + (long)(int)uVar4 * 0x14;
        }
        *(undefined8 *)(lVar8 + 8) = 0xffffffffffffffff;
        *(byte *)(lVar8 + 0x10) = *(byte *)(lVar8 + 0x10) & 0xbf;
        if (param_4 != (long *)0x0) {
          uVar6 = *puVar11 >> 0x16;
          iVar5 = (int)param_4[1];
          if (iVar5 <= (int)param_4[2] * 2) {
            FUN_0309c8d0(param_4,iVar5 << 1);
            iVar5 = (int)param_4[1];
          }
          uVar4 = (uVar6 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar6 * -0x61c8864f & 0xff00ff) << 8;
          uVar4 = iVar5 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
          lVar8 = *param_4;
          puVar11 = (uint *)(lVar8 + (long)(int)uVar4 * 4);
          if (*puVar11 == 0xffffffff) {
            iVar5 = 1;
          }
          else if (*puVar11 == uVar6) {
            iVar5 = 0;
          }
          else {
            do {
              uVar4 = uVar4 + 1 & iVar5 - 1U;
              uVar1 = *(uint *)(lVar8 + (long)(int)uVar4 * 4);
              if (uVar1 == 0xffffffff) {
                iVar5 = 1;
                goto LAB_0309a15c;
              }
            } while (uVar1 != uVar6);
            iVar5 = 0;
LAB_0309a15c:
            puVar11 = (uint *)(lVar8 + (long)(int)uVar4 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar5;
          *puVar11 = uVar6;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (short)param_3[2]);
  }
  iVar10 = *(int *)PTR_DAT_047e4f38;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar7;
  }
  if (*(long *)(lVar7 + (long)iVar10 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < *(short *)((long)param_3 + 10)) {
    iVar10 = 0;
    do {
      iVar5 = param_3[1] + iVar10;
      iVar3 = iVar5 - *(int *)(param_1 + 0x30);
      if (iVar5 < *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar2 = iVar5;
        }
        else {
          iVar2 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar5 * 4);
        }
        lVar8 = *(long *)(param_1 + 0x28);
        iVar3 = iVar5;
        if (iVar2 != -1) {
          lVar8 = *(long *)(param_1 + 0xc0);
          iVar3 = iVar2;
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0xe0);
      }
      if ((*(byte *)(lVar8 + (long)iVar3 * 0x14 + 0x10) >> 6 & 1) != 0) {
        puVar11 = (uint *)(lVar8 + (long)iVar3 * 0x14 + 8);
        uVar6 = *puVar11;
        lVar8 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(uVar6 >> 0xe) & 0x3ff00));
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (*(char *)(lVar8 + 0x30) == '\x01') {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        else {
          lVar8 = FUN_0307d71c();
          uVar6 = *puVar11;
        }
        uVar6 = uVar6 & 0x3fffff;
        uVar4 = uVar6 - *(int *)(lVar8 + 0x30);
        if ((int)uVar6 < *(int *)(lVar8 + 0x30)) {
          if (*(int *)(lVar8 + 0x78) != 0) {
            uVar6 = *(uint *)(*(long *)(lVar8 + 0x70) + (ulong)uVar6 * 4);
          }
          plVar9 = (long *)(lVar8 + 0xc0);
          uVar4 = uVar6;
        }
        else {
          plVar9 = (long *)(lVar8 + 0xe0);
        }
        lVar7 = *plVar9 + (long)(int)uVar4 * 0x14;
        pbVar12 = (byte *)(lVar7 + 0x10);
        uVar6 = *pbVar12 & 0xffffffbf;
        *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
        *pbVar12 = (byte)uVar6;
        if (param_4 != (long *)0x0) {
          uVar6 = *puVar11 >> 0x16;
          iVar5 = (int)param_4[1];
          if (iVar5 <= (int)param_4[2] * 2) {
            FUN_0309c8d0(param_4,iVar5 << 1);
            iVar5 = (int)param_4[1];
          }
          uVar4 = (uVar6 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar6 * -0x61c8864f & 0xff00ff) << 8;
          uVar4 = iVar5 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
          lVar7 = *param_4;
          puVar11 = (uint *)(lVar7 + (long)(int)uVar4 * 4);
          if (*puVar11 == 0xffffffff) {
            iVar5 = 1;
          }
          else if (*puVar11 == uVar6) {
            iVar5 = 0;
          }
          else {
            do {
              uVar4 = uVar4 + 1 & iVar5 - 1U;
              uVar1 = *(uint *)(lVar7 + (long)(int)uVar4 * 4);
              if (uVar1 == 0xffffffff) {
                iVar5 = 1;
                goto LAB_0309a364;
              }
            } while (uVar1 != uVar6);
            iVar5 = 0;
LAB_0309a364:
            puVar11 = (uint *)(lVar7 + (long)(int)uVar4 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar5;
          *puVar11 = uVar6;
          uVar6 = (uint)*pbVar12;
        }
        if ((uVar6 >> 2 & 1) == 0) {
          *(int *)(lVar8 + 0x164) = *(int *)(lVar8 + 0x164) + 1;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(short *)((long)param_3 + 10));
  }
  return;
}


