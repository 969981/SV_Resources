/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02106294; name: FUN_02106294
 */


void FUN_02106294(long param_1,undefined8 *param_2,long *param_3,int *param_4,char *param_5,
                 char *param_6,char *param_7,char *param_8)

{
  short *psVar1;
  long *plVar2;
  LightEventType *pLVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  short sVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_88 [24];
  char local_70 [8];
  long *local_68;
  
  if ((((*(long *)(param_1 + 0x160) != 0) && (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) != 0))
      && (lVar13 = *(long *)(param_1 + 0x160), lVar13 != 0)) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar14 = *(short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar14) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02106344;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02106344:
        bVar6 = false;
      }
      if (bVar6) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 == 0) {
          return;
        }
        FUN_00d9ec44(auStack_88,2,*param_2);
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar17 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar17;
        if (*(undefined8 **)(lVar13 + 0x28) == (undefined8 *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = **(undefined8 **)(lVar13 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x90) != -1)) {
          *(undefined8 *)(lVar17 + (long)*(int *)(lVar11 + 0x90) * 8 + 0x6a0) = uVar18;
        }
        lVar19 = *(long *)(lVar13 + 0xd8);
        lVar11 = *(long *)PTR_DAT_047d38f8;
        lVar17 = nn::os::GetCurrentThread();
        if (lVar17 == lVar11) {
          bVar6 = true;
          goto LAB_02106424;
        }
        uVar18 = nn::os::GetCurrentThread();
        puVar7 = PTR_DAT_047d38f8;
        goto LAB_021066b4;
      }
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
  return;
