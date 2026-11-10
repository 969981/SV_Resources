/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e08620; name: FUN_00e08620
 */


void FUN_00e08620(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined8 extraout_d0;
  float fVar14;
  float fVar13;
  float fVar15;
  undefined1 auVar12 [16];
  undefined8 extraout_var;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_78 [2];
  long *local_70;
  long *local_68;
  long local_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  long *local_28;
  
  fVar21 = param_4._12_4_;
  fVar20 = param_4._8_4_;
  fVar19 = param_4._4_4_;
  fVar18 = param_4._0_4_;
  uVar17 = param_3._8_8_;
  uVar16 = param_3._0_8_;
  iVar7 = *(int *)(param_5 + 0x40);
  if (iVar7 == 1) {
    plVar9 = (long *)*param_6;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar10 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)*param_7;
    local_68 = plVar10;
    local_28 = plVar9;
    if (plVar10 == (long *)0x0) {
      FUN_00e0ad20(param_5,&local_28,&local_68);
    }
    else {
      if (plVar10[1] != 0) {
        plVar2 = plVar10 + 2;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00e0ad20(param_5,&local_28,&local_68);
      if (plVar10[1] != 0) {
        plVar2 = plVar10 + 2;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar10 = plVar9 + 2;
      do {
        lVar8 = *plVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    iVar7 = *(int *)(param_5 + 0x40);
  }
  if (iVar7 == 3) {
    plVar9 = (long *)*param_6;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar10 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)*param_7;
    local_70 = plVar10;
    if (plVar10 == (long *)0x0) {
      FUN_00e0a530(param_5,&local_70);
    }
    else {
      if (plVar10[1] != 0) {
        plVar2 = plVar10 + 2;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00e0a530(param_5,&local_70);
      if (plVar10[1] != 0) {
        plVar2 = plVar10 + 2;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar10 = plVar9 + 2;
      do {
        lVar8 = *plVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
  }
  if ((*(int *)(param_5 + 0x40) == 2) && (*(char *)(param_5 + 0x57d) != '\0')) {
    *(undefined1 *)(param_5 + 0x57d) = 0;
    if (*(char *)(param_5 + 0x57c) != '\0') {
      if (*(long *)(*(long *)(param_5 + 0x130) + 0x100) == 0) {
        FUN_00e0bbe4(*param_7);
      }
      bVar6 = *(int *)(*(long *)(param_5 + 0x48) + 0x40) == 0;
      goto LAB_00e08670;
    }
    FUN_00e09ce4(*(undefined8 *)(param_5 + 0x48));
    lVar8 = *(long *)(*(long *)(param_5 + 0x130) + 0x100);
    if (*(int *)(param_5 + 0x578) == 0) {
      if (lVar8 != 0) {
        FUN_00e0ac24(*param_7);
      }
    }
    else if (lVar8 == 0) {
      FUN_00e0bbe4(*param_7);
    }
  }
  bVar6 = false;
LAB_00e08670:
  if ((*(char *)(param_5 + 0x57c) != '\0') && (*(int *)(param_5 + 0x40) == 2)) {
    if (*(char *)(param_5 + 0x3a0) == '\0') {
      fVar20 = (float)*(undefined8 *)(param_5 + 0x118);
      fVar21 = (float)((ulong)*(undefined8 *)(param_5 + 0x118) >> 0x20);
      fVar18 = (float)*(undefined8 *)(param_5 + 0x110);
      fVar19 = (float)((ulong)*(undefined8 *)(param_5 + 0x110) >> 0x20);
    }
    else {
      local_60 = param_5;
      (**(code **)(param_5 + 0x60))(param_5 + 0x80,&local_60);
      *(undefined8 *)(param_5 + 0xe8) = extraout_var;
      *(undefined8 *)(param_5 + 0xe0) = extraout_d0;
      *(long *)(param_5 + 0xf8) = param_2._8_8_;
      *(long *)(param_5 + 0xf0) = param_2._0_8_;
      *(undefined8 *)(param_5 + 0x108) = uVar17;
      *(undefined8 *)(param_5 + 0x100) = uVar16;
      *(ulong *)(param_5 + 0x118) = CONCAT44(fVar21,fVar20);
      *(ulong *)(param_5 + 0x110) = CONCAT44(fVar19,fVar18);
    }
    fVar11 = *(float *)(param_5 + 0x120) - fVar18;
    fVar13 = *(float *)(param_5 + 0x124) - fVar19;
    fVar14 = *(float *)(param_5 + 0x128) - fVar20;
    fVar15 = *(float *)(param_5 + 300) - fVar21;
    fVar11 = fVar11 * fVar11;
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    lVar8 = *(long *)(param_5 + 0x48);
    auVar12._0_4_ = fVar11 + fVar13;
    auVar12._4_4_ = fVar14 + fVar15;
    auVar12._8_4_ = fVar11 + fVar13;
    auVar12._12_4_ = fVar14 + fVar15;
    auVar12 = NEON_ext(auVar12,auVar12,4,1);
    if ((bVar6 || 0.0001 < SQRT(auVar12._0_4_ + auVar12._4_4_)) || (*(int *)(lVar8 + 400) == 1)) {
      auVar4._4_4_ = fVar19;
      auVar4._0_4_ = fVar18;
      auVar4._8_4_ = fVar20;
      auVar4._12_4_ = fVar21;
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar18;
      auVar5._8_4_ = fVar20;
      auVar5._12_4_ = fVar21;
      auVar12 = NEON_ext(auVar4,auVar5,8,1);
      local_78[0] = 0xffffffff;
      uStack_58 = (ulong)auVar12._0_4_;
      local_60 = CONCAT44(fVar19,fVar18);
      FUN_00e09a8c(lVar8,&local_60,local_78);
      *(undefined8 *)(param_5 + 0x120) = *(undefined8 *)(param_5 + 0x110);
      *(undefined8 *)(param_5 + 0x128) = *(undefined8 *)(param_5 + 0x118);
      lVar8 = *(long *)(param_5 + 0x48);
    }
    pauVar1 = (undefined1 (*) [16])(param_5 + 0x100);
    uVar16 = *(undefined8 *)*pauVar1;
    local_60 = 0x4708000020;
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(lVar8 + 0x23c));
    auVar12 = NEON_ext(*pauVar1,*pauVar1,8,1);
    uStack_48 = (ulong)auVar12._0_4_;
    local_50 = uVar16;
    FUN_00e08a00(*(long *)(lVar8 + 0x180) + 0x28,*(long *)(lVar8 + 0x180),&local_60);
    iVar7 = *(int *)(lVar8 + 0x40);
    *(undefined4 *)(lVar8 + 0x40) = 1;
    *(ulong *)(lVar8 + 0x38) = (ulong)auVar12._0_4_;
    *(undefined8 *)(lVar8 + 0x30) = uVar16;
    if ((iVar7 != 1) && ((*(long *)(lVar8 + 0x220) == 0 || (*(char *)(lVar8 + 0x198) != '\0')))) {
      FUN_00e08aac(lVar8);
    }
    if (bVar6) {
      FUN_00e09e64(*(undefined8 *)(param_5 + 0x48));
    }
  }
  return;
}


