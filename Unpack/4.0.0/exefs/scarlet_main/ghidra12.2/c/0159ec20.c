/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159ec20; name: FUN_0159ec20
 */


void * FUN_0159ec20(void *param_1,void *param_2,void *param_3)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    do {
      memcpy(param_3,param_1,0x28);
      uVar3 = *(undefined4 *)((long)param_1 + 0x38);
      uVar7 = *(undefined8 *)((long)param_1 + 0x30);
      *(undefined8 *)((long)param_3 + 0x28) = *(undefined8 *)((long)param_1 + 0x28);
      *(undefined8 *)((long)param_3 + 0x30) = uVar7;
      *(undefined4 *)((long)param_3 + 0x38) = uVar3;
      memcpy((void *)((long)param_3 + 0x40),(void *)((long)param_1 + 0x40),0x24);
      *(undefined8 *)((long)param_3 + 0x68) = *(undefined8 *)((long)param_1 + 0x68);
      *(undefined2 *)((long)param_3 + 0x70) = *(undefined2 *)((long)param_1 + 0x70);
      FUN_00ca1ea4((long)param_3 + 0x78,(long)param_1 + 0x78);
      *(undefined1 *)((long)param_3 + 0x90) = *(undefined1 *)((long)param_1 + 0x90);
      FUN_00c93a38((long)param_3 + 0x98,(long)param_1 + 0x98);
      FUN_013dc33c((long)param_3 + 0xa8,(long)param_1 + 0xa8);
      FUN_00f5a410((long)param_3 + 0xb8,(long)param_1 + 0xb8);
      plVar6 = *(long **)((long)param_3 + 200);
      *(undefined8 *)((long)param_3 + 200) = 0;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar7 = *(undefined8 *)((long)param_1 + 200);
      *(undefined8 *)((long)param_1 + 200) = 0;
      param_1 = (void *)((long)param_1 + 0xd0);
      *(undefined8 *)((long)param_3 + 200) = uVar7;
      param_3 = (void *)((long)param_3 + 0xd0);
    } while (param_1 != param_2);
  }
  return param_3;
}


