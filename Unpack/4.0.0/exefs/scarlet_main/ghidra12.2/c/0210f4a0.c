/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210f4a0; name: FUN_0210f4a0
 */


void FUN_0210f4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 long param_5,undefined8 *param_6,int *param_7,int *param_8)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar9 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar9;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x90) != -1)) {
    *(undefined8 *)(lVar9 + (long)*(int *)(lVar6 + 0x90) * 8 + 0x6a0) = uVar11;
  }
  puVar2 = PTR_DAT_047d38f8;
  lVar10 = *(long *)(param_1 + 0x100);
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar6) {
    uVar11 = nn::os::GetCurrentThread();
LAB_0210f71c:
    if (*(long *)puVar2 == 0) goto code_r0x0210f724;
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
              *(undefined8 *)puVar2 = uVar11;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0210f72c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar12) {
        *(undefined8 *)puVar2 = uVar11;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0210f72c:
    bVar12 = false;
    goto LAB_0210f574;
  }
  bVar12 = true;
LAB_0210f574:
  lVar6 = *(long *)(param_1 + 0xc0);
  lVar9 = *(long *)(lVar10 + 0x80);
  uVar11 = *(undefined8 *)(lVar10 + 0x70);
  iVar5 = 6;
  if (lVar6 == 0) {
    iVar5 = 7;
  }
  if (-1 < *(int *)(lVar9 + 0x58)) {
    lVar8 = *(long *)puVar2;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar8) {
      uVar7 = nn::os::GetCurrentThread();
LAB_0210f73c:
      if (*(long *)puVar2 == 0) goto code_r0x0210f744;
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
                *(undefined8 *)puVar2 = uVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_0210f74c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar13) {
          *(undefined8 *)puVar2 = uVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_0210f74c:
      bVar13 = false;
      goto LAB_0210f5ac;
    }
    bVar13 = true;
LAB_0210f5ac:
    iVar3 = FUN_00c5fc50(uVar11,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
    iVar4 = *(int *)(lVar9 + 0x58);
    if (!bVar13) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      if (lVar6 == 0) {
        iVar4 = FUN_00c5d9a0(uVar11,0xffffffff,param_2);
        if ((iVar4 != 6) || (*(int *)(lVar9 + 0x58) < 0)) goto LAB_0210f6bc;
        lVar8 = *(long *)puVar2;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar8) {
          uVar7 = nn::os::GetCurrentThread();
LAB_0210f83c:
          if (*(long *)puVar2 == 0) goto code_r0x0210f844;
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
                    *(undefined8 *)puVar2 = uVar7;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_0210f84c;
                }
              } while( true );
            }
            cVar1 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar13) {
              *(undefined8 *)puVar2 = uVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_0210f84c:
          bVar13 = false;
          goto LAB_0210f80c;
        }
        bVar13 = true;
LAB_0210f80c:
        iVar3 = FUN_00c5fc50(uVar11,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
        iVar4 = *(int *)(lVar9 + 0x58);
        if (!bVar13) {
          *(undefined8 *)puVar2 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
        }
        if (iVar3 != iVar4) goto LAB_0210f6bc;
      }
      else {
        iVar4 = FUN_00c5d9a0(uVar11,0xffffffff,lVar6);
        if ((iVar4 != 5) || (iVar4 = FUN_00c5d9a0(uVar11,0xffffffff,param_2), iVar4 != 6))
        goto LAB_0210f6bc;
      }
      FUN_0135e530(uVar11,param_3);
      FUN_00c5d960(uVar11,*param_4);
      FUN_00c85bd0(uVar11,*(undefined8 *)(param_5 + 8));
      FUN_014b0030(uVar11,*param_6);
      FUN_00c5d960(uVar11,(long)*param_7);
      FUN_00c5d960(uVar11,(long)*param_8);
      iVar4 = FUN_00c5d980(uVar11);
      FUN_00c5dbe0(uVar11,&LAB_02111ea0,0);
      FUN_00c5dcd0(uVar11,iVar4 - iVar5,1);
      iVar5 = FUN_00c5ddd0(uVar11,iVar5,0,iVar4 - iVar5,0,0);
      if (iVar5 != 0) {
        uVar11 = FUN_00c646d0(uVar11,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar11;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0x89,"Lua panic: function(%s.%s) error: %s",lVar6,param_2,uVar11);
      }
    }
  }
LAB_0210f6bc:
  FUN_00c5db00(uVar11,0);
  if (bVar12) {
    return;
  }
  *(undefined8 *)puVar2 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  return;
code_r0x0210f724:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar12) {
    *(undefined8 *)puVar2 = uVar11;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0210f72c;
  goto LAB_0210f71c;
code_r0x0210f744:
  cVar1 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar13) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0210f74c;
  goto LAB_0210f73c;
code_r0x0210f844:
  cVar1 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar13) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0210f84c;
  goto LAB_0210f83c;
}


