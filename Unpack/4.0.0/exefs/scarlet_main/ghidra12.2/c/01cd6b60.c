/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cd6b60; name: FUN_01cd6b60
 */


void FUN_01cd6b60(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_01cd6cd0();
  FUN_01cd6cd0(param_1,*param_3);
  lVar6 = *param_4;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar5;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_58 = CONCAT71(local_58._1_7_,1);
  local_50 = lVar6;
  FUN_018b8f00(param_1,&local_58);
  FUN_01874690(&local_58);
  local_58 = *param_5;
  FUN_0103155c(&local_78,&local_58);
  local_50 = local_78;
  uStack_48 = uStack_70;
  local_58 = CONCAT71(local_58._1_7_,1);
  local_78 = 0;
  local_40 = local_68;
  uStack_38 = uStack_60;
  FUN_01031320(param_1,&local_58);
  if ((char)local_58 == '\x01') {
    FUN_01031774(&local_50,0);
  }
  FUN_01031774(&local_78,0);
  return;
}


