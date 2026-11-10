/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c769c0; name: FUN_01c769c0
 */


void FUN_01c769c0(undefined8 param_1,long param_2,undefined8 *param_3,undefined2 *param_4,
                 char *param_5)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar7 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      uVar6 = nn::os::GetCurrentThread();
LAB_01c76b70:
      if (*(long *)puVar2 == 0) goto code_r0x01c76b78;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar8) {
                *(undefined8 *)puVar2 = uVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01c76b80;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *(undefined8 *)puVar2 = uVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01c76b80:
      bVar8 = false;
      goto LAB_01c76a14;
    }
    bVar8 = true;
LAB_01c76a14:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar8) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      local_78 = *param_3;
      FUN_0103155c(&local_98,&local_78);
      local_70 = local_98;
      uStack_68 = uStack_90;
      local_98 = 0;
      local_78 = CONCAT71(local_78._1_7_,1);
      local_60 = local_88;
      uStack_58 = uStack_80;
      FUN_01031320(param_1,&local_78);
      if ((char)local_78 == '\x01') {
        FUN_019a1690(&local_70,0);
      }
      FUN_019a1690(&local_98,0);
      local_78 = CONCAT62(local_78._2_6_,*param_4);
      FUN_015edfb8(&local_98,&local_78);
      local_70 = local_98;
      uStack_68 = uStack_90;
      local_78 = CONCAT71(local_78._1_7_,1);
      local_98 = 0;
      local_60 = local_88;
      uStack_58 = uStack_80;
      FUN_015edc10(param_1,&local_78);
      lVar5 = local_70;
      if (((char)local_78 == '\x01') && (local_70 = 0, lVar5 != 0)) {
        FUN_01871e6c(&uStack_68);
      }
      FUN_00c5d960(param_1,(long)*param_5);
      iVar4 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_01c62880,0);
      FUN_00c5dcd0(param_1,iVar4 + -3,1);
      iVar4 = FUN_00c5ddd0(param_1,3,0,iVar4 + -3,0,0);
      if (iVar4 != 0) {
        uVar6 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar6;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar6);
      }
    }
  }
  return;
code_r0x01c76b78:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar8) {
    *(undefined8 *)puVar2 = uVar6;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01c76b80;
  goto LAB_01c76b70;
}


