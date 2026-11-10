/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b3bc; name: FUN_0317b3bc
 */


undefined8 FUN_0317b3bc(long **param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  int iVar13;
  long *plVar14;
  uint uVar15;
  long *local_70;
  undefined8 local_68;
  
  plVar14 = (long *)PTR_PTR_047d1a50;
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
                                 (PTR_PTR_047d1a50,(ulong)uVar4 * 0x60);
    uVar15 = 0;
    local_68 = CONCAT44(uVar4,uVar4);
    plVar10 = local_70;
    do {
      *plVar10 = 0;
      plVar10[1] = -0x8000000000000000;
      uVar5 = *(uint *)(param_2 + 1);
      if ((int)uVar5 < 1) {
        *plVar10 = 0;
        plVar10[1] = -0x8000000000000000;
      }
      else {
        pvVar12 = (void *)*param_2;
        pvVar6 = (void *)(**(code **)(*plVar14 + 0x18))(plVar14,(ulong)uVar5 << 6);
        *plVar10 = (long)pvVar6;
        uVar3 = uVar5 & 3;
        *(uint *)(plVar10 + 1) = uVar5;
        *(uint *)((long)plVar10 + 0xc) = uVar5;
        if (2 < uVar5 - 1) {
          iVar13 = -(uVar5 & 0xfffffffc);
          do {
            memcpy(pvVar6,pvVar12,0x40);
            memcpy((void *)((long)pvVar6 + 0x40),(void *)((long)pvVar12 + 0x40),0x40);
            memcpy((void *)((long)pvVar6 + 0x80),(void *)((long)pvVar12 + 0x80),0x40);
            pvVar1 = (void *)((long)pvVar6 + 0xc0);
            pvVar2 = (void *)((long)pvVar12 + 0xc0);
            pvVar6 = (void *)((long)pvVar6 + 0x100);
            pvVar12 = (void *)((long)pvVar12 + 0x100);
            memcpy(pvVar1,pvVar2,0x40);
            iVar13 = iVar13 + 4;
            plVar14 = (long *)PTR_PTR_047d1a50;
          } while (iVar13 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          memcpy(pvVar6,pvVar12,0x40);
          pvVar12 = (void *)((long)pvVar12 + 0x40);
          pvVar6 = (void *)((long)pvVar6 + 0x40);
        }
      }
      plVar10[2] = 0;
      plVar10[3] = -0x8000000000000000;
      uVar5 = *(uint *)(param_2 + 3);
      if ((int)uVar5 < 1) {
        plVar10[2] = 0;
        plVar10[3] = -0x8000000000000000;
      }
      else {
        pvVar12 = (void *)param_2[2];
        pvVar6 = (void *)(**(code **)(*plVar14 + 0x18))(plVar14,(ulong)uVar5 * 100);
        plVar10[2] = (long)pvVar6;
        uVar3 = uVar5 & 3;
        *(uint *)(plVar10 + 3) = uVar5;
        *(uint *)((long)plVar10 + 0x1c) = uVar5;
        if (2 < uVar5 - 1) {
          iVar13 = -(uVar5 & 0xfffffffc);
          do {
            memcpy(pvVar6,pvVar12,100);
            memcpy((void *)((long)pvVar6 + 100),(void *)((long)pvVar12 + 100),100);
            memcpy((void *)((long)pvVar6 + 200),(void *)((long)pvVar12 + 200),100);
            pvVar1 = (void *)((long)pvVar6 + 300);
            pvVar2 = (void *)((long)pvVar12 + 300);
            pvVar6 = (void *)((long)pvVar6 + 400);
            pvVar12 = (void *)((long)pvVar12 + 400);
            memcpy(pvVar1,pvVar2,100);
            iVar13 = iVar13 + 4;
            plVar14 = (long *)PTR_PTR_047d1a50;
          } while (iVar13 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          memcpy(pvVar6,pvVar12,100);
          pvVar12 = (void *)((long)pvVar12 + 100);
          pvVar6 = (void *)((long)pvVar6 + 100);
        }
      }
      plVar10[4] = param_2[4];
      lVar7 = param_2[9];
      plVar10[7] = param_2[7];
      plVar10[9] = lVar7;
      lVar7 = param_2[6];
      plVar10[8] = param_2[8];
      plVar10[6] = lVar7;
      uVar15 = uVar15 + 1;
      *(undefined1 *)(plVar10 + 10) = *(undefined1 *)(param_2 + 10);
      plVar10 = plVar10 + 0xc;
      param_2 = param_2 + 0xc;
    } while (uVar15 != uVar4);
  }
  if (&local_70 != param_1) {
    lVar7 = (long)*(int *)(param_1 + 1);
    if (*(int *)(param_1 + 1) != 0) {
      lVar9 = 0;
      lVar11 = lVar7 * 0x60;
      plVar10 = *param_1;
      do {
        uVar4 = *(uint *)((long)plVar10 + lVar11 + -0x44);
        *(undefined4 *)(plVar10 + lVar7 * 0xc + -9) = 0;
        if ((-1 < (int)uVar4) && (plVar10[lVar7 * 0xc + -10] != 0)) {
          (**(code **)(*plVar14 + 0x20))(plVar14,plVar10[lVar7 * 0xc + -10],(ulong)uVar4 * 100);
        }
        uVar4 = *(uint *)((long)plVar10 + lVar11 + -0x54);
        plVar10[lVar7 * 0xc + -10] = 0;
        *(undefined4 *)((long)plVar10 + lVar11 + -0x44) = 0x80000000;
        *(undefined4 *)(plVar10 + lVar7 * 0xc + -0xb) = 0;
        if ((-1 < (int)uVar4) && (plVar10[lVar7 * 0xc + -0xc] != 0)) {
          (**(code **)(*plVar14 + 0x20))(plVar14,plVar10[lVar7 * 0xc + -0xc],(ulong)uVar4 << 6);
        }
        lVar9 = lVar9 + 0x60;
        plVar10[lVar7 * 0xc + -0xc] = 0;
        *(undefined4 *)((long)plVar10 + lVar11 + -0x54) = 0x80000000;
        plVar10 = plVar10 + -0xc;
      } while (lVar11 != lVar9);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x20))(plVar14,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x60);
    }
    *param_1 = (long *)0x0;
    param_1[1] = (long *)0x8000000000000000;
    FUN_0318049c(&local_70);
    *param_1 = local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (long *)0x0;
    local_68 = 0;
  }
  FUN_03180140(param_1);
  lVar7 = (long)(int)local_68;
  if ((int)local_68 != 0) {
    lVar9 = 0;
    lVar11 = lVar7 * 0x60;
    plVar10 = local_70;
    do {
      uVar4 = *(uint *)((long)plVar10 + lVar11 + -0x44);
      *(undefined4 *)(plVar10 + lVar7 * 0xc + -9) = 0;
      if ((-1 < (int)uVar4) && (plVar10[lVar7 * 0xc + -10] != 0)) {
        (**(code **)(*plVar14 + 0x20))(plVar14,plVar10[lVar7 * 0xc + -10],(ulong)uVar4 * 100);
      }
      uVar4 = *(uint *)((long)plVar10 + lVar11 + -0x54);
      plVar10[lVar7 * 0xc + -10] = 0;
      *(undefined4 *)((long)plVar10 + lVar11 + -0x44) = 0x80000000;
      *(undefined4 *)(plVar10 + lVar7 * 0xc + -0xb) = 0;
      if ((-1 < (int)uVar4) && (plVar10[lVar7 * 0xc + -0xc] != 0)) {
        (**(code **)(*plVar14 + 0x20))(plVar14,plVar10[lVar7 * 0xc + -0xc],(ulong)uVar4 << 6);
      }
      lVar9 = lVar9 + 0x60;
      plVar10[lVar7 * 0xc + -0xc] = 0;
      *(undefined4 *)((long)plVar10 + lVar11 + -0x54) = 0x80000000;
      plVar10 = plVar10 + -0xc;
    } while (lVar11 != lVar9);
  }
  lVar7 = local_68;
  uVar8 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_70 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x20))(plVar14,local_70,uVar8 * 0x60);
  }
  return 1;
}


