/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014af9e4; name: FUN_014af9e4
 */


void FUN_014af9e4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,void *param_6,undefined8 *param_7,undefined8 *param_8)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 auStack_110 [176];
  
  puVar2 = PTR_DAT_047d38f8;
  iVar6 = 4;
  if (param_3 == 0) {
    iVar6 = 5;
  }
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar11 = *(long *)PTR_DAT_047d38f8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      uVar9 = nn::os::GetCurrentThread();
LAB_014afccc:
      if (*(long *)puVar2 == 0) goto code_r0x014afcd4;
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
              if (cVar1 == '\0') goto LAB_014afcdc;
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
LAB_014afcdc:
      bVar12 = false;
      goto LAB_014afa50;
    }
    bVar12 = true;
LAB_014afa50:
    iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar5 = *(int *)(param_2 + 0x58);
    if (!bVar12) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar4 == iVar5) {
      if (param_3 == 0) {
        iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
        if ((iVar5 != 6) || (*(int *)(param_2 + 0x58) < 0)) goto LAB_014afc9c;
        lVar11 = *(long *)puVar2;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar11) {
          uVar9 = nn::os::GetCurrentThread();
LAB_014afec8:
          if (*(long *)puVar2 == 0) goto code_r0x014afed0;
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
                  if (cVar1 == '\0') goto LAB_014afed8;
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
LAB_014afed8:
          bVar12 = false;
          goto LAB_014afe1c;
        }
        bVar12 = true;
LAB_014afe1c:
        iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
        iVar5 = *(int *)(param_2 + 0x58);
        if (!bVar12) {
          *(undefined8 *)puVar2 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
        }
        if (iVar4 != iVar5) goto LAB_014afc9c;
      }
      else {
        iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
        if ((iVar5 != 5) || (iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar5 != 6))
        goto LAB_014afc9c;
      }
      FUN_0135e530(param_1,param_5);
      memcpy(auStack_110,param_6,0xa0);
      lVar11 = *(long *)puVar2;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 != lVar11) {
        uVar9 = nn::os::GetCurrentThread();
LAB_014afcec:
        if (*(long *)puVar2 == 0) goto code_r0x014afcf4;
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
                if (cVar1 == '\0') goto LAB_014afcfc;
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
LAB_014afcfc:
        bVar12 = false;
        goto LAB_014afadc;
      }
      bVar12 = true;
LAB_014afadc:
      puVar3 = PTR_DAT_047d3f70;
      plVar15 = *(long **)(*(long *)PTR_DAT_047d3f70 + 0x148);
      __dest = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,0xa0,0x10);
      if (__dest == (void *)0x0) {
        if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
          (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
        }
        plVar15 = *(long **)(*(long *)puVar3 + 0x148);
        __dest = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,0xa0,0x10);
        if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("result","CreateImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                     ,0x69,"GlueCode MemoryManager Allocate failed.");
        }
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar15;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      memcpy(__dest,auStack_110,0xa0);
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (!bVar12) {
        *(undefined8 *)puVar2 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
      }
      puVar8 = (undefined8 *)FUN_00c5e120(param_1,8,1);
      if (((*PTR_DAT_047d38a0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38a0);
      }
      lVar11 = *(long *)PTR_DAT_047d38a8;
      *(long *)PTR_DAT_047d38b0 = lVar11;
      lVar13 = *(long *)puVar2;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 != lVar13) {
        uVar9 = nn::os::GetCurrentThread();
LAB_014afd0c:
        if (*(long *)puVar2 == 0) goto code_r0x014afd14;
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
                if (cVar1 == '\0') goto LAB_014afd1c;
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
LAB_014afd1c:
        bVar12 = false;
        goto LAB_014afbc4;
      }
      bVar12 = true;
LAB_014afbc4:
      if (*(long *)(lVar11 + 0x28) == *(long *)(lVar11 + 0x30)) {
        puVar14 = (undefined1 *)FUN_00d97840(0x40,8);
      }
      else {
        puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x30) + -8);
        puVar14 = (undefined1 *)*puVar10;
        *(undefined8 **)(lVar11 + 0x30) = puVar10;
      }
      if (!bVar12) {
        *(undefined8 *)puVar2 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
      }
      *(undefined8 *)(puVar14 + 0x18) = 0xa0;
      *(undefined8 *)(puVar14 + 0x20) = 0x10;
      *(void **)(puVar14 + 8) = __dest;
      *(long **)(puVar14 + 0x10) = plVar15;
      *puVar14 = 1;
      *puVar8 = puVar14;
      FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)PTR_DAT_047d3c08);
      FUN_00c5e190(param_1,0xfffffffe);
      FUN_014b0030(param_1,*param_7);
      FUN_014b0030(param_1,*param_8);
      iVar5 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_02111ea0,0);
      FUN_00c5dcd0(param_1,iVar5 - iVar6,1);
      iVar6 = FUN_00c5ddd0(param_1,iVar6,0,iVar5 - iVar6,0,0);
      if (iVar6 != 0) {
        uVar9 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar9;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar9);
      }
    }
  }
LAB_014afc9c:
  FUN_00c5db00(param_1,0);
  return;
code_r0x014afcd4:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar12) {
    *(undefined8 *)puVar2 = uVar9;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014afcdc;
  goto LAB_014afccc;
code_r0x014afed0:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar12) {
    *(undefined8 *)puVar2 = uVar9;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014afed8;
  goto LAB_014afec8;
code_r0x014afcf4:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar12) {
    *(undefined8 *)puVar2 = uVar9;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014afcfc;
  goto LAB_014afcec;
code_r0x014afd14:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar12) {
    *(undefined8 *)puVar2 = uVar9;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_014afd1c;
  goto LAB_014afd0c;
}


