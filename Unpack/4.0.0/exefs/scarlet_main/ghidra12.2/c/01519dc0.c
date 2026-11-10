/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01519dc0; name: FUN_01519dc0
 */


void FUN_01519dc0(undefined1 *param_1,char *param_2)

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
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_00dbefa4(&local_90,param_2 + 8);
    local_80 = *(undefined8 *)(param_2 + 0x18);
    bVar12 = true;
    *param_1 = 1;
    local_70 = 0;
    local_78 = (undefined8 *)0x0;
    FUN_00dbefa4(&local_78,&local_90);
    puVar5 = PTR_DAT_047d38f8;
    local_68 = local_80;
    lVar10 = *(long *)PTR_DAT_047d38f8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar10) {
      uVar9 = nn::os::GetCurrentThread();
LAB_01519f78:
      if (*(long *)puVar5 == 0) goto code_r0x01519f80;
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
              if (cVar4 == '\0') goto LAB_01519f88;
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
LAB_01519f88:
      bVar12 = false;
    }
    plVar11 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x18,8);
    if (puVar8 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_0151a1dc(&local_60,&local_78);
      if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
      puVar8 = local_60;
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
      *puVar8 = 0;
      puVar8[1] = 0;
      FUN_00dd9f00(puVar8,&local_78);
      puVar8[2] = local_68;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      local_48 = 8;
      uStack_50 = 0x18;
      local_58 = plVar11;
    }
    *(undefined8 **)(param_1 + 8) = puVar8;
    *(long **)(param_1 + 0x10) = local_58;
    *(undefined8 *)(param_1 + 0x18) = uStack_50;
    *(undefined8 *)(param_1 + 0x20) = local_48;
    if (!bVar12) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
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
        piVar2 = (int *)((long)local_78 + 0x1c);
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
          local_60 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_60);
        }
      }
      else if (sVar3 == 0) goto LAB_01519f48;
    }
    puVar8 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
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
        piVar2 = (int *)((long)local_90 + 0x1c);
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
          local_60 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_60);
        }
      }
      else if (sVar3 == 0) {
LAB_01519f48:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01519f80:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar12) {
    *(undefined8 *)puVar5 = uVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01519f88;
  goto LAB_01519f78;
}


