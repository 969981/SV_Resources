/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a37d4c; name: FUN_01a37d4c
 */


void FUN_01a37d4c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  short sVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar9 = *(long **)(param_1 + 0x128);
  local_48 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar9 = local_48;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar11 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01a37e1c;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a37e1c:
          bVar10 = false;
        }
        if (bVar10) {
          plVar9 = (long *)(local_40[2] + -0x28);
          if (local_40[2] == 0) goto LAB_01a37ea4;
          local_18 = 0x9ba105a5fece6484;
          bVar5 = FUN_01a3f83c(plVar9);
          puVar7 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_18);
          *(byte *)(puVar7 + 2) = bVar5 & 1;
          *puVar7 = PTR_LAB_047dcd90;
          FUN_01983740(plVar9,1);
          (**(code **)(*plVar9 + 0x60))(plVar9);
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
      if (local_40 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01a37ea4:
    puVar7 = local_40;
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_18 = *puVar7;
        FUN_00c44438(lVar8 + 0x8040,&local_18);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


