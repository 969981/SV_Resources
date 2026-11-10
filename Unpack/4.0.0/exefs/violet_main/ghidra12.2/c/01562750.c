/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01562750; name: FUN_01562750
 */


void FUN_01562750(undefined1 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    local_90 = 0;
    local_98 = (undefined8 *)0x0;
    FUN_00ca1a48(&local_98,param_2 + 0x10);
    local_78 = 0;
    bVar12 = true;
    *param_1 = 1;
    local_80 = (undefined8 *)0x0;
    local_88 = uVar9;
    FUN_00ca1a48(&local_80,&local_98);
    puVar5 = PTR_DAT_047d38f8;
    lVar10 = *(long *)PTR_DAT_047d38f8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar10) {
      uVar9 = nn::os::GetCurrentThread();
LAB_0156292c:
      if (*(long *)puVar5 == 0) goto code_r0x01562934;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar4 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar12) {
                *(undefined8 *)puVar5 = uVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_0156293c;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar12) {
          *(undefined8 *)puVar5 = uVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0156293c:
      bVar12 = false;
    }
    plVar11 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x18,8);
    if (puVar8 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_015640b8(&local_70,&local_88);
      if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
      puVar8 = local_70;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar8 = local_88;
      puVar8[1] = 0;
      puVar8[2] = 0;
      FUN_00ca1ea4(puVar8 + 1,&local_80);
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      local_58 = 8;
      uStack_60 = 0x18;
      local_68 = plVar11;
    }
    *(undefined8 **)(param_1 + 8) = puVar8;
    *(long **)(param_1 + 0x10) = local_68;
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(undefined8 *)(param_1 + 0x20) = local_58;
    if (!bVar12) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_70 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_70);
        }
      }
      else if (sVar3 == 0) goto LAB_015628fc;
    }
    puVar8 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_98 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_98 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_70 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_70);
        }
      }
      else if (sVar3 == 0) {
LAB_015628fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01562934:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar12) {
    *(undefined8 *)puVar5 = uVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0156293c;
  goto LAB_0156292c;
}


