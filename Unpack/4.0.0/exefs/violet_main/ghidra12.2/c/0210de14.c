/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210de14; name: FUN_0210de14
 */


ulong FUN_0210de14(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,char *param_6)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
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
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x90) != -1)) {
    *(undefined8 *)(lVar9 + (long)*(int *)(lVar7 + 0x90) * 8 + 0x6a0) = uVar10;
  }
  puVar3 = PTR_DAT_047d38f8;
  lVar7 = *(long *)(param_1 + 0x100);
  lVar11 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar11) {
    uVar10 = nn::os::GetCurrentThread();
LAB_0210e06c:
    if (*(long *)puVar3 == 0) goto code_r0x0210e074;
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
              *(undefined8 *)puVar3 = uVar10;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0210e07c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *(undefined8 *)puVar3 = uVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0210e07c:
    bVar2 = false;
    goto LAB_0210ded4;
  }
  bVar2 = true;
LAB_0210ded4:
  lVar11 = *(long *)(param_1 + 0xc0);
  uVar10 = *(undefined8 *)(lVar7 + 0x70);
  lVar9 = *(long *)(lVar7 + 0x80);
  iVar6 = 4;
  if (lVar11 == 0) {
    iVar6 = 5;
  }
  if (-1 < *(int *)(lVar9 + 0x58)) {
    lVar13 = *(long *)puVar3;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar13) {
      uVar8 = nn::os::GetCurrentThread();
LAB_0210e08c:
      if (*(long *)puVar3 == 0) goto code_r0x0210e094;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar1 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar12) {
                *(undefined8 *)puVar3 = uVar8;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_0210e09c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar12) {
          *(undefined8 *)puVar3 = uVar8;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_0210e09c:
      bVar12 = false;
      goto LAB_0210df14;
    }
    bVar12 = true;
LAB_0210df14:
    iVar4 = FUN_00c5fc50(uVar10,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
    iVar5 = *(int *)(lVar9 + 0x58);
    if (!bVar12) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar5) {
      if (lVar11 == 0) {
        iVar5 = FUN_00c5d9a0(uVar10,0xffffffff,param_2);
        uVar14 = 0;
        if (iVar5 != 6) {
          uVar15 = 0;
          goto LAB_0210e020;
        }
        uVar15 = 0;
        if (*(int *)(lVar9 + 0x58) < 0) goto LAB_0210e020;
        lVar13 = *(long *)puVar3;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar13) {
          uVar8 = nn::os::GetCurrentThread();
LAB_0210e198:
          if (*(long *)puVar3 == 0) goto code_r0x0210e1a0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          do {
            if (*(long *)puVar3 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
                while (*(long *)puVar3 == 0) {
                  cVar1 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar12) {
                    *(undefined8 *)puVar3 = uVar8;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_0210e1a8;
                }
              } while( true );
            }
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar12) {
              *(undefined8 *)puVar3 = uVar8;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_0210e1a8:
          bVar12 = false;
          goto LAB_0210e160;
        }
        bVar12 = true;
LAB_0210e160:
        iVar4 = FUN_00c5fc50(uVar10,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
        iVar5 = *(int *)(lVar9 + 0x58);
        if (!bVar12) {
          *(undefined8 *)puVar3 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
        }
        if (iVar4 == iVar5) goto LAB_0210df74;
      }
      else {
        iVar5 = FUN_00c5d9a0(uVar10,0xffffffff,lVar11);
        if ((iVar5 == 5) && (iVar5 = FUN_00c5d9a0(uVar10,0xffffffff,param_2), iVar5 == 6)) {
LAB_0210df74:
          FUN_0135e530(uVar10,param_3);
          FUN_00c5d960(uVar10,*param_4);
          FUN_00c85bd0(uVar10,*(undefined8 *)(param_5 + 8));
          FUN_00c419e0(uVar10,*param_6 != '\0');
          iVar5 = FUN_00c5d980(uVar10);
          FUN_00c5dbe0(uVar10,&LAB_02111ea0,0);
          FUN_00c5dcd0(uVar10,iVar5 - iVar6,1);
          iVar6 = FUN_00c5ddd0(uVar10,iVar6,1,iVar5 - iVar6,0,0);
          if (iVar6 != 0) {
            uVar10 = FUN_00c646d0(uVar10,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar10;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",lVar11,param_2,uVar10);
          }
          iVar6 = FUN_00cc4dc0(uVar10);
          uVar15 = (ulong)(iVar6 != 0) << 8;
          uVar14 = 1;
          goto LAB_0210e020;
        }
      }
    }
  }
  uVar14 = 0;
  uVar15 = 0;
LAB_0210e020:
  FUN_00c5db00(uVar10,0);
  if (!bVar2) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  }
  return uVar15 | uVar14;
code_r0x0210e074:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar2) {
    *(undefined8 *)puVar3 = uVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0210e07c;
  goto LAB_0210e06c;
code_r0x0210e094:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar12) {
    *(undefined8 *)puVar3 = uVar8;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0210e09c;
  goto LAB_0210e08c;
code_r0x0210e1a0:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar12) {
    *(undefined8 *)puVar3 = uVar8;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0210e1a8;
  goto LAB_0210e198;
}