code_r0x021066f4:
  cVar5 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar16) {
    *(undefined8 *)puVar7 = uVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_021066fc;
  goto LAB_021066e4;
code_r0x021068a4:
  cVar5 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar16) {
    *(undefined8 *)puVar7 = uVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_021068ac;
  goto LAB_02106894;
LAB_021066b4:
  if (*(long *)PTR_DAT_047d38f8 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar6) {
      *(undefined8 *)puVar7 = uVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_021066cc;
    goto LAB_021066b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
  puVar7 = PTR_DAT_047d38f8;
  do {
    if (*(long *)PTR_DAT_047d38f8 != 0) {
      pLVar3 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar3);
        while (*(long *)PTR_DAT_047d38f8 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
          if (bVar6) {
            *(undefined8 *)PTR_DAT_047d38f8 = uVar18;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021066cc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar6) {
      *(undefined8 *)puVar7 = uVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021066cc:
  bVar6 = false;
LAB_02106424:
  uVar18 = *(undefined8 *)(lVar19 + 0x70);
  lVar11 = *(long *)(lVar19 + 0x80);
  lVar17 = *(long *)(lVar13 + 0x98);
  iVar10 = 7;
  if (lVar17 == 0) {
    iVar10 = 8;
  }
  if (-1 < *(int *)(lVar11 + 0x58)) {
    lVar15 = *(long *)PTR_DAT_047d38f8;
    lVar19 = nn::os::GetCurrentThread();
    if (lVar19 != lVar15) {
      uVar12 = nn::os::GetCurrentThread();
      puVar7 = PTR_DAT_047d38f8;
LAB_021066e4:
      if (*(long *)PTR_DAT_047d38f8 == 0) goto code_r0x021066f4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
      puVar7 = PTR_DAT_047d38f8;
      do {
        if (*(long *)PTR_DAT_047d38f8 != 0) {
          pLVar3 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar3);
            while (*(long *)PTR_DAT_047d38f8 == 0) {
              cVar5 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
              if (bVar16) {
                *(undefined8 *)PTR_DAT_047d38f8 = uVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_021066fc;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar16) {
          *(undefined8 *)puVar7 = uVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_021066fc:
      bVar16 = false;
      goto LAB_02106470;
    }
    bVar16 = true;
LAB_02106470:
    iVar8 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
    iVar9 = *(int *)(lVar11 + 0x58);
    if (!bVar16) {
      pLVar3 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
      *(undefined8 *)PTR_DAT_047d38f8 = 0;
      nn::os::SignalLightEvent(pLVar3);
    }
    if (iVar8 == iVar9) {
      if (lVar17 == 0) {
        iVar9 = FUN_00c5d9a0(uVar18,0xffffffff,auStack_88);
        if ((iVar9 != 6) || (*(int *)(lVar11 + 0x58) < 0)) goto LAB_021065e4;
        lVar15 = *(long *)PTR_DAT_047d38f8;
        lVar19 = nn::os::GetCurrentThread();
        if (lVar19 != lVar15) {
          uVar12 = nn::os::GetCurrentThread();
          puVar7 = PTR_DAT_047d38f8;
LAB_02106894:
          if (*(long *)PTR_DAT_047d38f8 == 0) goto code_r0x021068a4;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
          puVar7 = PTR_DAT_047d38f8;
          do {
            if (*(long *)PTR_DAT_047d38f8 != 0) {
              pLVar3 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar3);
                while (*(long *)PTR_DAT_047d38f8 == 0) {
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
                  if (bVar16) {
                    *(undefined8 *)PTR_DAT_047d38f8 = uVar12;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_021068ac;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar16) {
              *(undefined8 *)puVar7 = uVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_021068ac:
          bVar16 = false;
          goto LAB_0210682c;
        }
        bVar16 = true;
LAB_0210682c:
        iVar8 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
        iVar9 = *(int *)(lVar11 + 0x58);
        if (!bVar16) {
          pLVar3 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
          *(undefined8 *)PTR_DAT_047d38f8 = 0;
          nn::os::SignalLightEvent(pLVar3);
        }
        if (iVar8 != iVar9) goto LAB_021065e4;
      }
      else {
        iVar9 = FUN_00c5d9a0(uVar18,0xffffffff,lVar17);
        if ((iVar9 != 5) || (iVar9 = FUN_00c5d9a0(uVar18,0xffffffff,auStack_88), iVar9 != 6))
        goto LAB_021065e4;
      }
      FUN_01424730(uVar18,param_1 + 0x150);
      local_68 = (long *)*param_3;
      if (local_68 != (long *)0x0) {
        plVar2 = local_68 + 5;
        do {
          lVar11 = *plVar2;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar16) {
            *(int *)plVar2 = (int)lVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      local_70[0] = '\x01';
      FUN_00f11c60(uVar18,local_70);
      if ((local_70[0] == '\x01') && (local_68 != (long *)0x0)) {
        plVar2 = local_68 + 5;
        do {
          lVar11 = *plVar2;
          iVar9 = (int)lVar11 + -1;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar16) {
            *(int *)plVar2 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      FUN_00c5d960(uVar18,(long)*param_4);
      FUN_00c419e0(uVar18,*param_5 != '\0');
      FUN_00c419e0(uVar18,*param_6 != '\0');
      FUN_00c419e0(uVar18,*param_7 != '\0');
      FUN_00c419e0(uVar18,*param_8 != '\0');
      iVar9 = FUN_00c5d980(uVar18);
      FUN_00c5dbe0(uVar18,&LAB_021099f0,0);
      FUN_00c5dcd0(uVar18,iVar9 - iVar10,1);
      iVar10 = FUN_00c5ddd0(uVar18,iVar10,0,iVar9 - iVar10,0,0);
      if (iVar10 != 0) {
        uVar18 = FUN_00c646d0(uVar18,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar18;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0x89,"Lua panic: function(%s.%s) error: %s",lVar17,auStack_88,uVar18);
      }
    }
  }
LAB_021065e4:
  FUN_00c5db00(uVar18,0);
  if (!bVar6) {
    pLVar3 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
    *(undefined8 *)PTR_DAT_047d38f8 = 0;
    nn::os::SignalLightEvent(pLVar3);
  }
  lVar17 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar17 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
    return;
  }
  if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


