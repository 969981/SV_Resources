/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275b0ac; name: FUN_0275b0ac
 */


void FUN_0275b0ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long local_78;
  char *local_70;
  long *local_60;
  undefined4 local_54;
  
  plVar5 = (long *)FUN_0145966c();
  local_54 = (**(code **)(*plVar5 + 0x88))();
  lVar6 = FUN_0275b324(*param_2,0);
  lVar10 = *(long *)(lVar6 + 8);
  if (lVar10 != lVar6) {
    do {
      lVar8 = *(long *)(lVar10 + 0x10);
      uVar9 = *(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50);
      if ((int)(uVar9 >> 3) != 0) {
        uVar11 = 0;
        while( true ) {
          plVar5 = *(long **)(*(long *)(lVar8 + 0x50) + uVar11 * 8);
          if (plVar5 != (long *)0x0) {
            plVar1 = plVar5 + 5;
            do {
              lVar8 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          FUN_00d1e888(&local_78,plVar5);
          pcVar7 = strstr(local_70,*(char **)(param_1 + 0x40));
          if (local_60 != (long *)0x0) {
            (**(code **)(*local_60 + 0x20))();
          }
          if (pcVar7 != (char *)0x0) {
            local_78 = param_1;
            local_70 = (char *)&local_54;
            FUN_0275b334(plVar5,&local_78);
          }
          if (plVar5 != (long *)0x0) {
            plVar1 = plVar5 + 5;
            do {
              lVar8 = *plVar1;
              iVar4 = (int)lVar8 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
            else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          uVar11 = uVar11 + 1;
          if (uVar11 == (uVar9 >> 3 & 0xffffffff)) break;
          lVar8 = *(long *)(lVar10 + 0x10);
        }
      }
      lVar10 = *(long *)(lVar10 + 8);
    } while (lVar10 != lVar6);
  }
  return;
}


