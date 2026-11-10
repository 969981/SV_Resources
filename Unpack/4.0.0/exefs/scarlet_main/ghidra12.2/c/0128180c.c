/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0128180c; name: FUN_0128180c
 */


undefined1  [16] FUN_0128180c(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_28;
  
  piVar4 = (int *)param_1[1];
  fVar9 = 0.0;
  if (piVar4 == (int *)0x0) {
    fVar11 = 0.0;
    fVar10 = 0.0;
  }
  else {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_28 = &DAT_03c705dc;
    puVar3 = bsearch(&local_28,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    puVar2 = PTR_DAT_047d5608;
    if (puVar3 == (uint *)0x0) {
      fVar10 = 0.0;
    }
    else {
      piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
      uVar1 = *puVar6;
      if (uVar1 < 7) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
          piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar5 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        fVar10 = *(float *)(*param_1 + uVar5);
      }
      else {
        fVar10 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
          fVar10 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
        }
      }
    }
    piVar4 = (int *)param_1[1];
    if (piVar4 == (int *)0x0) {
      fVar9 = 0.0;
      fVar11 = 0.0;
    }
    else {
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)piVar4 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_28 = &DAT_03bf41a8;
      puVar3 = bsearch(&local_28,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar3 == (uint *)0x0) {
        fVar11 = 0.0;
      }
      else {
        piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
        uVar1 = *puVar6;
        if (uVar1 < 7) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)0x0;
          if ((ulong)puVar6[3] != 0) {
            puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
            piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
        }
        if (*(long *)(puVar2 + uVar5 * 8) == 4) {
          if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
          }
          fVar11 = *(float *)(*param_1 + uVar5);
        }
        else {
          fVar11 = 0.0;
          if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar11 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
      piVar4 = (int *)param_1[1];
      if (piVar4 != (int *)0x0) {
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)piVar4 + uVar5);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_28 = &DAT_03c9820a;
        puVar3 = bsearch(&local_28,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar3 != (uint *)0x0) {
          piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
          puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar1 = *puVar6;
          if (uVar1 < 7) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)0x0;
            if ((ulong)puVar6[3] != 0) {
              puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
              piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
             (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
          }
          if (*(long *)(puVar2 + uVar5 * 8) == 4) {
            if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
            }
            fVar9 = *(float *)(*param_1 + uVar5);
            goto LAB_01281ab4;
          }
          if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar9 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
            goto LAB_01281ab4;
          }
        }
      }
      fVar9 = 0.0;
    }
  }
LAB_01281ab4:
  auVar8._4_4_ = fVar11;
  auVar8._0_4_ = fVar10;
  auVar8._8_4_ = fVar9;
  auVar8._12_4_ = 0;
  return auVar8;
}


