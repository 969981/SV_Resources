/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01108f94; name: FUN_01108f94
 */


void FUN_01108f94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  long lVar17;
  undefined8 uVar18;
  bool bVar19;
  long lVar20;
  undefined1 uVar21;
  
  puVar5 = PTR_DAT_047d38f8;
  lVar17 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar17) {
    uVar18 = nn::os::GetCurrentThread();
LAB_0110919c:
    if (*(long *)puVar5 == 0) goto code_r0x011091a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar4) {
              *(undefined8 *)puVar5 = uVar18;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_011091ac;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *(undefined8 *)puVar5 = uVar18;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_011091ac:
    bVar4 = false;
    goto LAB_01108fd8;
  }
  bVar4 = true;
LAB_01108fd8:
  uVar18 = *(undefined8 *)(param_1 + 0x70);
  lVar17 = *(long *)(param_1 + 0x80);
  lVar9 = *(long *)(param_2[1] + 0xc0);
  iVar8 = 6;
  if (lVar9 == 0) {
    iVar8 = 7;
  }
  if (-1 < *(int *)(lVar17 + 0x58)) {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    puVar15 = (undefined8 *)param_2[4];
    puVar12 = (undefined8 *)param_2[5];
    pcVar16 = (char *)param_2[6];
    puVar13 = (undefined4 *)param_2[7];
    puVar14 = (undefined4 *)param_2[8];
    lVar20 = *(long *)puVar5;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar20) {
      uVar11 = nn::os::GetCurrentThread();
LAB_011091bc:
      if (*(long *)puVar5 == 0) goto code_r0x011091c4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar3 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar19) {
                *(undefined8 *)puVar5 = uVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_011091cc;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar19) {
          *(undefined8 *)puVar5 = uVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_011091cc:
      bVar19 = false;
      goto LAB_0110903c;
    }
    bVar19 = true;
LAB_0110903c:
    iVar6 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)(lVar17 + 0x5c));
    iVar7 = *(int *)(lVar17 + 0x58);
    if (!bVar19) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    if (iVar6 == iVar7) {
      if (lVar9 == 0) {
        iVar7 = FUN_00c5d9a0(uVar18,0xffffffff,uVar1);
        uVar21 = 0;
        if ((iVar7 != 6) || (*(int *)(lVar17 + 0x58) < 0)) goto LAB_01109150;
        lVar20 = *(long *)puVar5;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar20) {
          uVar11 = nn::os::GetCurrentThread();
LAB_011092e0:
          if (*(long *)puVar5 == 0) goto code_r0x011092e8;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          do {
            if (*(long *)puVar5 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                while (*(long *)puVar5 == 0) {
                  cVar3 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar19) {
                    *(undefined8 *)puVar5 = uVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_011092f0;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar19) {
              *(undefined8 *)puVar5 = uVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_011092f0:
          bVar19 = false;
          goto LAB_011092ac;
        }
        bVar19 = true;
LAB_011092ac:
        iVar6 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)(lVar17 + 0x5c));
        iVar7 = *(int *)(lVar17 + 0x58);
        if (!bVar19) {
          *(undefined8 *)puVar5 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
        }
        if (iVar6 == iVar7) goto LAB_01109098;
      }
      else {
        iVar7 = FUN_00c5d9a0(uVar18,0xffffffff,lVar9);
        if ((iVar7 == 5) && (iVar7 = FUN_00c5d9a0(uVar18,0xffffffff,uVar1), iVar7 == 6)) {
LAB_01109098:
          FUN_00ca1900(uVar18,uVar2);
          FUN_011093c0(uVar18,*puVar15);
          FUN_011093c0(uVar18,*puVar12);
          FUN_00c419e0(uVar18,*pcVar16 != '\0');
          FUN_00c5d960(uVar18,*puVar13);
          FUN_00c5d960(uVar18,*puVar14);
          iVar7 = FUN_00c5d980(uVar18);
          FUN_00c5dbe0(uVar18,FUN_021cbfc0,0);
          uVar21 = 1;
          FUN_00c5dcd0(uVar18,iVar7 - iVar8,1);
          iVar8 = FUN_00c5ddd0(uVar18,iVar8,0,iVar7 - iVar8,0,0);
          if (iVar8 != 0) {
            uVar18 = FUN_00c646d0(uVar18,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar18;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",lVar9,uVar1,uVar18);
          }
          goto LAB_01109150;
        }
      }
    }
  }
  uVar21 = 0;
LAB_01109150:
  FUN_00c5db00(uVar18,0);
  *(undefined1 *)*param_2 = uVar21;
  if (bVar4) {
    return;
  }
  *(undefined8 *)puVar5 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  return;
code_r0x011091a4:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar4) {
    *(undefined8 *)puVar5 = uVar18;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_011091ac;
  goto LAB_0110919c;
code_r0x011091c4:
  cVar3 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar19) {
    *(undefined8 *)puVar5 = uVar11;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_011091cc;
  goto LAB_011091bc;
code_r0x011092e8:
  cVar3 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar19) {
    *(undefined8 *)puVar5 = uVar11;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_011092f0;
  goto LAB_011092e0;
}


