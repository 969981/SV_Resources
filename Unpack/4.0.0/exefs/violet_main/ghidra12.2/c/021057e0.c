/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021057e0; name: FUN_021057e0
 */


undefined8 FUN_021057e0(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar8 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar8;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x90) != -1)) {
    *(undefined8 *)(lVar8 + (long)*(int *)(lVar7 + 0x90) * 8 + 0x6a0) = uVar12;
  }
  puVar3 = PTR_DAT_047d38f8;
  lVar7 = *(long *)(param_1 + 0x100);
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar10) {
    uVar12 = nn::os::GetCurrentThread();
LAB_021059f8:
    if (*(long *)puVar3 == 0) goto code_r0x02105a00;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
    do {
      if (*(long *)puVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          while (*(long *)puVar3 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(undefined8 *)puVar3 = uVar12;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_02105a08;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *(undefined8 *)puVar3 = uVar12;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_02105a08:
    bVar2 = false;
    goto LAB_0210589c;
  }
  bVar2 = true;
LAB_0210589c:
  lVar10 = *(long *)(param_1 + 0xc0);
  uVar12 = *(undefined8 *)(lVar7 + 0x70);
  lVar8 = *(long *)(lVar7 + 0x80);
  iVar6 = 2;
  if (lVar10 == 0) {
    iVar6 = 3;
  }
  if (-1 < *(int *)(lVar8 + 0x58)) {
    lVar11 = *(long *)puVar3;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      uVar13 = nn::os::GetCurrentThread();
LAB_02105a18:
      if (*(long *)puVar3 == 0) goto code_r0x02105a20;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar1 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *(undefined8 *)puVar3 = uVar13;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_02105a28;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *(undefined8 *)puVar3 = uVar13;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_02105a28:
      bVar9 = false;
      goto LAB_021058d4;
    }
    bVar9 = true;
LAB_021058d4:
    iVar4 = FUN_00c5fc50(uVar12,0xfff0b9d8,(long)*(int *)(lVar8 + 0x5c));
    iVar5 = *(int *)(lVar8 + 0x58);
    if (!bVar9) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar5) {
      if (lVar10 == 0) {
        iVar5 = FUN_00c5d9a0(uVar12,0xffffffff,param_2);
        uVar13 = 0;
        if ((iVar5 != 6) || (*(int *)(lVar8 + 0x58) < 0)) goto LAB_021059ac;
        lVar11 = *(long *)puVar3;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar11) {
          uVar13 = nn::os::GetCurrentThread();
LAB_02105b1c:
          if (*(long *)puVar3 == 0) goto code_r0x02105b24;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          do {
            if (*(long *)puVar3 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
                while (*(long *)puVar3 == 0) {
                  cVar1 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar9) {
                    *(undefined8 *)puVar3 = uVar13;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_02105b2c;
                }
              } while( true );
            }
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar9) {
              *(undefined8 *)puVar3 = uVar13;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_02105b2c:
          bVar9 = false;
          goto LAB_02105ae8;
        }
        bVar9 = true;
LAB_02105ae8:
        iVar4 = FUN_00c5fc50(uVar12,0xfff0b9d8,(long)*(int *)(lVar8 + 0x5c));
        iVar5 = *(int *)(lVar8 + 0x58);
        if (!bVar9) {
          *(undefined8 *)puVar3 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
        }
        if (iVar4 == iVar5) goto LAB_02105934;
      }
      else {
        iVar5 = FUN_00c5d9a0(uVar12,0xffffffff,lVar10);
        if ((iVar5 == 5) && (iVar5 = FUN_00c5d9a0(uVar12,0xffffffff,param_2), iVar5 == 6)) {
LAB_02105934:
          FUN_01424730(uVar12,param_3);
          FUN_00c419e0(uVar12,*param_4 != '\0');
          iVar5 = FUN_00c5d980(uVar12);
          FUN_00c5dbe0(uVar12,&LAB_021099f0,0);
          uVar13 = 1;
          FUN_00c5dcd0(uVar12,iVar5 - iVar6,1);
          iVar6 = FUN_00c5ddd0(uVar12,iVar6,0,iVar5 - iVar6,0,0);
          if (iVar6 != 0) {
            uVar12 = FUN_00c646d0(uVar12,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar12;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",lVar10,param_2,uVar12);
          }
          goto LAB_021059ac;
        }
      }
    }
  }
  uVar13 = 0;
LAB_021059ac:
  FUN_00c5db00(uVar12,0);
  if (!bVar2) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  }
  return uVar13;
code_r0x02105a00:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar2) {
    *(undefined8 *)puVar3 = uVar12;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_02105a08;
  goto LAB_021059f8;
code_r0x02105a20:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar9) {
    *(undefined8 *)puVar3 = uVar13;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_02105a28;
  goto LAB_02105a18;
code_r0x02105b24:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar9) {
    *(undefined8 *)puVar3 = uVar13;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_02105b2c;
  goto LAB_02105b1c;
}


