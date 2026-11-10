/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01836f94; name: FUN_01836f94
 */


void FUN_01836f94(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar11 = *(long *)*param_2;
  plVar1 = (long *)(lVar11 + 0x110);
  lVar10 = *plVar1;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar10) {
    bVar12 = true;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    bVar12 = false;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
        bVar12 = false;
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
              while (*plVar1 == 0) {
                cVar5 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar12) {
                  *plVar1 = lVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                bVar12 = false;
                if (cVar5 == '\0') goto LAB_01836fd0;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        break;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_01836fd0:
  lVar9 = FUN_018371a8(lVar11 + 0x128);
  if (lVar9 == 0) {
    lVar9 = FUN_018371a8(lVar11 + 0x160);
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
  }
  if (lVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_00c43ef0(&local_58,lVar9 + 0x98);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_58[2] == lVar9 + 0x28) {
      FUN_012968b4(param_1,&local_58);
    }
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_58 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_48 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_48);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


