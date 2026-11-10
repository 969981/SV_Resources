/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fb868; name: FUN_020fb868
 */


void FUN_020fb868(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar8 = (long *)*param_2;
      plVar5 = (long *)param_2[3];
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar5 = *(long **)(param_1 + 0x38);
      uVar6 = FUN_00c4e564(plVar5);
      if ((uVar6 & 1) == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar5,param_2,0x20,8);
      }
      param_2 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


