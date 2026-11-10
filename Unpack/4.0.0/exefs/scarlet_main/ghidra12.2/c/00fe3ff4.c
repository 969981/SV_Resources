/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe3ff4; name: FUN_00fe3ff4
 */


void FUN_00fe3ff4(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_00fe4300(local_48);
  puVar13 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar10 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00fe4068;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00fe4068:
          bVar5 = false;
        }
        if (bVar5) {
          plVar11 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar11 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_00fe4090;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar11 = (long *)0x0;
LAB_00fe4090:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar10 == 0) {
LAB_00fe4170:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 5;
      plVar7 = (long *)(**(code **)*plVar12)(plVar12);
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
        uVar8 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar8;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (plVar7 == (long *)0x0) {
          *param_1 = 0;
          param_1[1] = 0;
LAB_00fe413c:
          (**(code **)(*plVar11 + 0x60))(plVar11);
          return;
        }
        if (plVar7 == (long *)PTR_DAT_047d6528) {
          (**(code **)(*plVar11 + 0x18))(local_48);
          *param_1 = 0;
          param_1[1] = 0;
          puVar13 = local_48[0];
          if ((long *)local_48[0][2] == plVar12) {
            FUN_00cbc6dc(param_1,local_48);
            puVar13 = local_48[0];
          }
          if (puVar13 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar13 + 3);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 != 1) {
              if (sVar10 != 0) goto LAB_00fe413c;
              goto LAB_00fe4170;
            }
            piVar2 = (int *)((long)puVar13 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
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
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_38 = *puVar13;
              FUN_00c44438(lVar9 + 0x8040,&local_38);
            }
          }
          goto LAB_00fe413c;
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


