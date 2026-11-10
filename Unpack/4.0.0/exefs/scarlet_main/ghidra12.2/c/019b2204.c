/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b2204; name: FUN_019b2204
 */


void FUN_019b2204(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_48 [2];
  long *local_38;
  
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar8 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  FUN_019b2388(local_48,*(undefined8 *)(param_1 + 0x80));
  FUN_019b244c(&local_38,uVar6,(undefined8 *)(param_1 + 0x68),local_48,param_1 + 0x70,param_2);
  FUN_019b2320(local_48);
  FUN_019b37b0(local_48,local_38,*(undefined1 *)(param_2 + 2));
  plVar5 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_48[0];
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[6];
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
      (**(code **)(*local_38 + 0x50))(local_38);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


