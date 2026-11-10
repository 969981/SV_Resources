/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d715c; name: FUN_026d715c
 */


void FUN_026d715c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_58 [4];
  long local_38;
  undefined8 local_18;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar9 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar9;
  if ((lVar9 != 0) && (uVar7 = FUN_019d8b40(lVar9), (uVar7 & 1) != 0)) {
    if (*(long *)(param_1 + 400) == 0) {
      FUN_026d73d0(local_58,*(undefined8 *)(param_1 + 0x188));
      FUN_0178e4dc(&local_38,lVar9,param_1 + 0x198,local_58);
      plVar8 = *(long **)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = 0;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar9 = local_38;
      local_38 = 0;
      *(long *)(param_1 + 400) = lVar9;
      if (local_58[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_58[0] + 0x1c);
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
            local_18 = *local_58[0];
            FUN_00c44438(lVar9 + 0x8040,&local_18);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        lVar9 = *(long *)(param_1 + 400);
      }
      if (lVar9 == 0) {
        return;
      }
    }
    uVar7 = FUN_01e6b040();
    if ((((uVar7 & 1) != 0) && (*(char *)(param_1 + 0x1b0) != '\0')) &&
       (uVar7 = (**(code **)(**(long **)(param_1 + 400) + 0x70))
                          (*(long **)(param_1 + 400),param_1 + 0x1a0,0x10), (uVar7 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x1b0) = 0;
    }
  }
  return;
}


