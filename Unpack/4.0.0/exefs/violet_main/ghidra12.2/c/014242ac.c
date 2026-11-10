/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014242ac; name: FUN_014242ac
 */


undefined8 FUN_014242ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar9 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar9;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x90) != -1)) {
    *(undefined8 *)(lVar9 + (long)*(int *)(lVar6 + 0x90) * 8 + 0x6a0) = uVar10;
  }
  puVar2 = PTR_DAT_047d38f8;
  lVar11 = *(long *)(param_1 + 0x100);
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  bVar13 = true;
  if (lVar9 != lVar6) {
    uVar10 = nn::os::GetCurrentThread();
LAB_0142449c:
    if (*(long *)puVar2 == 0) goto code_r0x014244a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          while (*(long *)puVar2 == 0) {
            cVar1 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar13) {
              *(undefined8 *)puVar2 = uVar10;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_014244ac;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *(undefined8 *)puVar2 = uVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_014244ac:
    bVar13 = false;
  }
  lVar6 = *(long *)(lVar11 + 0x80);
  lVar9 = *(long *)(param_1 + 0xc0);
  uVar10 = *(undefined8 *)(lVar11 + 0x70);
  iVar5 = 1;
  if (lVar9 == 0) {
    iVar5 = 2;
  }
  if (-1 < *(int *)(lVar6 + 0x58)) {
    lVar8 = *(long *)puVar2;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar8) {
      uVar12 = nn::os::GetCurrentThread();
LAB_014244bc:
      if (*(long *)puVar2 == 0) goto code_r0x014244c4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar12;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_014244cc;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *(undefined8 *)puVar2 = uVar12;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_014244cc:
      bVar7 = false;
      goto LAB_01424394;
    }
    bVar7 = true;
LAB_01424394:
    iVar3 = FUN_00c5fc50(uVar10,0xfff0b9d8,(long)*(int *)(lVar6 + 0x5c));
    iVar4 = *(int *)(lVar6 + 0x58);
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      if (lVar9 == 0) {
        iVar4 = FUN_00c5d9a0(uVar10,0xffffffff,param_2);
        uVar12 = 0;
        if ((iVar4 != 6) || (*(int *)(lVar6 + 0x58) < 0)) goto LAB_01424454;
        lVar8 = *(long *)puVar2;
        lVar11 = nn::os::GetCurrentThread();
        if (lVar11 != lVar8) {
          uVar12 = nn::os::GetCurrentThread();
LAB_014245c0:
          if (*(long *)puVar2 == 0) goto code_r0x014245c8;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          do {
            if (*(long *)puVar2 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
                while (*(long *)puVar2 == 0) {
                  cVar1 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar12;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_014245d0;
                }
              } while( true );
            }
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar12;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_014245d0:
          bVar7 = false;
          goto LAB_0142458c;
        }
        bVar7 = true;
LAB_0142458c:
        iVar3 = FUN_00c5fc50(uVar10,0xfff0b9d8,(long)*(int *)(lVar6 + 0x5c));
        iVar4 = *(int *)(lVar6 + 0x58);
        if (!bVar7) {
          *(undefined8 *)puVar2 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
        }
        if (iVar3 == iVar4) goto LAB_014243f4;
      }
      else {
        iVar4 = FUN_00c5d9a0(uVar10,0xffffffff,lVar9);
        if ((iVar4 == 5) && (iVar4 = FUN_00c5d9a0(uVar10,0xffffffff,param_2), iVar4 == 6)) {
LAB_014243f4:
          FUN_01424730(uVar10,param_3);
          iVar4 = FUN_00c5d980(uVar10);
          FUN_00c5dbe0(uVar10,&LAB_021099f0,0);
          uVar12 = 1;
          FUN_00c5dcd0(uVar10,iVar4 - iVar5,1);
          iVar5 = FUN_00c5ddd0(uVar10,iVar5,0,iVar4 - iVar5,0,0);
          if (iVar5 != 0) {
            uVar10 = FUN_00c646d0(uVar10,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar10;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",lVar9,param_2,uVar10);
          }
          goto LAB_01424454;
        }
      }
    }
  }
  uVar12 = 0;
LAB_01424454:
  FUN_00c5db00(uVar10,0);
  if (!bVar13) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  }
  return uVar12;
code_r0x014244a4:
  cVar1 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar13) {
    *(undefined8 *)puVar2 = uVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014244ac;
  goto LAB_0142449c;
code_r0x014244c4:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar7) {
    *(undefined8 *)puVar2 = uVar12;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014244cc;
  goto LAB_014244bc;
code_r0x014245c8:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar7) {
    *(undefined8 *)puVar2 = uVar12;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014245d0;
  goto LAB_014245c0;
}


