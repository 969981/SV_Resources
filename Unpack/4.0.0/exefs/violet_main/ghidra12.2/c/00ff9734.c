/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff9734; name: FUN_00ff9734
 */


void FUN_00ff9734(long *param_1,long *param_2,long param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined8 local_18;
  
  piVar4 = (int *)param_2[1];
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar6);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_18 = *(undefined8 *)(param_3 + 8);
    puVar3 = bsearch(&local_18,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 != (uint *)0x0) {
      piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar7 = (ushort *)((long)piVar4 - (long)*piVar4);
      if (*puVar7 < 7) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar3 = (uint *)((long)piVar4 + (ulong)puVar7[3]);
          piVar5 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if (((4 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 != 0)) &&
         (*(char *)((long)piVar5 + uVar6) == '\x11')) {
        piVar5 = (int *)((long)((long)piVar4 + (ulong)puVar7[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar7[3]));
        puVar10 = (ushort *)((long)piVar5 - (long)*piVar5);
        if ((*puVar10 < 7) || ((ulong)puVar10[3] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar5 + (ulong)puVar10[3]) & 0xffffffff;
        }
        if (((*(long *)(PTR_DAT_047d5608 + uVar6 * 8) == 4) && (10 < *puVar10)) &&
           (((ulong)puVar10[5] != 0 && (param_4 < *(ushort *)((long)piVar5 + (ulong)puVar10[5])))))
        {
          if ((ulong)puVar10[3] == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (uint)*(char *)((long)piVar5 + (ulong)puVar10[3]);
          }
          uVar6 = (ulong)puVar10[4];
          if (uVar6 == 0) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = (ulong)*(uint *)((long)piVar5 + uVar6);
          }
          piVar11 = (int *)param_2[2];
          if (uVar13 == 0xf) {
            puVar3 = (uint *)((long)piVar11 +
                             (ulong)*(ushort *)((long)piVar11 + (4 - (long)*piVar11)));
            puVar3 = (uint *)((long)puVar3 + uVar14 * 4 + (ulong)*puVar3 + 4);
            piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
            puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
            if (((*puVar15 < 9) || ((ulong)puVar15[4] == 0)) ||
               (*(char *)((long)piVar1 + (ulong)puVar15[4]) == '\0')) {
              iVar12 = (int)*(undefined8 *)(PTR_DAT_047d5608 + 0x78);
            }
            else if (*puVar15 < 0xd) {
              iVar12 = 0;
            }
            else {
              iVar12 = 0;
              if ((ulong)puVar15[6] != 0) {
                iVar12 = *(int *)((long)piVar1 + (ulong)puVar15[6]);
              }
            }
          }
          else {
            iVar12 = (int)*(undefined8 *)(PTR_DAT_047d5608 + (ulong)uVar13 * 8);
          }
          if ((*puVar7 < 0xb) || ((ulong)puVar7[5] == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = (uint)*(ushort *)((long)piVar4 + (ulong)puVar7[5]);
          }
          lVar8 = *param_2;
          if (*(ushort *)((long)piVar11 - (long)*piVar11) < 5) {
            lVar9 = 0;
          }
          else {
            uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2];
            lVar9 = 0;
            if (uVar14 != 0) {
              puVar3 = (uint *)((long)piVar11 + uVar14);
              lVar9 = (long)puVar3 + (ulong)*puVar3;
            }
          }
          if (puVar10[4] == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (ulong)*(uint *)((long)piVar5 + uVar6);
          }
          puVar3 = (uint *)(lVar9 + uVar6 * 4 + 4);
          uVar2 = *puVar3;
          param_1[2] = (long)piVar11;
          *param_1 = lVar8 + (ulong)(uVar13 + iVar12 * param_4);
          param_1[1] = (long)puVar3 + (ulong)uVar2;
          return;
        }
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


