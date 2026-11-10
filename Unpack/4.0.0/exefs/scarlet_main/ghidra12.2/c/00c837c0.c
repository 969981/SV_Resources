/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c837c0; name: FUN_00c837c0
 */


void FUN_00c837c0(long param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  long *local_48;
  
  plVar15 = (long *)(param_1 + 0x300);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c8380c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c8380c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c8380c:
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  if (*param_3 == '\0') {
LAB_00c838a0:
    *(undefined8 *)(param_1 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
    return;
  }
  if ((ulong)((param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3) < (ulong)*(uint *)(param_3 + 4))
  goto LAB_00c838a0;
  lVar12 = *param_2 + (ulong)*(uint *)(param_3 + 4) * 0x58;
  lVar11 = *(long *)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar12 + 0x28);
  do {
    if (lVar11 == lVar12) goto LAB_00c838a0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c83a78(&local_78,lVar11);
    local_68 = *(undefined4 *)(lVar11 + 0x10);
    if (local_78 != (undefined8 *)0x0) {
      if (*(short *)((long)local_78 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_78 + 0x1a);
        sVar14 = *(short *)((long)local_78 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar14) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00c8394c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00c8394c:
            bVar5 = false;
          }
          if (bVar5) {
            if (local_78[2] == 0) goto LAB_00c839ac;
            plVar15 = (long *)(local_78[2] + -8);
            local_80[0] = 1;
            local_7c = local_68;
            local_48 = plVar15;
            (*(code *)*param_4)(param_4 + 4,&local_48,local_80);
            (**(code **)(*plVar15 + 0x18))(plVar15);
            break;
          }
          sVar14 = sVar3;
        } while (sVar3 != 0);
        if (local_78 == (undefined8 *)0x0) goto LAB_00c83894;
      }
LAB_00c839ac:
      puVar9 = local_78;
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          lVar13 = *(long *)puVar7;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_48 = (long *)*puVar9;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
        }
      }
      else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_00c83894:
    lVar11 = lVar11 + 0x18;
  } while( true );
}


