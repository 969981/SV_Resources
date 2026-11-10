/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb0e98; name: FUN_00fb0e98
 */


void FUN_00fb0e98(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  bool bVar14;
  long lVar15;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  puVar4 = PTR_DAT_047d38f8;
  if (*(int *)(param_2 + 0x58) < 0) goto LAB_00fb1104;
  lVar12 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar12) {
    uVar10 = nn::os::GetCurrentThread();
LAB_00fb119c:
    if (*(long *)puVar4 == 0) goto code_r0x00fb11a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
    do {
      if (*(long *)puVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
          while (*(long *)puVar4 == 0) {
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar14) {
              *(undefined8 *)puVar4 = uVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00fb11ac;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar14) {
        *(undefined8 *)puVar4 = uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00fb11ac:
    bVar14 = false;
    goto LAB_00fb0ee4;
  }
  bVar14 = true;
LAB_00fb0ee4:
  iVar6 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
  iVar7 = *(int *)(param_2 + 0x58);
  if (!bVar14) {
    *(undefined8 *)puVar4 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
  }
  if (iVar6 != iVar7) goto LAB_00fb1104;
  local_f0 = *param_3;
  local_e0 = 0;
  local_e8 = (long *)0x0;
  FUN_00c43ef0(&local_e8,param_3 + 1);
  local_d8 = param_3[3];
  uStack_d0 = param_3[4];
  local_c8 = param_3[5];
  local_c0 = (long *)param_3[6];
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x18))();
  }
  local_b8 = param_3[7];
  lVar12 = *(long *)puVar4;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar12) {
    uVar10 = nn::os::GetCurrentThread();
LAB_00fb11bc:
    if (*(long *)puVar4 == 0) goto code_r0x00fb11c4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
    do {
      if (*(long *)puVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
          while (*(long *)puVar4 == 0) {
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar14) {
              *(undefined8 *)puVar4 = uVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00fb11cc;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar14) {
        *(undefined8 *)puVar4 = uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00fb11cc:
    bVar14 = false;
    goto LAB_00fb0f6c;
  }
  bVar14 = true;
LAB_00fb0f6c:
  puVar5 = PTR_DAT_047d3920;
  FUN_00fb14e0(&local_b0,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),&local_f0);
  if (local_b0 == 0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    FUN_00fb14e0(&local_88,*(undefined8 *)(*(long *)puVar5 + 8),&local_f0);
    local_b0 = local_88;
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  local_80 = local_a8;
  local_78 = local_a0;
  local_70 = local_98;
  lVar8 = local_b0;
  if (!bVar14) {
    *(undefined8 *)puVar4 = 0;
    local_88 = local_b0;
    nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    lVar8 = local_88;
  }
  local_b0 = CONCAT71(local_b0._1_7_,1);
  local_88 = 0;
  local_a0 = local_80;
  local_98 = local_78;
  local_90 = local_70;
  local_a8 = lVar8;
  if (lVar8 == 0) {
    FUN_00ca1a30(param_1);
LAB_00fb108c:
    lVar8 = local_a8;
    local_a8 = 0;
    if (lVar8 != 0) {
      FUN_00fb1630(&local_a0);
    }
  }
  else {
    plVar9 = (long *)FUN_00c5e120(param_1,8,1);
    if (((*PTR_DAT_047d38a0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38a0);
    }
    lVar15 = *(long *)PTR_DAT_047d38a8;
    *(long *)PTR_DAT_047d38b0 = lVar15;
    lVar12 = *(long *)puVar4;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar12) {
      uVar10 = nn::os::GetCurrentThread();
LAB_00fb11dc:
      if (*(long *)puVar4 == 0) goto code_r0x00fb11e4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
      do {
        if (*(long *)puVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
            while (*(long *)puVar4 == 0) {
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar14) {
                *(undefined8 *)puVar4 = uVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00fb11ec;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar14) {
          *(undefined8 *)puVar4 = uVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00fb11ec:
      bVar14 = false;
      goto LAB_00fb1014;
    }
    bVar14 = true;
LAB_00fb1014:
    if (*(long *)(lVar15 + 0x28) == *(long *)(lVar15 + 0x30)) {
      pcVar13 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      plVar11 = (long *)(*(long *)(lVar15 + 0x30) + -8);
      pcVar13 = (char *)*plVar11;
      *(long **)(lVar15 + 0x30) = plVar11;
    }
    if (!bVar14) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
    lVar8 = local_a8;
    cVar3 = (char)local_b0;
    if ((char)local_b0 == '\x01') {
      local_a8 = 0;
      local_68 = local_a0;
      local_60 = local_98;
      local_58 = local_90;
    }
    else {
      lVar8 = 0;
      local_60 = 0;
      local_58 = 0;
      local_68 = 0;
    }
    *(long *)(pcVar13 + 8) = lVar8;
    *(long *)(pcVar13 + 0x18) = local_60;
    *(long *)(pcVar13 + 0x20) = local_58;
    *(long *)(pcVar13 + 0x10) = local_68;
    *pcVar13 = (char)local_b0;
    if ((char)local_b0 == '\0') {
      *(long *)(pcVar13 + 8) = local_a8;
    }
    *plVar9 = (long)pcVar13;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045b3c1c);
    FUN_00c5e190(param_1,0xfffffffe);
    if (cVar3 == '\x01') goto LAB_00fb108c;
  }
  lVar8 = local_88;
  local_88 = 0;
  if (lVar8 != 0) {
    FUN_00fb1630(&local_80);
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  plVar9 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar11 = local_e8 + 3;
    do {
      sVar2 = (short)*plVar11;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar14) {
        *(short *)plVar11 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      piVar1 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_68 = *plVar9;
        FUN_00c44438(lVar8 + 0x8040,&local_68);
      }
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  iVar7 = FUN_00c5d980(param_1);
  FUN_00c5dbe0(param_1,&LAB_022db780,0);
  FUN_00c5dcd0(param_1,iVar7 + -1,1);
  iVar7 = FUN_00c5ddd0(param_1,1,0,iVar7 + -1,0,0);
  if (iVar7 != 0) {
    uVar10 = FUN_00c646d0(param_1,0xffffffff,0);
    *(undefined8 *)PTR_DAT_047d4238 = uVar10;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","CallImpl",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
               ,0xa8,"Lua panic: function error: %s",uVar10);
  }
LAB_00fb1104:
  FUN_00c5db00(param_1,0);
  return;
code_r0x00fb11a4:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar14) {
    *(undefined8 *)puVar4 = uVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00fb11ac;
  goto LAB_00fb119c;
code_r0x00fb11c4:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar14) {
    *(undefined8 *)puVar4 = uVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00fb11cc;
  goto LAB_00fb11bc;
code_r0x00fb11e4:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar14) {
    *(undefined8 *)puVar4 = uVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00fb11ec;
  goto LAB_00fb11dc;
}


