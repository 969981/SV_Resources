/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177abc; name: FUN_03177abc
 */


undefined8 FUN_03177abc(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 *puVar16;
  long *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  local_70 = (long *)0x0;
  local_68 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)uVar4 < 1) {
    local_70 = (long *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    param_2 = (undefined8 *)*param_2;
    local_70 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar4 << 5);
    uVar15 = 0;
    local_68 = CONCAT44(uVar4,uVar4);
    plVar12 = local_70;
    do {
      *plVar12 = 0;
      plVar12[1] = -0x8000000000000000;
      uVar5 = *(uint *)(param_2 + 1);
      if ((int)uVar5 < 1) {
        *plVar12 = 0;
        plVar12[1] = -0x8000000000000000;
      }
      else {
        puVar16 = (undefined4 *)*param_2;
        puVar7 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 2);
        uVar3 = uVar5 & 7;
        *plVar12 = (long)puVar7;
        *(uint *)(plVar12 + 1) = uVar5;
        *(uint *)((long)plVar12 + 0xc) = uVar5;
        if (6 < uVar5 - 1) {
          iVar9 = -(uVar5 & 0xfffffff8);
          puVar10 = puVar7;
          do {
            *puVar10 = *puVar16;
            puVar10[1] = puVar16[1];
            puVar10[2] = puVar16[2];
            puVar10[3] = puVar16[3];
            puVar10[4] = puVar16[4];
            puVar10[5] = puVar16[5];
            puVar10[6] = puVar16[6];
            puVar1 = puVar16 + 7;
            puVar7 = puVar10 + 8;
            puVar16 = puVar16 + 8;
            iVar9 = iVar9 + 8;
            puVar10[7] = *puVar1;
            puVar10 = puVar7;
          } while (iVar9 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar16;
          puVar7 = puVar7 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      plVar12[2] = 0;
      plVar12[3] = -0x8000000000000000;
      uVar5 = *(uint *)(param_2 + 3);
      if ((int)uVar5 < 1) {
        plVar12[2] = 0;
        plVar12[3] = -0x8000000000000000;
      }
      else {
        puVar16 = (undefined4 *)param_2[2];
        puVar7 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 2);
        uVar3 = uVar5 & 7;
        plVar12[2] = (long)puVar7;
        *(uint *)(plVar12 + 3) = uVar5;
        *(uint *)((long)plVar12 + 0x1c) = uVar5;
        if (6 < uVar5 - 1) {
          iVar9 = -(uVar5 & 0xfffffff8);
          puVar10 = puVar7;
          do {
            *puVar10 = *puVar16;
            puVar10[1] = puVar16[1];
            puVar10[2] = puVar16[2];
            puVar10[3] = puVar16[3];
            puVar10[4] = puVar16[4];
            puVar10[5] = puVar16[5];
            puVar10[6] = puVar16[6];
            puVar1 = puVar16 + 7;
            puVar7 = puVar10 + 8;
            puVar16 = puVar16 + 8;
            iVar9 = iVar9 + 8;
            puVar10[7] = *puVar1;
            puVar10 = puVar7;
          } while (iVar9 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar16;
          puVar7 = puVar7 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      uVar15 = uVar15 + 1;
      plVar12 = plVar12 + 4;
      param_2 = param_2 + 4;
    } while (uVar15 != uVar4);
  }
  if (&local_70 != (long **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar13 = *param_1;
      lVar11 = 0;
      lVar14 = (long)(int)param_1[1] * 0x20;
      do {
        lVar2 = lVar13 + lVar14;
        *(undefined4 *)(lVar2 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
        }
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined4 *)(lVar2 + -4) = 0x80000000;
        *(undefined4 *)(lVar2 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -0x14)) && (*(long *)(lVar2 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar2 + -0x20),(ulong)*(uint *)(lVar2 + -0x14) << 2);
        }
        lVar11 = lVar11 + 0x20;
        lVar13 = lVar13 + -0x20;
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined4 *)(lVar2 + -0x14) = 0x80000000;
      } while (lVar14 != lVar11);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 5);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_0317e05c(&local_70);
    *param_1 = (long)local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (long *)0x0;
    local_68 = 0;
  }
  FUN_0317decc(param_1);
  lVar11 = (long)(int)local_68;
  if ((int)local_68 != 0) {
    lVar13 = 0;
    lVar14 = lVar11 * 0x20;
    plVar12 = local_70;
    do {
      uVar4 = *(uint *)((long)plVar12 + lVar14 + -4);
      *(undefined4 *)(plVar12 + lVar11 * 4 + -1) = 0;
      if ((-1 < (int)uVar4) && (plVar12[lVar11 * 4 + -2] != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,plVar12[lVar11 * 4 + -2],(ulong)uVar4 << 2);
      }
      uVar4 = *(uint *)((long)plVar12 + lVar14 + -0x14);
      plVar12[lVar11 * 4 + -2] = 0;
      *(undefined4 *)((long)plVar12 + lVar14 + -4) = 0x80000000;
      *(undefined4 *)(plVar12 + lVar11 * 4 + -3) = 0;
      if ((-1 < (int)uVar4) && (plVar12[lVar11 * 4 + -4] != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,plVar12[lVar11 * 4 + -4],(ulong)uVar4 << 2);
      }
      lVar13 = lVar13 + 0x20;
      plVar12[lVar11 * 4 + -4] = 0;
      *(undefined4 *)((long)plVar12 + lVar14 + -0x14) = 0x80000000;
      plVar12 = plVar12 + -4;
    } while (lVar14 != lVar13);
  }
  lVar11 = local_68;
  uVar8 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_70 != (long *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar8 << 5);
  }
  return 1;
}


