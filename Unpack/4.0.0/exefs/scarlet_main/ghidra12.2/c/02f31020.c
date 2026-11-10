/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f31020; name: FUN_02f31020
 */


void FUN_02f31020(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [64];
  int local_48;
  int local_44;
  
  *param_1 = (long)&PTR_LAB_0460ed98;
  param_1[3] = (long)&PTR_LAB_0460f240;
  param_1[4] = (long)&PTR_LAB_0460f4c8;
  FUN_02f3295c(param_1[0x116] + 0x28,param_1,&LAB_02f30dd0,0);
  FUN_02f32a1c(param_1[0x115] + 0x28,param_1,&LAB_02f30cf4,0);
  FUN_02f32adc(param_1[0x115] + 0x18,param_1,&LAB_02f30c10,0);
  FUN_02f32b9c(param_1[0x117] + 0x18,param_1,&LAB_02f32c5c,0);
  puVar1 = (ulong *)(param_1 + 0xd4);
  FUN_02f32c7c(puVar1,param_1);
  plVar7 = (long *)param_1[0xa2];
  param_1[0xa2] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x125];
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      plVar8 = plVar7 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    param_1[0x125] = 0;
  }
  puVar4 = PTR_DAT_047d1a08;
  lVar10 = param_1[0x126];
  if (lVar10 != 0) {
    FUN_02ffc594(lVar10);
    (**(code **)(puVar4 + 8))(0,lVar10,0);
    param_1[0x126] = 0;
  }
  if (param_1[0x93] != 0) {
    FUN_0300e008();
    lVar10 = param_1[0x93];
    param_1[0x93] = 0;
    if (lVar10 != 0) {
      FUN_0300dea8(lVar10);
      (**(code **)(puVar4 + 8))(0,lVar10,0);
    }
  }
  local_a0 = (long *)param_1[0x94];
  local_98 = auStack_88;
  local_90 = -0x7ffffff800000000;
  local_48 = 0;
  iVar6 = (**(code **)(*local_a0 + 0x50))();
  if (7 < iVar6) {
    iVar6 = 8;
  }
  local_44 = iVar6;
  if ((int)(local_90._4_4_ & 0x7fffffff) < iVar6) {
    FUN_031c2ad4(&local_98,PTR_PTR_047d1a50,(long)iVar6);
  }
  if ((int)local_90 != iVar6) {
    local_90 = CONCAT44(local_90._4_4_,iVar6);
  }
  if (param_1[0xa0] != 0) {
    FUN_02f61604(param_1[0xa0],&local_a0);
    lVar10 = param_1[0xa0];
    if (lVar10 != 0) {
      FUN_02f60a90(lVar10);
      (**(code **)(puVar4 + 8))(0,lVar10,0);
    }
  }
  plVar7 = (long *)param_1[0x114];
  param_1[0x114] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  lVar10 = param_1[0x124];
  if (lVar10 != 0) {
    FUN_02f21a30(lVar10);
    (**(code **)(puVar4 + 8))(0,lVar10,0);
  }
  plVar7 = (long *)param_1[0x95];
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_a0);
    plVar7 = (long *)param_1[0x95];
    plVar8 = (long *)plVar7[2];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar7 = (long *)param_1[0x95];
    }
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  param_1[0x95] = 0;
  if (param_1[0xa1] != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[0xa1],0);
  }
  if ((long *)param_1[0x96] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x96] + 0x10))();
  }
  lVar10 = param_1[0x92];
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x1458) = 0;
    if ((-1 < (int)*(uint *)(lVar10 + 0x145c)) && (*(long *)(lVar10 + 0x1450) != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*(long *)(lVar10 + 0x1450),(ulong)*(uint *)(lVar10 + 0x145c) << 3)
      ;
    }
    *(undefined8 *)(lVar10 + 0x1450) = 0;
    *(undefined4 *)(lVar10 + 0x145c) = 0x80000000;
    (**(code **)(puVar4 + 8))(0,lVar10,0);
  }
  if (local_48 != 0) {
    (**(code **)(*local_a0 + 0x28))(local_a0,local_98);
    local_48 = 0;
  }
  lVar10 = local_90;
  uVar9 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_98 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar9 << 3);
  }
  plVar7 = (long *)param_1[0x120];
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      plVar8 = plVar7 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    param_1[0x120] = 0;
  }
  plVar7 = (long *)param_1[0x118];
  param_1[0x118] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  lVar10 = param_1[0xd3];
  if (lVar10 != 0) {
    FUN_02f53198(lVar10);
    (**(code **)(puVar4 + 8))(0,lVar10,0);
  }
  if ((long *)param_1[0xff] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xff] + 8))();
  }
  lVar10 = param_1[0x91];
  if (lVar10 != 0) {
    FUN_02f0b91c(lVar10);
    (**(code **)(puVar4 + 8))(0,lVar10,0);
  }
  plVar7 = (long *)param_1[0x94];
  param_1[0x94] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if ((long *)param_1[0x134] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x134] + 8))();
  }
  FUN_031c46c0(param_1 + 0x130);
  FUN_031c46c0(param_1 + 300);
  if ((long *)param_1[0x128] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x128] + 8))();
  }
  plVar7 = (long *)param_1[0x123];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x122];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x121];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x11f];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x11d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8ec)) && (param_1[0x11c] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x11c],(ulong)*(uint *)((long)param_1 + 0x8ec) << 2);
  }
  param_1[0x11c] = 0;
  *(undefined4 *)((long)param_1 + 0x8ec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8d4)) && (param_1[0x119] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x119],(ulong)*(uint *)((long)param_1 + 0x8d4) << 2);
  }
  plVar7 = (long *)param_1[0x118];
  param_1[0x119] = 0;
  *(undefined4 *)((long)param_1 + 0x8d4) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x117];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x116];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x115];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x114];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if ((param_1[0x112] & 1U) != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[0x112] - 1,0);
  }
  FUN_02f245d0(param_1 + 0x104);
  plVar7 = (long *)param_1[0x100];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  puVar5 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar7 = (long *)(param_1[0xfe] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfe] & 3U) == 0) {
        param_1[0xfe] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfe] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xfd] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfd] & 3U) == 0) {
        param_1[0xfd] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfd] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xfc] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfc] & 3U) == 0) {
        param_1[0xfc] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfc] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xfb] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfb] & 3U) == 0) {
        param_1[0xfb] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfb] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xfa] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfa] & 3U) == 0) {
        param_1[0xfa] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfa] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf9] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf9] & 3U) == 0) {
        param_1[0xf9] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf9] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf8] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf8] & 3U) == 0) {
        param_1[0xf8] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf8] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf7] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf7] & 3U) == 0) {
        param_1[0xf7] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf7] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf6] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf6] & 3U) == 0) {
        param_1[0xf6] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf6] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf5] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf5] & 3U) == 0) {
        param_1[0xf5] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf5] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf4] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf4] & 3U) == 0) {
        param_1[0xf4] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf4] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf3] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf3] & 3U) == 0) {
        param_1[0xf3] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf3] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf2] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf2] & 3U) == 0) {
        param_1[0xf2] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf2] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf1] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf1] & 3U) == 0) {
        param_1[0xf1] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf1] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xf0] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf0] & 3U) == 0) {
        param_1[0xf0] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf0] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xef] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xef] & 3U) == 0) {
        param_1[0xef] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xef] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xee] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xee] & 3U) == 0) {
        param_1[0xee] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xee] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xed] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xed] & 3U) == 0) {
        param_1[0xed] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xed] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xec] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xec] & 3U) == 0) {
        param_1[0xec] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xec] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xeb] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xeb] & 3U) == 0) {
        param_1[0xeb] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xeb] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xea] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xea] & 3U) == 0) {
        param_1[0xea] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xea] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe9] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe9] & 3U) == 0) {
        param_1[0xe9] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe9] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe8] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe8] & 3U) == 0) {
        param_1[0xe8] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe8] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe7] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe7] & 3U) == 0) {
        param_1[0xe7] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe7] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe6] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe6] & 3U) == 0) {
        param_1[0xe6] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe6] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe5] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe5] & 3U) == 0) {
        param_1[0xe5] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe5] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe4] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe4] & 3U) == 0) {
        param_1[0xe4] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe4] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe3] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe3] & 3U) == 0) {
        param_1[0xe3] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe3] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe2] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe2] & 3U) == 0) {
        param_1[0xe2] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe2] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe1] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe1] & 3U) == 0) {
        param_1[0xe1] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe1] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xe0] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe0] & 3U) == 0) {
        param_1[0xe0] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe0] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xdf] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdf] & 3U) == 0) {
        param_1[0xdf] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdf] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xde] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xde] & 3U) == 0) {
        param_1[0xde] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xde] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xdd] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdd] & 3U) == 0) {
        param_1[0xdd] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdd] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xdc] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdc] & 3U) == 0) {
        param_1[0xdc] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdc] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xdb] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdb] & 3U) == 0) {
        param_1[0xdb] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdb] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xda] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xda] & 3U) == 0) {
        param_1[0xda] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xda] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xd9] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd9] & 3U) == 0) {
        param_1[0xd9] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd9] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xd8] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd8] & 3U) == 0) {
        param_1[0xd8] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd8] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xd7] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd7] & 3U) == 0) {
        param_1[0xd7] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd7] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xd6] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd6] & 3U) == 0) {
        param_1[0xd6] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd6] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0xd5] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd5] & 3U) == 0) {
        param_1[0xd5] = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd5] = 0;
        if (*puVar5 == '\0') goto LAB_02f3266c;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar7 = (long *)(*puVar1 & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((*puVar1 & 3) == 0) {
        *puVar1 = (ulong)plVar7 | 1;
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar7 != (long *)0x0);
        *puVar1 = 0;
      }
      else {
        do {
          plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar8 | 1;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_02f3266c:
  plVar7 = (long *)param_1[0xca];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0xc9];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if (param_1[199] != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[199],0);
    *(undefined4 *)((long)param_1 + 0x634) = 0;
    param_1[199] = 0;
  }
  if (param_1[0xc5] != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[0xc5],0);
    *(undefined4 *)((long)param_1 + 0x624) = 0;
    param_1[0xc5] = 0;
  }
  plVar7 = (long *)param_1[0xa5];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0xa4];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0xa2];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  lVar10 = param_1[0x99];
  while (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 8);
    (**(code **)(puVar4 + 8))(0,lVar10,0);
    lVar10 = lVar11;
  }
  plVar7 = (long *)param_1[0x97];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x94];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  lVar10 = param_1[0x93];
  if (lVar10 != 0) {
    FUN_0300dea8(lVar10);
    (**(code **)(puVar4 + 8))(0,lVar10,0);
  }
  FUN_02f1d324(param_1 + 0x28);
  FUN_02f08a54(param_1 + 5);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


