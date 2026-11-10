/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f6330; name: FUN_026f6330
 */


void FUN_026f6330(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  long lVar10;
  long *plVar11;
  
  lVar7 = *(long *)(param_1 + 0x80);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026f6398;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026f6398:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        plVar11 = (long *)(lVar7 + -0x28);
        lVar5 = FUN_026f5464(plVar11);
        plVar8 = *(long **)(param_1 + 0x48);
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          pvVar6 = (void *)FUN_00ccbb30(lVar10,0);
          memcpy(pvVar6,(void *)(*(long *)(lVar5 + 0x188) +
                                (long)*(int *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x14) * 0x14 + 0x108
                                              )),
                 (ulong)(uint)(*(int *)(lVar5 + 0x194) * *(int *)(lVar5 + 400)));
          FUN_00ccbb18(lVar10,0);
          plVar8 = *(long **)(param_1 + 0x48);
        }
        lVar10 = plVar8[1];
        if (lVar10 != 0) {
          pvVar6 = (void *)FUN_00ccbb30(lVar10,0);
          memcpy(pvVar6,(void *)(*(long *)(lVar5 + 0x188) +
                                (long)*(int *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x14) * 0x14 + 0x10c
                                              )),
                 (ulong)((*(uint *)(lVar5 + 0x194) >> 1) * (*(uint *)(lVar5 + 400) >> 1)));
          FUN_00ccbb18(lVar10,0);
          plVar8 = *(long **)(param_1 + 0x48);
        }
        lVar10 = plVar8[2];
        if (lVar10 != 0) {
          pvVar6 = (void *)FUN_00ccbb30(lVar10,0);
          memcpy(pvVar6,(void *)(*(long *)(lVar5 + 0x188) +
                                (long)*(int *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x14) * 0x14 + 0x110
                                              )),
                 (ulong)((*(uint *)(lVar5 + 0x194) >> 1) * (*(uint *)(lVar5 + 400) >> 1)));
          FUN_00ccbb18(lVar10,0);
        }
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x026f6528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x50))(plVar11);
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


