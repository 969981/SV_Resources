/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3c2ac; name: FUN_00a3c2ac
 */


undefined8
FUN_00a3c2ac(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  plVar6 = DAT_048363c0;
  if (DAT_048363b0._4_4_ == 0) {
    DAT_048363b0._4_4_ = 2;
    DAT_048363b0._0_2_ = DAT_04836460;
    DAT_04836460 = DAT_04836460 + 1;
    DAT_048363c0 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    pcVar7 = DAT_048363e8;
    if (DAT_048363e8 != (code *)0x0) {
      DAT_048363f0 = 0;
      DAT_048363f8 = 0;
      DAT_048363e0 = 0;
      DAT_048363e8 = (code *)0x0;
      (*pcVar7)(&DAT_04836400);
    }
    if ((code *)param_4[2] != (code *)0x0) {
      (*(code *)param_4[2])(param_4 + 4,&DAT_04836400);
      DAT_048363f8 = param_4[3];
      DAT_048363e8 = (code *)param_4[1];
      DAT_048363e0 = *param_4;
      DAT_048363f0 = param_4[2];
    }
    uVar8 = 1;
    DAT_048363b8._0_4_ = param_2;
    DAT_048363b8._4_4_ = param_3;
    DAT_048363d0 = param_1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


