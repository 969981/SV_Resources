/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c01f0; name: FUN_012c01f0
 */


void FUN_012c01f0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long *local_48;
  
  FUN_012c03b8(&local_68,*(undefined8 *)(param_1 + 8));
  FUN_012c0338((long *)(param_1 + 0x68));
  *(long *)(param_1 + 0x68) = local_68;
  pcVar5 = *(code **)(local_68 + 0x388);
  lStack_60 = param_1 + 0x30;
  local_58 = param_1 + 0x70;
  lStack_50 = param_1 + 0x128;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(local_68 + 0x390) = 0;
    *(undefined8 *)(local_68 + 0x398) = 0;
    *(undefined8 *)(local_68 + 0x380) = 0;
    *(undefined8 *)(local_68 + 0x388) = 0;
    (*pcVar5)(local_68 + 0x3a0);
  }
  *(undefined1 **)(local_68 + 0x380) = &LAB_028f8008;
  *(undefined1 **)(local_68 + 0x388) = &LAB_02dfe548;
  *(undefined1 **)(local_68 + 0x390) = &LAB_02dfe54c;
  *(long *)(local_68 + 0x3a0) = param_1 + 0x50;
  *(long *)(local_68 + 0x3a8) = lStack_60;
  *(long *)(local_68 + 0x3b0) = local_58;
  *(long *)(local_68 + 0x3b8) = lStack_50;
  *(undefined1 **)(local_68 + 0x398) = &LAB_02dfe560;
  local_68 = param_1 + 0x50;
  FUN_012c4864(&local_48,*(long *)(param_1 + 0x68) + 0x340,&local_68);
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
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


