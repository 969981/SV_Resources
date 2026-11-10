/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5d450; name: FUN_00c5d450
 */


undefined8 FUN_00c5d450(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  LightEventType *pLVar1;
  char cVar2;
  bool bVar3;
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
  undefined8 *puVar14;
  
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
  puVar14 = (undefined8 *)PTR_DAT_047d38f8;
  lVar7 = *(long *)(param_1 + 0x100);
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar10) {
    uVar12 = nn::os::GetCurrentThread();
LAB_00c5d658:
    if (*puVar14 == 0) goto code_r0x00c5d660;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)((long)puVar14 + 8));
    do {
      if (*puVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)((long)puVar14 + 8));
          while (*puVar14 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
            if (bVar3) {
              *puVar14 = uVar12;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00c5d668;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar3) {
        *puVar14 = uVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00c5d668:
    bVar3 = false;
    goto LAB_00c5d50c;
  }
  bVar3 = true;
LAB_00c5d50c:
  lVar10 = *(long *)(param_1 + 0xe0);
  uVar12 = *(undefined8 *)(lVar7 + 0x70);
  lVar8 = *(long *)(lVar7 + 0x80);
  iVar6 = 2;
  if (lVar10 == 0) {
    iVar6 = 3;
  }
  if (-1 < *(int *)(lVar8 + 0x58)) {
    lVar11 = *puVar14;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      uVar13 = nn::os::GetCurrentThread();
LAB_00c5d678:
      if (*puVar14 == 0) goto code_r0x00c5d680;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)((long)puVar14 + 8));
      do {
        if (*puVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)((long)puVar14 + 8));
            while (*puVar14 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar14,0x10);
              if (bVar9) {
                *puVar14 = uVar13;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00c5d688;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar9) {
          *puVar14 = uVar13;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00c5d688:
      bVar9 = false;
      goto LAB_00c5d540;
    }
    bVar9 = true;
LAB_00c5d540:
    iVar4 = FUN_00c5fc50(uVar12,0xfff0b9d8,(long)*(int *)(lVar8 + 0x5c));
    iVar5 = *(int *)(lVar8 + 0x58);
    if (!bVar9) {
      *puVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)puVar14 + 8));
    }
    if (iVar4 == iVar5) {
      if (lVar10 == 0) {
        iVar5 = FUN_00c5d9a0(uVar12,0xffffffff,param_2);
        uVar13 = 0;
        puVar14 = (undefined8 *)PTR_DAT_047d38f8;
        if ((iVar5 != 6) || (*(int *)(lVar8 + 0x58) < 0)) goto LAB_00c5d610;
        lVar11 = *(long *)PTR_DAT_047d38f8;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar11) {
          uVar13 = nn::os::GetCurrentThread();
LAB_00c5d844:
          if (*(long *)PTR_DAT_047d38f8 == 0) goto code_r0x00c5d854;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
          do {
            if (*(long *)PTR_DAT_047d38f8 != 0) {
              pLVar1 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar1);
                while (*(long *)PTR_DAT_047d38f8 == 0) {
                  cVar2 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
                  if (bVar9) {
                    *(undefined8 *)PTR_DAT_047d38f8 = uVar13;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_00c5d864;
                }
              } while( true );
            }
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
            if (bVar9) {
              *(undefined8 *)PTR_DAT_047d38f8 = uVar13;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_00c5d864:
          bVar9 = false;
          goto LAB_00c5d7f4;
        }
        bVar9 = true;
LAB_00c5d7f4:
        iVar4 = FUN_00c5fc50(uVar12,0xfff0b9d8,(long)*(int *)(lVar8 + 0x5c));
        puVar14 = (undefined8 *)PTR_DAT_047d38f8;
        iVar5 = *(int *)(lVar8 + 0x58);
        if (!bVar9) {
          pLVar1 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
          *(undefined8 *)PTR_DAT_047d38f8 = 0;
          nn::os::SignalLightEvent(pLVar1);
        }
        if (iVar4 == iVar5) goto LAB_00c5d5a0;
      }
      else {
        iVar5 = FUN_00c5d9a0(uVar12,0xffffffff,lVar10);
        if ((iVar5 == 5) && (iVar5 = FUN_00c5d9a0(uVar12,0xffffffff,param_2), iVar5 == 6)) {
LAB_00c5d5a0:
          FUN_00c5d960(uVar12,*param_3);
          FUN_00c5df00(uVar12,param_4);
          iVar5 = FUN_00c5d980(uVar12);
          FUN_00c5dbe0(uVar12,FUN_01e38200,0);
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
          goto LAB_00c5d610;
        }
      }
    }
  }
  uVar13 = 0;
LAB_00c5d610:
  FUN_00c5db00(uVar12,0);
  if (!bVar3) {
    *puVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar14 + 1));
  }
  return uVar13;
code_r0x00c5d660:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
  if (bVar3) {
    *puVar14 = uVar12;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00c5d668;
  goto LAB_00c5d658;
code_r0x00c5d680:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar14,0x10);
  if (bVar9) {
    *puVar14 = uVar13;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00c5d688;
  goto LAB_00c5d678;
code_r0x00c5d854:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
  if (bVar9) {
    *(undefined8 *)PTR_DAT_047d38f8 = uVar13;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00c5d864;
  goto LAB_00c5d844;
}


