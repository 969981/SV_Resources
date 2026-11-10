/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4af84; name: FUN_00a4af84
 */


long * FUN_00a4af84(long param_1,char *param_2)

{
  short *psVar1;
  ulong *puVar2;
  ulong *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long *aplStack_98 [4];
  long *plStack_78;
  undefined8 uStack_68;
  long **pplStack_60;
  code *pcStack_58;
  long *local_28;
  
  if (*param_2 == '\0') {
    local_28 = (long *)FUN_00d44228();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(&local_28,uVar8,param_2);
  }
  plVar11 = *(long **)(param_1 + 0x50);
  if (plVar11 != (long *)0x0) {
    puVar2 = (ulong *)PTR_DAT_047d8b70;
    if (local_28 != (long *)0x0) {
      puVar2 = (ulong *)(local_28 + 6);
    }
    do {
      while( true ) {
        puVar3 = (ulong *)PTR_DAT_047d8b70;
        if (plVar11[4] != 0) {
          puVar3 = (ulong *)(plVar11[4] + 0x30);
        }
        if (*puVar3 <= *puVar2) break;
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_00a4b0c4;
      }
      if (*puVar2 <= *puVar3) {
        if (plVar11 != (long *)0x0) {
          if (local_28 != (long *)0x0) {
            (**(code **)(*local_28 + 0x20))(local_28);
          }
          return plVar11 + 5;
        }
        break;
      }
      plVar11 = (long *)plVar11[1];
    } while (plVar11 != (long *)0x0);
  }
LAB_00a4b0c4:
  auVar13 = FUN_00a4bd00();
  lVar12 = auVar13._0_8_;
  pcStack_58 = FUN_00a4b0c8;
  pplStack_60 = aplStack_98 + 0xf;
  FUN_00db2500(lVar12 + 8);
  FUN_00a4bc40(lVar12 + 0x48,*(undefined8 *)(lVar12 + 0x50));
  *(undefined8 *)(lVar12 + 0x78) = 0;
  *(undefined8 **)(lVar12 + 0x48) = (undefined8 *)(lVar12 + 0x50);
  *(undefined8 *)(lVar12 + 0x50) = 0;
  uStack_68 = auVar13._8_8_;
  FUN_00e52f24(aplStack_98,&uStack_68);
  uVar9 = FUN_00dc5c18(lVar12 + 8,1,aplStack_98,0,0);
  if ((uVar9 & 1) == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(lVar12 + 0x28);
    plVar11 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[6];
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar8;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar12 = plVar10[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      plVar11 = (long *)0x1;
    }
  }
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x20))();
  }
  if (aplStack_98[0] != (long *)0x0) {
    (**(code **)(*aplStack_98[0] + 0x20))();
  }
  return plVar11;
}


