/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e5044; name: FUN_021e5044
 */


void FUN_021e5044(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long *local_218;
  undefined8 local_210;
  undefined1 local_208;
  long *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined1 auStack_1d8 [24];
  long *local_1c0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long *plStack_188;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long *plStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  long *local_130;
  undefined1 local_128 [24];
  long *local_110;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *plStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 local_90 [8];
  undefined1 *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  long *local_70;
  
  uVar4 = *param_4;
  uVar6 = param_4[1];
  uVar5 = param_4[2];
  plVar7 = (long *)param_4[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar14 = param_4[4];
  uVar9 = *(undefined1 *)(param_4 + 5);
  plVar15 = (long *)param_4[6];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar17 = *(long **)(*param_3 + 0x40);
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_021e574c;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar3 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar13;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_021e576c;
  }
  plVar2 = (long *)PTR_PTR_047d4508;
  plVar18 = (long *)plVar17[0xb];
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (plVar18 != (long *)0x0) {
    plVar8 = plVar18 + 6;
  }
  local_d0 = *plVar8;
  plVar8 = (long *)PTR_PTR_047d4508;
  if (plVar18 != (long *)0x0) {
    plVar8 = plVar18 + 7;
  }
  lStack_c8 = *plVar8;
  if (plVar18 == (long *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = plVar18[8];
  }
  local_b8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  local_f0 = *param_4;
  uStack_e8 = param_4[1];
  local_e0 = param_4[2];
  plVar8 = (long *)param_4[3];
  plStack_d8 = plVar8;
  local_b8 = plVar18;
  if (plVar8 == (long *)0x0) {
    local_108 = 0x6e1486ec4f098a25;
    pcStack_100 = "IsTriggering";
    local_f8 = 0xc;
    FUN_021e57bc(&local_b0,param_1,&local_d0,&local_f0,&local_108);
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_108 = 0x6e1486ec4f098a25;
    pcStack_100 = "IsTriggering";
    local_f8 = 0xc;
    FUN_021e57bc(&local_b0,param_1,&local_d0,&local_f0,&local_108);
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  lVar16 = plVar17[6];
  psVar1 = (short *)(lVar16 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar3 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar16 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar3 == 0) goto LAB_021e5794;
  plVar17 = *(long **)(*param_3 + 0x40);
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_021e574c;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar3 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar13;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_021e576c;
  }
  plVar18 = (long *)plVar17[0xb];
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 7;
    plVar8 = plVar18 + 6;
  }
  local_148 = *plVar8;
  lStack_140 = *plVar2;
  if (plVar18 == (long *)0x0) {
    local_138 = 0;
  }
  else {
    local_138 = plVar18[8];
  }
  local_130 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  local_168 = *param_4;
  uStack_160 = param_4[1];
  local_158 = param_4[2];
  plVar8 = (long *)param_4[3];
  plStack_150 = plVar8;
  local_130 = plVar18;
  if (plVar8 == (long *)0x0) {
    local_180 = 0x3217b81c8e57c8e2;
    pcStack_178 = "TriggerCount";
    local_170 = 0xc;
    FUN_021e57bc(local_128,param_1,&local_148,&local_168,&local_180);
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_180 = 0x3217b81c8e57c8e2;
    pcStack_178 = "TriggerCount";
    local_170 = 0xc;
    FUN_021e57bc(local_128,param_1,&local_148,&local_168,&local_180);
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  lVar16 = plVar17[6];
  psVar1 = (short *)(lVar16 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar3 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar16 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar3 == 0) goto LAB_021e5794;
  plVar17 = local_98;
  local_1a0 = local_b0;
  uStack_198 = uStack_a8;
  local_190 = local_a0;
  plStack_188 = local_98;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
  }
  uVar12 = FUN_021e5898(param_2,&local_1a0);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  plVar17 = local_110;
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x18))(local_110);
  }
  local_88 = &DAT_e4d07a996e5ef5e8;
  puStack_80 = &DAT_03c60f6f;
  local_78 = 4;
  local_70 = (long *)0x0;
  uVar13 = FUN_00f844f4(param_2,&local_88);
  auVar19 = FUN_00f846d0(uVar13,local_90);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if ((uVar12 & 0xff) != 0) {
    uVar9 = (char)(uVar12 >> 8);
  }
  if ((auVar19._0_8_ & 0xff) != 0) {
    uVar14 = auVar19._8_8_;
  }
  plVar17 = *(long **)(*param_3 + 0x40);
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_021e574c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar3 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar13;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_021e576c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_230 = uVar4;
  uStack_228 = uVar6;
  local_220 = uVar5;
  local_218 = plVar7;
  local_1f8 = uVar4;
  uStack_1f0 = uVar6;
  local_1e8 = uVar5;
  local_1e0 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_210 = uVar14;
  local_208 = uVar9;
  local_200 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  FUN_01f5df58(auStack_1d8,plVar17,&local_1f8,&local_230);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  if (local_200 != (long *)0x0) {
    (**(code **)(*local_200 + 0x20))();
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  if (local_1e0 != (long *)0x0) {
    (**(code **)(*local_1e0 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar3 == 0) {
LAB_021e5794:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


