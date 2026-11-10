/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014890f8; name: FUN_014890f8
 */


void FUN_014890f8(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *local_168;
  long local_160;
  long local_158;
  long *local_150;
  char local_148 [256];
  long *local_48;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar8 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar14 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar14;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *param_1 = (long)&PTR_FUN_0459a960;
  param_1[4] = (long)&PTR_LAB_0459a9d8;
  *plVar10 = (long)&DAT_0459aa28;
  plVar10 = param_1 + 8;
  *plVar10 = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0x51) = 1;
  param_1[0xb] = (long)(PTR_DAT_047dd248 + 0x10);
  param_1[0xc] = 0;
  puVar5 = PTR_DAT_047dd250;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = (long)(puVar5 + 0x10);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  lVar8 = FUN_014896c4(param_2);
  if (lVar8 != 0) {
    lVar14 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_01489668;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar11;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01489688;
  }
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    lVar14 = plVar9[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01489474;
  }
  *plVar10 = lVar8;
  plVar10 = *(long **)(lVar8 + 0x58);
  *(undefined8 *)(lVar8 + 0x40) = 0xd21cd40ed9bd2025;
  *(undefined **)(lVar8 + 0x48) = &DAT_03c4a4b4;
  *(undefined8 *)(lVar8 + 0x50) = 4;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  iVar7 = snprintf(local_148,0xff,"SCENE_ROOT_%p",param_1);
  plVar10 = (long *)param_1[8];
  if (local_148[0] == '\0') {
    plVar9 = (long *)FUN_00d44228(iVar7);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar11;
    FUN_00cf9884(&local_168,uVar11,local_148);
    plVar9 = local_168;
  }
  local_168 = (long *)PTR_DAT_047d8b70;
  if (plVar9 != (long *)0x0) {
    local_168 = plVar9 + 6;
  }
  local_168 = (long *)*local_168;
  plVar12 = (long *)PTR_PTR_047d4508;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 7;
  }
  local_160 = *plVar12;
  if (plVar9 == (long *)0x0) {
    local_158 = 0;
  }
  else {
    local_158 = plVar9[8];
  }
  local_150 = (long *)0x0;
  plVar12 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar12 = plVar9;
  }
  local_150 = plVar12;
  plVar12 = (long *)FUN_014896c4(param_2);
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01489668;
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01489688;
  }
  plVar6 = local_150;
  plVar12[8] = (long)local_168;
  plVar12[9] = local_160;
  plVar12[10] = local_158;
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x18))(local_150);
  }
  plVar13 = (long *)plVar12[0xb];
  plVar12[0xb] = (long)plVar6;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  local_48 = plVar12;
  (**(code **)(*plVar10 + 0x120))(plVar10,&local_48);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01489474;
  }
  (**(code **)(*plVar10 + 0x80))(plVar10,&local_168);
  lVar8 = plVar12[6];
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_01489668:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar11;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_01489688:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar10 = (long *)param_1[9];
  param_1[9] = (long)plVar12;
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_01489474:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  return;
}


