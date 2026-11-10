/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d61c8; name: FUN_018d61c8
 */


void FUN_018d61c8(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  
  if (*param_1 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)(*param_1 + 0x10);
    plVar9 = (long *)0x0;
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + -0x28);
    }
  }
  lVar8 = FUN_01545bdc(plVar9 + 0x21,&local_70);
  if (lVar8 == 0) {
    plVar12 = (long *)plVar9[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1c8,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    local_70 = (long *)*param_2;
    uStack_68 = param_2[1];
    local_60 = param_2[2];
    plVar3 = (long *)param_2[3];
    plStack_58 = plVar3;
    if (plVar3 == (long *)0x0) {
      FUN_018d65ac(plVar6,&local_70,param_3,8);
    }
    else {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      FUN_018d65ac(plVar6,&local_70,param_3,8);
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    *(undefined4 *)(plVar6 + 3) = 0x801c8;
    plVar6[1] = (long)plVar12;
    plVar6[2] = (long)plVar6;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = plVar6[0x13];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar12 = plVar6 + 4;
    (**(code **)(*plVar12 + 0xe8))(plVar12,plVar9);
    (**(code **)(*plVar12 + 0x68))(plVar12);
    local_70 = plVar6;
    FUN_00df8c30(plVar9 + 0x21,&local_70);
    if (local_70 != (long *)0x0) {
      lVar8 = local_70[0x13];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar9 + 0x100))(plVar9,plVar12);
    plVar6 = plVar9 + 0x88;
    lVar11 = *plVar6;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar11) {
      lVar8 = nn::os::GetCurrentThread();
LAB_018d6360:
      if (*plVar6 == 0) goto code_r0x018d6368;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x89));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x89));
            while (*plVar6 == 0) {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar10) {
                *plVar6 = lVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_018d6370;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_018d6370:
      bVar10 = false;
      goto LAB_018d6374;
    }
    plVar6 = (long *)0x0;
    bVar10 = true;
LAB_018d6374:
    if ((*(byte *)(plVar9 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar9,0,0);
    }
    else {
      (**(code **)(*plVar12 + 0xf8))(plVar12);
    }
    if (!bVar10) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
  }
  return;
code_r0x018d6368:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar10) {
    *plVar6 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_018d6370;
  goto LAB_018d6360;
}


