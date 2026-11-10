/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f83d60; name: FUN_00f83d60
 */


void FUN_00f83d60(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  char cVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined *puVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined4 local_e0 [6];
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  undefined *puStack_80;
  long local_78;
  long *local_70;
  
  uVar3 = *param_4;
  uVar6 = param_4[1];
  uVar4 = param_4[2];
  plVar7 = (long *)param_4[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar5 = param_4[4];
  uVar8 = param_4[5];
  plVar16 = (long *)param_4[6];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar15 = *(long **)(*param_3 + 0x40);
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_00f84484;
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar2 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar2 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar13;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00f844a4;
  }
  plVar19 = (long *)plVar15[0xb];
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar19 + 6;
  }
  puVar20 = (undefined1 *)*plVar10;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar19 + 7;
  }
  puVar18 = (undefined *)*plVar10;
  if (plVar19 == (long *)0x0) {
    lVar17 = 0;
  }
  else {
    lVar17 = plVar19[8];
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  uVar13 = *param_4;
  uVar9 = param_4[1];
  uVar14 = param_4[2];
  plVar10 = (long *)param_4[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_88 = puVar20;
  puStack_80 = puVar18;
  local_78 = lVar17;
  local_70 = plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  local_a8 = uVar13;
  uStack_a0 = uVar9;
  local_98 = uVar14;
  local_90 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_100 = 0xff8ed28e8c8c3b4c;
  pcStack_f8 = "EnterCount";
  local_f0 = 10;
  FUN_00f85058(local_e0,param_1,&local_88,&local_a8,&local_100);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  lVar17 = plVar15[6];
  psVar1 = (short *)(lVar17 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar2 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))();
  }
  else if (sVar2 == 0) goto LAB_00f844cc;
  plVar15 = *(long **)(*param_3 + 0x40);
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_00f84484;
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar2 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar2 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar13;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00f844a4;
  }
  plVar19 = (long *)plVar15[0xb];
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar19 + 6;
  }
  puVar20 = (undefined1 *)*plVar10;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar19 + 7;
  }
  puVar18 = (undefined *)*plVar10;
  if (plVar19 == (long *)0x0) {
    lVar17 = 0;
  }
  else {
    lVar17 = plVar19[8];
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  uVar13 = *param_4;
  uVar9 = param_4[1];
  uVar14 = param_4[2];
  plVar10 = (long *)param_4[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_88 = puVar20;
  puStack_80 = puVar18;
  local_78 = lVar17;
  local_70 = plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  local_a8 = uVar13;
  uStack_a0 = uVar9;
  local_98 = uVar14;
  local_90 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_c0 = 0xc0ad2a1dd7444354;
  pcStack_b8 = "ExitCount";
  local_b0 = 9;
  FUN_00f85058(&local_100,param_1,&local_88,&local_a8,&local_c0);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  lVar17 = plVar15[6];
  psVar1 = (short *)(lVar17 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar2 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
  }
  else if (sVar2 == 0) goto LAB_00f844cc;
  plVar15 = local_c8;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))(local_c8);
  }
  local_88 = &DAT_e4d07a996e5ef5e8;
  puStack_80 = &DAT_03c60f6f;
  local_78 = 4;
  local_70 = (long *)0x0;
  uVar13 = FUN_00f844f4(param_2,&local_88);
  local_a8 = CONCAT44(local_a8._4_4_,local_e0[0]);
  auVar21 = FUN_00f846d0(uVar13,&local_a8);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  plVar15 = local_e8;
  uVar13 = local_100;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))(local_e8);
  }
  local_88 = &DAT_e4d07a996e5ef5e8;
  puStack_80 = &DAT_03c60f6f;
  local_78 = 4;
  local_70 = (long *)0x0;
  uVar14 = FUN_00f844f4(param_2,&local_88);
  local_a8 = CONCAT44(local_a8._4_4_,(int)uVar13);
  auVar22 = FUN_00f846d0(uVar14,&local_a8);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if ((auVar21._0_8_ & 0xff) != 0) {
    uVar5 = auVar21._8_8_;
  }
  if ((auVar22._0_8_ & 0xff) != 0) {
    uVar8 = auVar22._8_8_;
  }
  plVar15 = *(long **)(*param_3 + 0x40);
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[6];
    if (*(long *)(lVar17 + 0x10) == 0) {
LAB_00f84484:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar2 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar2 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar13;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_00f844a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_138 = uVar3;
  uStack_130 = uVar6;
  local_128 = uVar4;
  plStack_120 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_118 = uVar5;
  uStack_110 = uVar8;
  local_108 = plVar16;
  if (plVar16 == (long *)0x0) {
    FUN_00f848f4(plVar15,&local_138);
  }
  else {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    FUN_00f848f4(plVar15,&local_138);
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar2 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar2 == 0) {
LAB_00f844cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


