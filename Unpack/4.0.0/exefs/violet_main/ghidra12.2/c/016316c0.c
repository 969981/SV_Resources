/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016316c0; name: FUN_016316c0
 */


undefined8 FUN_016316c0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  bool bVar18;
  char local_208 [8];
  undefined8 *local_200;
  long *plStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long *local_1e0 [2];
  undefined1 auStack_1d0 [40];
  long *local_1a8;
  undefined1 auStack_1a0 [48];
  undefined4 local_170;
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [40];
  undefined8 *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar10 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar10 == (undefined8 *)0x0) || (pcVar13 = (char *)*puVar10, pcVar13 == (char *)0x0)) {
    if ((DAT_048070d8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_048070d8);
      pcVar13 = &DAT_048070b0;
      if (iVar9 != 0) {
        DAT_048070b0 = 0;
        DAT_048070b8 = 0;
        FUN_00100190(&LAB_01b4fd44,&DAT_048070b0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048070d8);
      }
    }
    else {
      pcVar13 = &DAT_048070b0;
    }
  }
  uVar8 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04807cc8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04807cc8), iVar9 != 0)) {
    DAT_04809be0 = '\x01';
    __cxa_guard_release(&DAT_04807cc8);
  }
  pcVar4 = (code *)PTR_FUN_047d49f0;
  if (DAT_04809be0 == '\0') {
    pcVar4 = (code *)0x0;
  }
  if (((*pcVar13 == '\x01') || (*pcVar13 == '\0')) && (*(long *)(pcVar13 + 8) != 0)) {
    (*pcVar4)(local_1e0,*(long *)(pcVar13 + 8),uVar8);
  }
  else {
    local_1e0[0] = (long *)0x0;
    local_1a8 = (long *)0x0;
    local_170 = 0;
  }
  plVar2 = local_1e0[0];
  if (local_1e0[0] != (long *)0x0) {
    plVar1 = local_1e0[0] + 5;
    do {
      lVar11 = *plVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_01631d48;
  }
  memcpy(auStack_118,auStack_1d0,0x24);
  plVar1 = local_1a8;
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x18))(local_1a8);
  }
  memcpy(auStack_160,auStack_1a0,0x34);
  local_208[0] = '\x01';
  if (plVar2 != (long *)0x0) {
    plVar15 = plVar2 + 5;
    do {
      lVar11 = *plVar15;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar18) {
        *(int *)plVar15 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) {
LAB_01631d48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  memcpy(auStack_b0,auStack_118,0x24);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  memcpy(auStack_f0,auStack_160,0x34);
  puVar6 = PTR_DAT_047d38f8;
  lVar14 = *(long *)PTR_DAT_047d38f8;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar14) {
    uVar12 = nn::os::GetCurrentThread();
LAB_016319e0:
    if (*(long *)puVar6 == 0) goto code_r0x016319e8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
    do {
      if (*(long *)puVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
          while (*(long *)puVar6 == 0) {
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar18) {
              *(undefined8 *)puVar6 = uVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_016319f0;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar18) {
        *(undefined8 *)puVar6 = uVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_016319f0:
    bVar18 = false;
    goto LAB_01631834;
  }
  bVar18 = true;
LAB_01631834:
  puVar7 = PTR_DAT_047d3f70;
  plVar15 = *(long **)(*(long *)PTR_DAT_047d3f70 + 0x148);
  puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x80,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_88 = (undefined8 *)0x0;
    local_80 = (long *)0x0;
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    plVar15 = *(long **)(*(long *)puVar7 + 0x148);
    puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x80,0x10);
    if (puVar10 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
      local_78 = 0;
      local_88 = (undefined8 *)0x0;
      local_70 = 0;
      plVar16 = plVar2;
      plVar17 = plVar1;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01631d70;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar10 = plVar2;
      memcpy(puVar10 + 2,auStack_b0,0x24);
      puVar10[7] = plVar1;
      memcpy(puVar10 + 8,auStack_f0,0x34);
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      bVar3 = local_88 != (undefined8 *)0x0;
      local_88 = puVar10;
      if (bVar3) {
        FUN_0155bd24(&local_80);
      }
      local_70 = 0x10;
      local_78 = 0x80;
      plVar16 = (long *)0x0;
      plVar17 = (long *)0x0;
    }
    local_80 = plVar15;
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_01631d70:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar10 = plVar2;
    memcpy(puVar10 + 2,auStack_b0,0x24);
    puVar10[7] = plVar1;
    memcpy(puVar10 + 8,auStack_f0,0x34);
    plVar17 = (long *)0x0;
    plVar16 = (long *)0x0;
    local_78 = 0x80;
    local_70 = 0x10;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_88 = puVar10;
    local_80 = plVar15;
  }
  plStack_1f8 = local_80;
  local_1f0 = local_78;
  uStack_1e8 = local_70;
  local_200 = puVar10;
  if (!bVar18) {
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 5;
    do {
      lVar11 = *plVar15;
      iVar9 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar18) {
        *(int *)plVar15 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar11 == 0) goto LAB_01631d20;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 5;
    do {
      lVar11 = *plVar1;
      iVar9 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *(int *)plVar1 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    else if ((int)lVar11 == 0) goto LAB_01631d20;
  }
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_1e0[0] != (long *)0x0) {
    plVar2 = local_1e0[0] + 5;
    do {
      lVar11 = *plVar2;
      iVar9 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar18) {
        *(int *)plVar2 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_1e0[0] + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_01631d20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_01631d80(param_1,local_208);
  puVar10 = local_200;
  if ((local_208[0] == '\x01') && (local_200 = (undefined8 *)0x0, puVar10 != (undefined8 *)0x0)) {
    FUN_0155bd24(&plStack_1f8);
  }
  return 1;
code_r0x016319e8:
  cVar5 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar18) {
    *(undefined8 *)puVar6 = uVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_016319f0;
  goto LAB_016319e0;
}


