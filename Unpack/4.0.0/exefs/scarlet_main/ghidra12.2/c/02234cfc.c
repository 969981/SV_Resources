/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02234cfc; name: FUN_02234cfc
 */


void FUN_02234cfc(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long local_38;
  undefined1 **ppuStack_30;
  undefined1 *local_28;
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar10 = *(long **)(param_1 + 0x128);
  local_58 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (long *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
    plVar10 = local_58;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (local_50 != (long *)0x0) {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar9 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02234dc0;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02234dc0:
          bVar8 = false;
        }
        if (bVar8) {
          lVar7 = local_50[2];
          if (lVar7 == 0) goto LAB_02234e1c;
          local_28 = auStack_40;
          local_38 = lVar7 + 0xe0;
          ppuStack_30 = &local_28;
          FUN_02234f00(local_38,&local_38);
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
      if (local_50 == (long *)0x0) {
        return;
      }
    }
LAB_02234e1c:
    plVar5 = local_50;
    plVar10 = local_50 + 3;
    do {
      sVar9 = (short)*plVar10;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *(short *)plVar10 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
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
        local_38 = *plVar5;
        FUN_00c44438(lVar7 + 0x8040,&local_38);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


