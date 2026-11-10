/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c03038; name: FUN_00c03038
 */


void FUN_00c03038(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  byte local_70 [8];
  undefined1 *local_68;
  
  lVar16 = 0;
  piVar1 = (int *)(param_2 + 2);
  plVar2 = param_2 + 1;
  do {
    plVar10 = (long *)*param_1;
    if (plVar10 == (long *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (int)((ulong)(plVar10[1] - *plVar10) >> 4);
    }
    if (iVar9 <= lVar16) {
      return;
    }
    puVar3 = (uint *)(*plVar10 + lVar16 * 0x10);
    if (puVar3[1] == 3) {
      iVar9 = *piVar1;
      if (iVar9 < 5) {
        local_70[0] = 0xb;
        if (iVar9 < 1) {
          iVar8 = 1;
          puVar7 = (undefined1 *)*plVar2;
          pbVar11 = local_70;
          do {
            memcpy(puVar7,pbVar11,(long)iVar9);
            iVar4 = *(int *)(param_2 + 2);
            uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,piVar1);
            if ((uVar6 & 1) == 0) {
              puVar7 = (undefined1 *)0x0;
              param_2[1] = 0;
              iVar8 = 0;
              *(undefined4 *)(param_2 + 2) = 0;
              *(undefined1 *)(param_2 + 3) = 1;
              goto LAB_00c03174;
            }
            iVar9 = *(int *)(param_2 + 2);
            iVar8 = iVar8 - iVar4;
            pbVar11 = pbVar11 + iVar4;
            param_2[1] = local_68;
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar9;
            puVar7 = local_68;
          } while (iVar9 < iVar8);
        }
        else {
          iVar8 = 1;
          puVar7 = (undefined1 *)*plVar2;
          pbVar11 = local_70;
        }
        memcpy(puVar7,pbVar11,(long)iVar8);
        puVar7 = (undefined1 *)(*plVar2 + (long)iVar8);
        *plVar2 = (long)puVar7;
        iVar8 = *piVar1 - iVar8;
      }
      else {
        *(undefined1 *)*plVar2 = 0xb;
        puVar7 = (undefined1 *)(*plVar2 + 1);
        *plVar2 = (long)puVar7;
        iVar8 = *piVar1 + -1;
      }
      *piVar1 = iVar8;
LAB_00c03174:
      if (iVar8 < 5) {
        local_70[0] = 0x10;
        if (iVar8 < 1) {
          iVar9 = 1;
          pbVar11 = local_70;
          do {
            memcpy(puVar7,pbVar11,(long)iVar8);
            iVar4 = *(int *)(param_2 + 2);
            uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,piVar1);
            if ((uVar6 & 1) == 0) {
              pbVar11 = (byte *)0x0;
              param_2[1] = 0;
              iVar9 = 0;
              *(undefined4 *)(param_2 + 2) = 0;
              *(undefined1 *)(param_2 + 3) = 1;
              goto LAB_00c03234;
            }
            iVar8 = *(int *)(param_2 + 2);
            iVar9 = iVar9 - iVar4;
            pbVar11 = pbVar11 + iVar4;
            param_2[1] = local_68;
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar8;
            puVar7 = local_68;
          } while (iVar8 < iVar9);
        }
        else {
          iVar9 = 1;
          pbVar11 = local_70;
        }
        memcpy(puVar7,pbVar11,(long)iVar9);
        pbVar11 = (byte *)(*plVar2 + (long)iVar9);
        *plVar2 = (long)pbVar11;
        iVar9 = *piVar1 - iVar9;
      }
      else {
        *puVar7 = 0x10;
        pbVar11 = (byte *)(*plVar2 + 1);
        *plVar2 = (long)pbVar11;
        iVar9 = *piVar1 + -1;
      }
      *piVar1 = iVar9;
LAB_00c03234:
      uVar12 = *puVar3;
      if (iVar9 < 5) {
        pbVar11 = local_70;
        if (0x7f < uVar12) {
          pbVar14 = local_70;
          uVar15 = uVar12;
          do {
            uVar12 = uVar15 >> 7;
            uVar5 = uVar15 >> 0xe;
            pbVar11 = pbVar14 + 1;
            *pbVar14 = (byte)uVar15 | 0x80;
            pbVar14 = pbVar11;
            uVar15 = uVar12;
          } while (uVar5 != 0);
        }
        *pbVar11 = (byte)uVar12;
        iVar9 = ((int)pbVar11 - (int)local_70) + 1;
        iVar8 = *piVar1;
        puVar7 = (undefined1 *)*plVar2;
        pbVar11 = local_70;
        if (iVar8 < iVar9) {
          pbVar11 = local_70;
          do {
            memcpy(puVar7,pbVar11,(long)iVar8);
            iVar4 = *(int *)(param_2 + 2);
            uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,piVar1);
            if ((uVar6 & 1) == 0) {
              puVar7 = (undefined1 *)0x0;
              param_2[1] = 0;
              iVar9 = 0;
              *(undefined4 *)(param_2 + 2) = 0;
              *(undefined1 *)(param_2 + 3) = 1;
              goto LAB_00c03358;
            }
            iVar8 = *(int *)(param_2 + 2);
            iVar9 = iVar9 - iVar4;
            pbVar11 = pbVar11 + iVar4;
            param_2[1] = local_68;
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar8;
            puVar7 = local_68;
          } while (iVar8 < iVar9);
        }
        memcpy(puVar7,pbVar11,(long)iVar9);
        puVar7 = (undefined1 *)(*plVar2 + (long)iVar9);
        *plVar2 = (long)puVar7;
        iVar9 = *piVar1 - iVar9;
      }
      else {
        pbVar14 = pbVar11;
        if (0x7f < uVar12) {
          pbVar13 = pbVar11;
          uVar15 = uVar12;
          do {
            uVar12 = uVar15 >> 7;
            uVar5 = uVar15 >> 0xe;
            pbVar14 = pbVar13 + 1;
            *pbVar13 = (byte)uVar15 | 0x80;
            pbVar13 = pbVar14;
            uVar15 = uVar12;
          } while (uVar5 != 0);
        }
        *pbVar14 = (byte)uVar12;
        iVar9 = ((int)pbVar14 - (int)pbVar11) + 1;
        puVar7 = (undefined1 *)(*plVar2 + (long)iVar9);
        *plVar2 = (long)puVar7;
        iVar9 = *piVar1 - iVar9;
      }
      *piVar1 = iVar9;
LAB_00c03358:
      if (iVar9 < 5) {
        local_70[0] = 0x1a;
        if (iVar9 < 1) {
          iVar8 = 1;
          pbVar11 = local_70;
          do {
            memcpy(puVar7,pbVar11,(long)iVar9);
            iVar4 = *(int *)(param_2 + 2);
            uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,piVar1);
            if ((uVar6 & 1) == 0) {
              param_2[1] = 0;
              *(undefined4 *)(param_2 + 2) = 0;
              *(undefined1 *)(param_2 + 3) = 1;
              goto LAB_00c03418;
            }
            iVar9 = *(int *)(param_2 + 2);
            iVar8 = iVar8 - iVar4;
            pbVar11 = pbVar11 + iVar4;
            param_2[1] = local_68;
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar9;
            puVar7 = local_68;
          } while (iVar9 < iVar8);
        }
        else {
          iVar8 = 1;
          pbVar11 = local_70;
        }
        memcpy(puVar7,pbVar11,(long)iVar8);
        *plVar2 = *plVar2 + (long)iVar8;
        iVar8 = *piVar1 - iVar8;
      }
      else {
        *puVar7 = 0x1a;
        *plVar2 = *plVar2 + 1;
        iVar8 = *piVar1 + -1;
      }
      *piVar1 = iVar8;
