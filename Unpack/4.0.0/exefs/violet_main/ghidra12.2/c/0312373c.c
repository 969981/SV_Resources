/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0312373c; name: FUN_0312373c
 */


void FUN_0312373c(long param_1,undefined1 *param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  void *__src;
  long *plVar16;
  long *local_110 [3];
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined1 local_80;
  long *local_70;
  
  lVar14 = tpidr_el0;
  lVar8 = *(long *)(lVar14 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar14 + 0x1000b8) = lVar8;
  }
  plVar16 = *(long **)(lVar8 + 0x3e0);
  if (plVar16 != (long *)0x0) {
    lVar8 = *plVar16;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("doSynchronousProcessingRun",0x1a,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar11 = (undefined8 *)plVar16[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtdoSynchronousProcessingRun";
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
      puVar11 = (undefined8 *)plVar16[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar16[6] + 8);
      }
    }
  }
  local_e0 = 0x1f08000070;
  local_d0 = (void *)0x0;
  local_c8 = -0x8000000000000000;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_b8 = 0x7fffffff;
  uStack_8c = 0x7fffffff;
  uStack_88 = 0x7fffffff;
  local_c0 = 0;
  local_b4 = 0;
  local_a0 = &DAT_03d7702c;
  local_98 = 0;
  local_90 = local_90 & 0xffffff00;
  local_84 = 0xffffffff;
  local_80 = 0;
  local_d8 = *param_2;
  local_70 = plVar16;
  if ((undefined1 *)((ulong)&local_e0 | 8) != param_2) {
    iVar7 = *(int *)(param_2 + 0x10);
    __src = *(void **)(param_2 + 8);
    if (0 < iVar7) {
      FUN_02eb1edc(&local_d0,PTR_PTR_047d1a50,(long)iVar7);
    }
    memcpy(local_d0,__src,(long)iVar7 << 2);
    local_c8 = CONCAT44(local_c8._4_4_,iVar7);
  }
  local_c0 = *(undefined4 *)(param_2 + 0x18);
  local_b8 = *(undefined4 *)(param_2 + 0x20);
  local_b4 = param_2[0x24];
  if (param_2 != (undefined1 *)((ulong)&local_e0 | 8)) {
    uVar3 = *(uint *)(param_2 + 0x30);
    lVar8 = *(long *)(param_2 + 0x28);
    if ((int)(local_a8._4_4_ & 0x7fffffff) < (int)uVar3) {
      FUN_03109800(&local_b0,PTR_PTR_047d1a50,(long)(int)uVar3);
    }
    uVar2 = (uint)local_a8;
    if ((int)uVar3 <= (int)(uint)local_a8) {
      uVar2 = uVar3;
    }
    if ((local_b0 != lVar8) && (0 < (int)uVar2)) {
      if (uVar2 == 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        puVar11 = (undefined8 *)(lVar8 + 0x10);
        puVar13 = (undefined8 *)(local_b0 + 0x10);
        do {
          uVar6 = puVar11[-1];
          uVar9 = uVar9 + 2;
          puVar13[-2] = puVar11[-2];
          puVar13[-1] = uVar6;
          uVar6 = puVar11[1];
          *puVar13 = *puVar11;
          puVar13[1] = uVar6;
          puVar11 = puVar11 + 4;
          puVar13 = puVar13 + 4;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar9);
      }
      if ((uVar2 & 1) != 0) {
        puVar11 = (undefined8 *)(lVar8 + uVar9 * 0x10);
        puVar13 = (undefined8 *)(local_b0 + uVar9 * 0x10);
        uVar6 = puVar11[1];
        *puVar13 = *puVar11;
        puVar13[1] = uVar6;
      }
    }
    if ((int)(uint)local_a8 < (int)uVar3) {
      puVar11 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 0x10);
      puVar13 = (undefined8 *)(local_b0 + (long)(int)uVar2 * 0x10);
      if (uVar3 != uVar2 + 1) {
        iVar7 = -(uVar3 - uVar2 & 0xfffffffe);
        puVar10 = puVar11;
        puVar12 = puVar13;
        do {
          uVar6 = puVar10[1];
          puVar11 = puVar10 + 4;
          *puVar12 = *puVar10;
          puVar12[1] = uVar6;
          puVar13 = puVar12 + 4;
          uVar6 = puVar10[3];
          iVar7 = iVar7 + 2;
          puVar12[2] = puVar10[2];
          puVar12[3] = uVar6;
          puVar10 = puVar11;
          puVar12 = puVar13;
        } while (iVar7 != 0);
      }
      if ((uVar3 - uVar2 & 1) != 0) {
        uVar6 = puVar11[1];
        *puVar13 = *puVar11;
        puVar13[1] = uVar6;
      }
    }
    local_a8 = CONCAT44(local_a8._4_4_,uVar3);
    if ((local_a0 != (undefined *)0x0) && (*(int *)(local_a0 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_a0,0);
      local_a0 = &DAT_03d7702c;
    }
    if (*(int *)(*(long *)(param_2 + 0x38) + 4) == -2) {
      local_a0 = &DAT_03d7702c;
      local_98 = 0;
    }
    else {
      local_98 = *(int *)(param_2 + 0x40);
      local_a0 = (undefined *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                           (PTR_PTR_047d1a50,
                            -(ulong)(local_98 + 1U >> 0x1f) & 0xfffffff800000000 |
                            (ulong)(local_98 + 1U) << 3);
      memcpy(local_a0,*(void **)(param_2 + 0x38),(long)*(int *)(param_2 + 0x40) * 8 + 8);
    }
  }
  local_80 = param_2[0x58];
  local_90 = (uint)*(undefined8 *)(param_2 + 0x48);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  uStack_88 = (undefined4)*(undefined8 *)(param_2 + 0x50);
  local_84 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  FUN_00e08a00(param_1 + 0x28,param_1,&local_e0);
  FUN_03107e10(&local_e8,param_1,param_2,0,param_4);
  lVar8 = *(long *)(lVar14 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar14 + 0x1000b8) = lVar8;
  }
  plVar15 = *(long **)(lVar8 + 0x3e0);
  if (plVar15 != (long *)0x0) {
    lVar8 = *plVar15;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("InitialProcessing",0x11,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar11 = (undefined8 *)plVar15[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtInitialProcessing";
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
  }
  local_110[0] = plVar15;
  FUN_03108680(&local_f0,local_e8);
  if ((local_f0 != (long *)0x0) &&
     ((**(code **)(*param_3 + 0xb0))(param_3,local_f0,0), local_f0[1] != 0)) {
    plVar1 = local_f0 + 2;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_f0 + 0x18))(local_f0);
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar8 = *plVar15;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
    puVar11 = (undefined8 *)plVar15[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_03c2d363;
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  while( true ) {
    lVar8 = *(long *)(lVar14 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar14 + 0x1000b8) = lVar8;
    }
    plVar15 = *(long **)(lVar8 + 0x3e0);
    if (plVar15 != (long *)0x0) {
      lVar8 = *plVar15;
      if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
        (**(code **)(lVar8 + 0x18))("Phases",6,*(undefined8 *)(lVar8 + 0x28));
      }
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = "TtPhases";
        uVar6 = nn::os::GetSystemTick();
        puVar11[1] = uVar6;
      }
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
        puVar11 = (undefined8 *)plVar15[2];
        uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
          *puVar11 = &DAT_03c4e575;
          puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
        }
      }
    }
    FUN_03108820(local_110,local_e8);
    if (local_110[0] == (long *)0x0) break;
    (**(code **)(*param_3 + 0xb0))(param_3,local_110[0],0);
    if ((local_110[0] != (long *)0x0) && (local_110[0][1] != 0)) {
      plVar1 = local_110[0] + 2;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_110[0] + 0x18))();
      }
    }
    if (plVar15 != (long *)0x0) {
      lVar8 = *plVar15;
      if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
        puVar11 = (undefined8 *)plVar15[2];
        uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
          *puVar11 = &DAT_03c4e575;
          puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
        }
      }
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c2d363;
        uVar6 = nn::os::GetSystemTick();
        puVar11[1] = uVar6;
      }
      if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
        (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
      }
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar8 = *plVar15;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
    puVar11 = (undefined8 *)plVar15[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_03c2d363;
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar8 = *(long *)(lVar14 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar14 + 0x1000b8) = lVar8;
  }
  plVar15 = *(long **)(lVar8 + 0x3e0);
  if (plVar15 != (long *)0x0) {
    lVar14 = *plVar15;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("FinalProcessing",0xf,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar11 = (undefined8 *)plVar15[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtFinalProcessing";
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
  }
  local_f0 = plVar15;
  FUN_03109280(&local_f8,local_e8);
  if (((local_f8 != (long *)0x0) && (FUN_0323ee44(local_110,local_f8,0), local_f8 != (long *)0x0))
     && (local_f8[1] != 0)) {
    plVar1 = local_f8 + 2;
    do {
      lVar14 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_f8 + 0x18))();
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = *plVar15;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar11 = (undefined8 *)plVar15[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
    puVar11 = (undefined8 *)plVar15[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar15[3]) && (plVar15[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_03c2d363;
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
  if ((local_e8 != (long *)0x0) && (local_e8[1] != 0)) {
    plVar15 = local_e8 + 2;
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_e8 + 0x18))();
    }
  }
  if ((local_a0 != (undefined *)0x0) && (*(int *)(local_a0 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_a0,0);
    local_a0 = &DAT_03d7702c;
    local_98 = 0;
  }
  lVar14 = local_a8;
  uVar9 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_b0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar9 << 4);
  }
  lVar14 = local_c8;
  local_a8 = CONCAT44(0x80000000,(uint)local_a8);
  uVar9 = (ulong)local_c8._4_4_;
  local_b0 = 0;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_d0 != (void *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_d0,uVar9 << 2);
  }
  if (plVar16 != (long *)0x0) {
    lVar14 = *plVar16;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
      puVar11 = (undefined8 *)plVar16[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar16[6] + 8);
      }
    }
    puVar11 = (undefined8 *)plVar16[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_03c2d363;
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
  return;
}


