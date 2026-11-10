/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f3960; name: FUN_026f3960
 */


void FUN_026f3960(long param_1,int param_2,long param_3,long param_4,uint param_5)

{
  float *pfVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  ulong local_70 [2];
  undefined4 local_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30 [8];
  
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 300))) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x1f0) +
                  (long)*(int *)(*(long *)(param_1 + 200) + lVar7 * 4) * 4) == param_2) {
        if ((int)lVar7 == -1) {
          return;
        }
        lVar7 = *(long *)(param_1 + 0x1b8);
        lVar6 = lVar6 >> 0x20;
        lVar8 = lVar7 + lVar6 * 0x1c0;
        if (*(long *)(lVar8 + 0x1b0) == 0) {
          return;
        }
        if (7 < param_5) {
          param_5 = 8;
        }
        if (param_4 == 0) {
          if (param_5 == 0) goto LAB_026f3a5c;
          uVar14 = 0;
          do {
            local_30[uVar14] = 1.0;
            uVar14 = uVar14 + 1;
          } while (uVar14 < param_5);
        }
        else {
          if (param_5 == 0) goto LAB_026f3a5c;
          uVar14 = 0;
          do {
            uVar2 = uVar14 + 1;
            iVar10 = *(int *)(param_4 + uVar14 * 4);
            fVar19 = 2.0;
            if (iVar10 < 0x10000) {
              fVar19 = (float)iVar10 * 3.0517578e-05;
            }
            local_30[uVar14] = fVar19;
            uVar14 = uVar2;
          } while (uVar2 < param_5);
        }
        if (param_5 == 0) {
LAB_026f3a5c:
          bVar12 = true;
          local_30[0] = 1.0;
        }
        else {
          bVar12 = false;
        }
        local_40 = 0;
        uStack_38 = 0;
        local_50 = 0;
        uStack_48 = 0;
        _local_60 = 0;
        uStack_58 = 0;
        local_70[0] = 0;
        local_70[1] = 0;
        iVar10 = *(int *)(lVar7 + lVar6 * 0x1c0 + 0x38);
        bVar5 = iVar10 == 2;
        uVar3 = iVar10 - 1;
        uVar13 = (uint)bVar5;
        if (param_3 == 0) {
          if (param_5 < 2) {
            lVar18 = 0;
            lVar11 = 0;
            lVar16 = 0;
            lVar15 = 0;
            lVar17 = 0;
          }
          else if (param_5 < 5) {
            lVar11 = 0;
            lVar15 = 0;
            lVar18 = 1;
            lVar16 = 1;
            lVar17 = 1;
          }
          else if (param_5 == 5) {
            lVar11 = 4;
            lVar18 = 1;
            lVar16 = 4;
            lVar15 = 4;
            lVar17 = 4;
          }
          else if (param_5 < 7) {
            lVar16 = 5;
            lVar11 = 4;
            lVar18 = 1;
            lVar15 = 4;
            lVar17 = 5;
          }
          else {
            lVar15 = 6;
            lVar17 = 6;
            if (param_5 != 7) {
              lVar17 = 7;
            }
            lVar16 = 5;
            lVar11 = 4;
            lVar18 = 1;
          }
          uVar9 = (uint)bVar5;
          local_70[0] = (ulong)(uint)local_30[0];
          *(float *)((long)local_70 + (ulong)((1 << bVar5) + uVar3) * 4) = local_30[lVar18];
          if (uVar3 == 1) {
            local_30[3] = local_30[3] * 0.5;
            local_30[2] = local_30[2] * 0.5;
            _local_60 = CONCAT44(local_30[2],local_60);
            uStack_58 = CONCAT44(uStack_58._4_4_,local_30[3]);
          }
          fVar4 = local_30[3];
          *(float *)((long)local_70 + (ulong)(uint)(2 << (ulong)uVar9) * 4) = local_30[2];
          fVar19 = local_30[lVar11];
          *(float *)((long)local_70 + (ulong)((3 << (ulong)uVar9) + uVar3) * 4) = fVar4;
          *(float *)((long)local_70 + (ulong)(uint)(4 << (ulong)uVar9) * 4) = fVar19;
          *(float *)((long)local_70 + (ulong)((5 << (ulong)uVar13) + uVar3) * 4) = local_30[lVar16];
          *(float *)((long)local_70 + (ulong)(uint)(6 << (ulong)uVar13) * 4) = local_30[lVar15];
          *(float *)((long)local_70 + (ulong)((7 << (ulong)uVar13) + uVar3) * 4) = local_30[lVar17];
        }
        else if (!bVar12) {
          uVar14 = 0;
          do {
            lVar17 = uVar14 * 4;
            pfVar1 = local_30 + uVar14;
            uVar13 = (uint)uVar14;
            uVar14 = uVar14 + 1;
            *(float *)((long)local_70 +
                      (ulong)((*(int *)(param_3 + lVar17) << bVar5) + (uVar3 & uVar13)) * 4) =
                 *pfVar1;
          } while (uVar14 < param_5);
        }
        iVar10 = *(int *)(param_1 + 0x638);
        if (6 < iVar10 - 1U) {
          iVar10 = 8;
        }
        (**(code **)(lVar8 + 0x1b0))(lVar7 + lVar6 * 0x1c0,local_70,iVar10);
        return;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x100000000;
    } while (*(int *)(param_1 + 300) != lVar7);
  }
  return;
}


