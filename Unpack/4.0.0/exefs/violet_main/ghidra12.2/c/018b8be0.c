/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018b8be0; name: FUN_018b8be0
 */


void FUN_018b8be0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 long *param_5,undefined8 *param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_00ca1900();
  FUN_018b8d70(param_1,*param_3);
  FUN_018b8d70(param_1,*param_4);
  lVar6 = *param_5;
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
  local_68 = CONCAT71(local_68._1_7_,1);
  local_60 = lVar6;
  FUN_018b8f00(param_1,&local_68);
  FUN_01874690(&local_68);
  local_68 = *param_6;
  FUN_0103155c(&local_88,&local_68);
  local_60 = local_88;
  uStack_58 = uStack_80;
  local_68 = CONCAT71(local_68._1_7_,1);
  local_88 = 0;
  local_50 = local_78;
  uStack_48 = uStack_70;
  FUN_01031320(param_1,&local_68);
  if ((char)local_68 == '\x01') {
    FUN_018b9254(&local_60,0);
  }
  FUN_018b9254(&local_88,0);
  return;
}


