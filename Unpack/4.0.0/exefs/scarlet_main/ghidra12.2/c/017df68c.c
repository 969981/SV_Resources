/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017df68c; name: FUN_017df68c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017df68c(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  undefined4 uVar11;
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  FUN_017df8a0(local_30);
  if ((local_30[0] != (undefined8 *)0x0) && (*(short *)((long)local_30[0] + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_30[0] + 0x1a);
    sVar10 = *(short *)((long)local_30[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_017df76c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017df76c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = local_30[0][2];
        if (lVar9 != 0) {
          uVar7 = *(uint *)(lVar9 + 0x20);
          lVar8 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))();
          }
          else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_017df6b4;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  uVar7 = _DAT_00000048;
LAB_017df6b4:
  if (uVar7 < 5) {
    uVar11 = *(undefined4 *)(&DAT_03d63498 + (long)(int)uVar7 * 4);
  }
  else {
    uVar11 = 0x42700000;
  }
  if (local_30[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_30[0] + 3);
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
      piVar2 = (int *)((long)local_30[0] + 0x1c);
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
        local_18 = *local_30[0];
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar11;
}


