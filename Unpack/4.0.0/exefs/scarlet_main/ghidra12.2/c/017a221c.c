/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a221c; name: FUN_017a221c
 */


long FUN_017a221c(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong local_120;
  undefined1 local_114 [4];
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long *plStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *plStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long *local_b8;
  int local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  ulong local_88;
  char local_80;
  long *local_78;
  long *local_70;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x168) + *(long *)(param_1 + 0x240) * 8);
  if (*(long *)(lVar7 + 0x88) == *(long *)(lVar7 + 0x80)) {
    return *(long *)(param_1 + 0x240);
  }
  uVar11 = 0;
  plVar1 = (long *)(param_1 + 0x40);
  pLVar2 = (LightEventType *)(param_1 + 0x48);
LAB_017a2274:
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_017a228c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_017a228c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_017a228c:
  uVar12 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x168) +
                                         *(long *)(param_1 + 0x240) * 8) + 0x80) + uVar11 * 8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x168) + uVar12 * 8);
  local_120 = uVar12;
  if (*(long *)(lVar7 + 0x50) != *(long *)(lVar7 + 0x48)) {
    uVar9 = 0;
LAB_017a22b8:
    lVar7 = *(long *)(lVar7 + 0x48);
    plVar8 = (long *)(lVar7 + uVar9 * 0x38);
    if (plVar8[1] != *plVar8) {
      uVar13 = 0;
      lVar14 = 0x60;
      do {
        lVar10 = *(long *)(lVar7 + uVar9 * 0x38);
        lVar7 = lVar10 + lVar14;
        local_d0 = *(long *)(lVar7 + -0x60);
        local_c8 = *(undefined8 *)(lVar7 + -0x58);
        local_c0 = *(undefined8 *)(lVar7 + -0x50);
        local_b8 = *(long **)(lVar7 + -0x48);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x18))();
        }
        local_b0 = *(int *)(lVar7 + -0x40);
        local_a8 = *(long *)(lVar7 + -0x38);
        local_a0 = *(undefined8 *)(lVar7 + -0x30);
        local_98 = *(undefined8 *)(lVar7 + -0x28);
        local_90 = *(long **)(lVar7 + -0x20);
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))();
        }
        local_88 = *(ulong *)(lVar7 + -0x18);
        local_80 = *(char *)(lVar7 + -0x10);
        local_78 = *(long **)(lVar7 + -8);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        local_70 = *(long **)(lVar10 + lVar14);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))();
        }
        plVar8 = local_b8;
        local_f0 = local_d0;
        uStack_e8 = local_c8;
        local_e0 = local_c0;
        plStack_d8 = local_b8;
        if (local_b8 == (long *)0x0) {
          uVar6 = FUN_017a2d60(param_1,&local_f0,local_b0);
        }
        else {
          (**(code **)(*local_b8 + 0x18))(local_b8);
          uVar6 = FUN_017a2d60(param_1,&local_f0,local_b0);
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        plVar8 = local_90;
        if (local_b0 == 0) {
          bVar4 = uVar6 == local_88;
        }
        else if (local_b0 == 1) {
          lVar7 = param_1 + 0x60;
          if (local_88 == 1) {
            plVar8 = (long *)FUN_00c8f0cc(lVar7,&local_a8);
            bVar5 = *(long *)(*(long *)(param_1 + 200) + *plVar8 * 0x38 + 0x20) == 0;
          }
          else {
            if (local_88 != 0) {
              plVar8 = (long *)FUN_00c8f0cc(lVar7,&local_a8);
              bVar4 = local_88 <= *(ulong *)(*(long *)(param_1 + 200) + *plVar8 * 0x38 + 0x20);
              goto LAB_017a23cc;
            }
            plVar8 = (long *)FUN_00c8f0cc(lVar7,&local_a8);
            bVar5 = *(char *)(*(long *)(param_1 + 200) + *plVar8 * 0x38 + 0x28) == '\0';
          }
          bVar4 = !bVar5;
        }
        else if (local_b0 == 2) {
          local_110 = local_a8;
          uStack_108 = local_a0;
          local_100 = local_98;
          plStack_f8 = local_90;
          if (local_90 == (long *)0x0) {
            bVar4 = FUN_017a30d8(param_1,&local_110);
          }
          else {
            (**(code **)(*local_90 + 0x18))(local_90);
            bVar4 = FUN_017a30d8(param_1,&local_110);
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
        }
        else {
          bVar4 = 1;
        }
LAB_017a23cc:
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if (((bVar4 ^ local_80 != '\0') & 1) == 0) goto LAB_017a2690;
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0x68;
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x168) + uVar12 * 8) + 0x48);
        plVar8 = (long *)(lVar7 + uVar9 * 0x38);
        if ((ulong)((plVar8[1] - *plVar8 >> 3) * 0x4ec4ec4ec4ec4ec5) <= uVar13) break;
      } while( true );
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SignalLightEvent(pLVar2);
  local_f0 = CONCAT71(local_f0._1_7_,(local_120 & 0xfffffffffffffffd) != 0);
  local_d0 = param_1;
  FUN_017a27bc(*(undefined8 *)(param_1 + 0x2d0),&local_d0,&local_f0,&local_120,param_1 + 0x240);
  lVar7 = nn::os::GetCurrentThread();
  goto LAB_017a2514;
LAB_017a2690:
  lVar7 = *(long *)(*(long *)(param_1 + 0x168) + uVar12 * 8);
  uVar9 = uVar9 + 1;
  if ((ulong)((*(long *)(lVar7 + 0x50) - *(long *)(lVar7 + 0x48) >> 3) * 0x6db6db6db6db6db7) <=
      uVar9) goto code_r0x017a26c8;
  goto LAB_017a22b8;
code_r0x017a26c8:
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SignalLightEvent(pLVar2);
  uVar11 = uVar11 + 1;
  lVar7 = *(long *)(*(long *)(param_1 + 0x168) + *(long *)(param_1 + 0x240) * 8);
  if ((ulong)(*(long *)(lVar7 + 0x88) - *(long *)(lVar7 + 0x80) >> 3) <= uVar11) {
    return *(long *)(param_1 + 0x240);
  }
  goto LAB_017a2274;
LAB_017a2514:
  if (*plVar1 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar2);
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar2);
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_017a2524;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_017a2524:
    local_d0 = *(long *)(*(long *)(param_1 + 0x168) + *(long *)(param_1 + 0x240) * 8);
    local_110 = *(long *)(local_d0 + 0xc0) + 1;
    *(long *)(local_d0 + 0xc0) = local_110;
    local_114[0] = 0;
    local_f0 = *(long *)(local_d0 + 0xb8);
    FUN_00f84c44(*(undefined8 *)(local_d0 + 200),&local_d0,local_114,&local_f0,&local_110);
    *(ulong *)(param_1 + 0x240) = local_120;
    local_d0 = *(long *)(*(long *)(param_1 + 0x168) + local_120 * 8);
    local_f0 = *(long *)(local_d0 + 0xb8) + 1;
    *(long *)(local_d0 + 0xb8) = local_f0;
    local_114[0] = 1;
    local_110 = *(long *)(local_d0 + 0xc0);
    FUN_00f84c44(*(undefined8 *)(local_d0 + 200),&local_d0,local_114,&local_f0,&local_110);
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent(pLVar2);
    return *(long *)(param_1 + 0x240);
  }
  cVar3 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_017a2524;
  goto LAB_017a2514;
}


