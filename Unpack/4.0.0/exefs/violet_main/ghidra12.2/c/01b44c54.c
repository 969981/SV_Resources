/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b44c54; name: FUN_01b44c54
 */


void FUN_01b44c54(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar10) {
    uVar9 = nn::os::GetCurrentThread();
LAB_01b44d9c:
    if (*(long *)puVar2 == 0) goto code_r0x01b44da4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          while (*(long *)puVar2 == 0) {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *(undefined8 *)puVar2 = uVar9;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01b44dac;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar12) {
        *(undefined8 *)puVar2 = uVar9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01b44dac:
    bVar12 = false;
    goto LAB_01b44c90;
  }
  bVar12 = true;
LAB_01b44c90:
  lVar7 = *(long *)param_2[1];
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  if (-1 < *(int *)(lVar7 + 0x58)) {
    lVar11 = *(long *)puVar2;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar11) {
      uVar8 = nn::os::GetCurrentThread();
LAB_01b44dbc:
      if (*(long *)puVar2 == 0) goto code_r0x01b44dc4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar3) {
                *(undefined8 *)puVar2 = uVar8;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01b44dcc;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar3) {
          *(undefined8 *)puVar2 = uVar8;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01b44dcc:
      bVar3 = false;
      goto LAB_01b44cb8;
    }
    bVar3 = true;
LAB_01b44cb8:
    iVar4 = FUN_00c5fc50(uVar9,0xfff0b9d8,(long)*(int *)(lVar7 + 0x5c));
    iVar6 = *(int *)(lVar7 + 0x58);
    if (!bVar3) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar4 == iVar6) {
      uVar5 = FUN_00c5d980(uVar9);
      FUN_00c5dbe0(uVar9,&LAB_01b45030,0);
      FUN_00c5dcd0(uVar9,uVar5,1);
      iVar6 = FUN_00c5ddd0(uVar9,0,1,uVar5,0,0);
      if (iVar6 != 0) {
        uVar9 = FUN_00c646d0(uVar9,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar9;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar9);
      }
      iVar6 = FUN_00cc4dc0(uVar9);
      bVar3 = iVar6 != 0;
      goto LAB_01b44d44;
    }
  }
  bVar3 = false;
LAB_01b44d44:
  FUN_00c5db00(uVar9,0);
  *(bool *)*param_2 = bVar3;
  if (bVar12) {
    return;
  }
  *(undefined8 *)puVar2 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  return;
code_r0x01b44da4:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar12) {
    *(undefined8 *)puVar2 = uVar9;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01b44dac;
  goto LAB_01b44d9c;
code_r0x01b44dc4:
  cVar1 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar3) {
    *(undefined8 *)puVar2 = uVar8;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01b44dcc;
  goto LAB_01b44dbc;
}


