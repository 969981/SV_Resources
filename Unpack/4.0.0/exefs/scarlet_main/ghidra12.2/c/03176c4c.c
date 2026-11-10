/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176c4c; name: FUN_03176c4c
 */


undefined8 FUN_03176c4c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)uVar4 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    puVar16 = (undefined4 *)*param_2;
    local_70 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 * 0x30)
    ;
    uVar15 = 0;
    local_68 = CONCAT44(uVar4,uVar4);
    puVar12 = local_70;
    do {
      *puVar12 = *puVar16;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar16 + 2);
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0x8000000000000000;
      uVar5 = puVar16[6];
      if ((int)uVar5 < 1) {
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar12 + 6) = 0x8000000000000000;
      }
      else {
        puVar18 = *(undefined8 **)(puVar16 + 4);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 3);
        uVar2 = uVar5 & 7;
        *(undefined8 **)(puVar12 + 4) = puVar7;
        puVar12[6] = uVar5;
        puVar12[7] = uVar5;
        if (6 < uVar5 - 1) {
          iVar10 = -(uVar5 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            puVar8[2] = puVar18[2];
            puVar8[3] = puVar18[3];
            puVar8[4] = puVar18[4];
            puVar8[5] = puVar18[5];
            puVar8[6] = puVar18[6];
            puVar17 = puVar18 + 7;
            puVar7 = puVar8 + 8;
            puVar18 = puVar18 + 8;
            iVar10 = iVar10 + 8;
            puVar8[7] = *puVar17;
            puVar8 = puVar7;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar18;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      *(undefined8 *)(puVar12 + 8) = 0;
      *(undefined8 *)(puVar12 + 10) = 0x8000000000000000;
      uVar5 = puVar16[10];
      if ((int)uVar5 < 1) {
        *(undefined8 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 10) = 0x8000000000000000;
      }
      else {
        puVar18 = *(undefined8 **)(puVar16 + 8);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 4);
        uVar2 = uVar5 & 3;
        *(undefined8 **)(puVar12 + 8) = puVar7;
        puVar12[10] = uVar5;
        puVar12[0xb] = uVar5;
        if (2 < uVar5 - 1) {
          iVar10 = -(uVar5 & 0xfffffffc);
          puVar8 = puVar7;
          puVar17 = puVar18;
          do {
            uVar3 = puVar17[1];
            puVar7 = puVar8 + 8;
            *puVar8 = *puVar17;
            puVar8[1] = uVar3;
            puVar18 = puVar17 + 8;
            uVar3 = puVar17[3];
            iVar10 = iVar10 + 4;
            puVar8[2] = puVar17[2];
            puVar8[3] = uVar3;
            uVar3 = puVar17[5];
            puVar8[4] = puVar17[4];
            puVar8[5] = uVar3;
            uVar3 = puVar17[7];
            puVar8[6] = puVar17[6];
            puVar8[7] = uVar3;
            puVar8 = puVar7;
            puVar17 = puVar18;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar3 = puVar18[1];
          *puVar7 = *puVar18;
          puVar7[1] = uVar3;
          puVar7 = puVar7 + 2;
          puVar18 = puVar18 + 2;
        }
      }
      uVar15 = uVar15 + 1;
      puVar12 = puVar12 + 0xc;
      puVar16 = puVar16 + 0xc;
    } while (uVar15 != uVar4);
  }
  if (&local_70 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar13 = *param_1;
      lVar11 = 0;
      lVar14 = (long)(int)param_1[1] * 0x30;
      do {
        lVar1 = lVar13 + lVar14;
        *(undefined4 *)(lVar1 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 4);
        }
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined4 *)(lVar1 + -4) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar1 + -0x20),(ulong)*(uint *)(lVar1 + -0x14) << 3);
        }
        lVar11 = lVar11 + 0x30;
        lVar13 = lVar13 + -0x30;
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
      } while (lVar14 != lVar11);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x30);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_0317d4f0(&local_70);
    *param_1 = (long)local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
  }
  FUN_0317d3e0(param_1);
  lVar11 = (long)(int)local_68;
  if ((int)local_68 != 0) {
    lVar13 = 0;
    puVar12 = local_70;
    do {
      puVar12[lVar11 * 0xc + -2] = 0;
      if ((-1 < (int)puVar12[lVar11 * 0xc + -1]) && (*(long *)(puVar12 + lVar11 * 0xc + -4) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(puVar12 + lVar11 * 0xc + -4),
                   (ulong)(uint)puVar12[lVar11 * 0xc + -1] << 4);
      }
      *(undefined8 *)(puVar12 + lVar11 * 0xc + -4) = 0;
      puVar12[lVar11 * 0xc + -1] = 0x80000000;
      puVar12[lVar11 * 0xc + -6] = 0;
      if ((-1 < (int)puVar12[lVar11 * 0xc + -5]) && (*(long *)(puVar12 + lVar11 * 0xc + -8) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(puVar12 + lVar11 * 0xc + -8),
                   (ulong)(uint)puVar12[lVar11 * 0xc + -5] << 3);
      }
      lVar13 = lVar13 + 0x30;
      *(undefined8 *)(puVar12 + lVar11 * 0xc + -8) = 0;
      puVar12[lVar11 * 0xc + -5] = 0x80000000;
      puVar12 = puVar12 + -0xc;
    } while (lVar11 * 0x30 != lVar13);
  }
  lVar11 = local_68;
  uVar9 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar9 * 0x30);
  }
  return 1;
}


