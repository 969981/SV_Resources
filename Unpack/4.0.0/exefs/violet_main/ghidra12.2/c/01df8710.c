/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df8710; name: FUN_01df8710
 */


void FUN_01df8710(long param_1,uint param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_01df8a00(local_48);
  puVar6 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar9 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01df878c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01df878c:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar10 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_01df87b4;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_01df87b4:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar9 == 0) goto LAB_01df8890;
    if (plVar10 != (long *)0x0) {
      FUN_01101dbc(plVar10,param_2 & 1,0);
      local_68 = 0x49fec7cd8d5aab97;
      pcStack_60 = "EmitEffect";
      local_58 = 10;
      local_50 = (long *)0x0;
      FUN_01751920(local_48,param_1 + 0x48,&local_68,1,0);
      lVar11 = 0;
      if (local_48[0] != (undefined8 *)0x0) {
        lVar11 = 0;
        if (local_48[0][2] != 0) {
          lVar11 = local_48[0][2] + -0x28;
        }
        psVar1 = (short *)(local_48[0] + 3);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          piVar2 = (int *)((long)local_48[0] + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_38 = *local_48[0];
            FUN_00c44438(lVar8 + 0x8040,&local_38);
          }
        }
        else if (sVar9 == 0) {
LAB_01df8890:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (lVar11 != 0) {
        FUN_01df6e38(lVar11,param_2 & 1);
      }
      (**(code **)(*plVar10 + 0x60))(plVar10);
    }
  }
  return;
}


