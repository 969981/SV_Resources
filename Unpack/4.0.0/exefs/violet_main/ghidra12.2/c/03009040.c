/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03009040; name: FUN_03009040
 */


void FUN_03009040(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  
  piVar17 = (int *)*param_2;
  piVar19 = (int *)param_2[1];
  if (piVar17 != piVar19) {
    if (*(char *)(param_1 + 0x1658) != '\0') {
      if (0 < *(int *)(param_1 + 0x1640)) {
        lVar13 = *(long *)(param_1 + 0x1648);
        lVar9 = 0;
        lVar15 = *(long *)(param_1 + 0x1638);
        do {
          *(int *)(lVar13 + (ulong)*(uint *)(lVar15 + lVar9 * 0x10 + 0xc) * 4) = (int)lVar9;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(param_1 + 0x1640));
      }
      *(char *)(param_1 + 0x1658) = '\0';
      piVar17 = (int *)*param_2;
      piVar19 = (int *)param_2[1];
    }
    for (; piVar17 != piVar19; piVar17 = piVar17 + 1) {
      *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)*piVar17) = 0;
    }
    if (*(long *)(param_1 + 0x1660) != 0) {
      *(undefined1 *)(param_1 + 0x1668) = 1;
      local_f0 = local_e0;
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0x80000020;
      piVar17 = (int *)*param_2;
      piVar19 = (int *)param_2[1];
      if (0x20 < (int)((ulong)((long)piVar19 - (long)piVar17) >> 2)) {
        FUN_0133bb88(&local_f0,PTR_PTR_047d1a50,((long)piVar19 - (long)piVar17) * 0x40000000 >> 0x20
                    );
        piVar17 = (int *)*param_2;
        piVar19 = (int *)param_2[1];
      }
      puVar7 = PTR_PTR_047d1a50;
      if (piVar17 == piVar19) {
        uVar11 = (ulong)(uint)local_e8;
      }
      else {
        uVar10 = (long)(int)(uint)local_e8;
        do {
          uVar11 = uVar10 + 1;
          iVar18 = *piVar17;
          lVar9 = *(long *)(param_1 + 0x1648);
          uVar8 = (uint)uVar10;
          if ((long)((ulong)local_e8._4_4_ & 0x7fffffff) <= (long)uVar10) {
            FUN_02e9b320(&local_f0,puVar7,uVar11);
            uVar8 = (uint)local_e8;
          }
          piVar17 = piVar17 + 1;
          local_e8._0_4_ = (uint)uVar10 + 1;
          *(undefined4 *)(local_f0 + (long)(int)uVar8 * 4) =
               *(undefined4 *)(lVar9 + (long)iVar18 * 4);
          uVar10 = uVar11;
        } while (piVar19 != piVar17);
      }
      iVar18 = (int)uVar11;
      if (iVar18 < 0x21) {
        if (0 < iVar18) {
          uVar10 = 0;
          do {
            iVar18 = *(int *)(local_f0 + uVar10 * 4);
            if (uVar10 != 0) {
              uVar16 = uVar10;
              do {
                if (*(int *)(local_f0 + (ulong)((int)uVar16 - 1) * 4) <= iVar18) goto LAB_030091e8;
                *(int *)(local_f0 + uVar16 * 4) = *(int *)(local_f0 + (ulong)((int)uVar16 - 1) * 4);
                uVar6 = uVar16 - 1;
                bVar1 = 0 < (long)uVar16;
                uVar16 = uVar6;
              } while (uVar6 != 0 && bVar1);
            }
            uVar16 = 0;
LAB_030091e8:
            uVar10 = uVar10 + 1;
            *(int *)(local_f0 +
                    (-(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2)) =
                 iVar18;
          } while (uVar10 != (uVar11 & 0xffffffff));
        }
      }
      else {
        FUN_02efaeb0(local_f0,0,iVar18 + -1);
      }
      lVar9 = (long)*(int *)(param_1 + 0x15d4) - (long)(int)(uint)local_e8;
      iVar18 = (int)lVar9;
      if (0 < (int)(uint)local_e8) {
        iVar12 = (uint)local_e8 - 1;
        iVar14 = *(int *)(param_1 + 0x1640) + -1;
        uVar11 = (ulong)(uint)local_e8;
LAB_03009230:
        iVar4 = *(int *)(local_f0 + (uVar11 - 1) * 4);
        if (iVar4 < iVar18) {
          piVar17 = (int *)(local_f0 + (long)iVar12 * 4);
          do {
            if (iVar14 == *piVar17) {
              iVar14 = iVar14 + -1;
            }
            else if (*piVar17 <= iVar14) goto LAB_03009270;
            iVar12 = iVar12 + -1;
            piVar17 = piVar17 + -1;
          } while( true );
        }
        goto LAB_0300929c;
      }
LAB_030092a8:
      if ((int)(*(uint *)(param_1 + 0x1644) & 0x7fffffff) < iVar18) {
        FUN_02eaf0f8(param_1 + 0x1638,PTR_PTR_047d1a50,lVar9);
      }
      uVar8 = local_e8._4_4_;
      if (*(int *)(param_1 + 0x1640) != iVar18) {
        *(int *)(param_1 + 0x1640) = iVar18;
      }
      uVar11 = (ulong)local_e8._4_4_;
      local_e8 = (ulong)local_e8._4_4_ << 0x20;
      if ((-1 < (int)uVar8) && (local_f0 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f0,uVar11 << 2);
      }
    }
    *(int *)(param_1 + 0x15d4) =
         *(int *)(param_1 + 0x15d4) - (int)((ulong)(param_2[1] - *param_2) >> 2);
    *(undefined1 *)(param_1 + 0x16a0) = 1;
  }
  return;
LAB_03009270:
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1638) + (long)iVar14 * 0x10);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1638) + (long)iVar4 * 0x10);
  iVar5 = *(int *)((long)puVar2 + 0xc);
  puVar3[1] = puVar2[1];
  *puVar3 = *puVar2;
  iVar14 = iVar14 + -1;
  *(int *)(*(long *)(param_1 + 0x1648) + (long)iVar5 * 4) = iVar4;
LAB_0300929c:
  bVar1 = (long)uVar11 < 2;
  uVar11 = uVar11 - 1;
  if (bVar1) goto LAB_030092a8;
  goto LAB_03009230;
}