LAB_00c03418:
      FUN_00c01404(puVar3,param_2);
      iVar9 = *(int *)(param_2 + 2);
      if (iVar9 < 5) {
        local_70[0] = 0xc;
        if (iVar9 < 1) {
          iVar8 = 1;
          puVar7 = (undefined1 *)*plVar2;
          pbVar11 = local_70;
          do {
            memcpy(puVar7,pbVar11,(long)iVar9);
            iVar4 = *(int *)(param_2 + 2);
            uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,piVar1);
            if ((uVar6 & 1) == 0) {
              param_2[1] = 0;
              *(undefined4 *)(param_2 + 2) = 0;
              *(undefined1 *)(param_2 + 3) = 1;
              goto LAB_00c034e8;
            }
            iVar9 = *(int *)(param_2 + 2);
            iVar8 = iVar8 - iVar4;
            pbVar11 = pbVar11 + iVar4;
            param_2[1] = local_68;
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar9;
            puVar7 = local_68;
          } while (iVar9 < iVar8);
        }
        else {
          iVar8 = 1;
          puVar7 = (undefined1 *)*plVar2;
          pbVar11 = local_70;
        }
        memcpy(puVar7,pbVar11,(long)iVar8);
        *plVar2 = *plVar2 + (long)iVar8;
        iVar8 = *piVar1 - iVar8;
      }
      else {
        *(undefined1 *)*plVar2 = 0xc;
        *plVar2 = *plVar2 + 1;
        iVar8 = *piVar1 + -1;
      }
      *piVar1 = iVar8;
    }
LAB_00c034e8:
    lVar16 = lVar16 + 1;
  } while( true );
}


