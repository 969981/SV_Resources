/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e1ad4; name: FUN_010e1ad4
 */


bool FUN_010e1ad4(long *param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_48;
  
  lVar15 = *param_1;
  lVar12 = *(long *)(lVar15 + 0xc0);
  plVar9 = *(long **)(lVar15 + 0x1b0);
  if (plVar9 == (long *)0x0) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x18))(&local_88);
    puVar13 = (undefined8 *)CONCAT71(uStack_87,local_88);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    if ((long *)puVar13[2] == plVar9 + 5) {
      FUN_00cbc6dc(&local_98,&local_88);
      puVar13 = (undefined8 *)CONCAT71(uStack_87,local_88);
    }
    if (puVar13 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar13 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *puVar13;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_010e1d10;
    }
  }
  local_88 = 2;
  local_80 = 0;
  uStack_78 = 0;
  FUN_00ca1ea4(&local_80,&local_98);
  puVar5 = PTR_DAT_047d38f8;
  iVar8 = 1;
  if (lVar12 == 0) {
    iVar8 = 2;
  }
  if (*(int *)(param_3 + 0x58) < 0) {
LAB_010e1f1c:
    uVar11 = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_047d38f8;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar14) {
      uVar11 = nn::os::GetCurrentThread();
LAB_010e1d40:
      if (*(long *)puVar5 == 0) goto code_r0x010e1d48;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar16) {
                *(undefined8 *)puVar5 = uVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_010e1d50;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar16) {
          *(undefined8 *)puVar5 = uVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_010e1d50:
      bVar16 = false;
      goto LAB_010e1b94;
    }
    bVar16 = true;
LAB_010e1b94:
    iVar6 = FUN_00c5fc50(param_2,0xfff0b9d8,(long)*(int *)(param_3 + 0x5c));
    iVar7 = *(int *)(param_3 + 0x58);
    if (!bVar16) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
      if (iVar6 == iVar7) goto LAB_010e1bc0;
      goto LAB_010e1f1c;
    }
    if (iVar6 != iVar7) goto LAB_010e1f1c;
LAB_010e1bc0:
    if (lVar12 == 0) {
      iVar7 = FUN_00c5d9a0(param_2,0xffffffff,&DAT_03bfce13);
      uVar11 = 0;
      if ((iVar7 == 6) && (-1 < *(int *)(param_3 + 0x58))) {
        lVar14 = *(long *)puVar5;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar14) {
          uVar11 = nn::os::GetCurrentThread();
LAB_010e1f28:
          if (*(long *)puVar5 == 0) goto code_r0x010e1f30;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          do {
            if (*(long *)puVar5 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                while (*(long *)puVar5 == 0) {
                  cVar4 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar16) {
                    *(undefined8 *)puVar5 = uVar11;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_010e1f38;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar16) {
              *(undefined8 *)puVar5 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_010e1f38:
          bVar16 = false;
          goto LAB_010e1ef8;
        }
        bVar16 = true;
LAB_010e1ef8:
        iVar6 = FUN_00c5fc50(param_2,0xfff0b9d8,(long)*(int *)(param_3 + 0x5c));
        iVar7 = *(int *)(param_3 + 0x58);
        if (!bVar16) {
          *(undefined8 *)puVar5 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
        }
        if (iVar6 != iVar7) goto LAB_010e1f1c;
        goto LAB_010e1bf8;
      }
    }
    else {
      iVar7 = FUN_00c5d9a0(param_2,0xffffffff,lVar12);
      if ((iVar7 != 5) || (iVar7 = FUN_00c5d9a0(param_2,0xffffffff,&DAT_03bfce13), iVar7 != 6))
      goto LAB_010e1f1c;
LAB_010e1bf8:
      FUN_00ca1900(param_2,&local_88);
      iVar7 = FUN_00c5d980(param_2);
      FUN_00c5dbe0(param_2,FUN_01e38200,0);
      FUN_00c5dcd0(param_2,iVar7 - iVar8,1);
      iVar8 = FUN_00c5ddd0(param_2,iVar8,1,iVar7 - iVar8,0,0);
      if (iVar8 != 0) {
        uVar11 = FUN_00c646d0(param_2,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar11;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0x89,"Lua panic: function(%s.%s) error: %s",lVar12,&DAT_03bfce13,uVar11);
      }
      local_64 = 0xffffffff;
      local_48 = param_2;
      FUN_010e2094(&local_70,&local_48,&local_64);
      uVar11 = local_70;
    }
  }
  FUN_00c5db00(param_2,0);
  plVar9 = *(long **)(lVar15 + 0x118);
  *(undefined8 *)(lVar15 + 0x118) = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar15 + 0x118) = uVar11;
  FUN_00cecfd8(&local_88);
  puVar13 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar16) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_010e1d10:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return *(long *)(lVar15 + 0x118) != 0;
code_r0x010e1d48:
  cVar4 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar16) {
    *(undefined8 *)puVar5 = uVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_010e1d50;
  goto LAB_010e1d40;
code_r0x010e1f30:
  cVar4 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar16) {
    *(undefined8 *)puVar5 = uVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_010e1f38;
  goto LAB_010e1f28;
}


