/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ecbb0; name: FUN_014ecbb0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_014ecbb0(void)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *local_40;
  char local_38;
  
  if (DAT_048364f0 == '\x03') {
    if (DAT_0483b3a0 != (long *)0x0) {
      if ((*(byte *)((long)DAT_0483b3a0 + 0x24a) & 1) == 0) {
        return 0;
      }
      FUN_014ece90(DAT_0483b3a0);
      plVar3 = DAT_0483b3a0;
      DAT_0483b3a0 = (long *)0x0;
      if (plVar3 == (long *)0x0) {
        DAT_0483b3a0 = (long *)0x0;
        return 0;
      }
      lVar10 = plVar3[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 != 1) {
        if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return 0;
      }
      *(undefined8 *)(lVar10 + 0x10) = 0;
      pcVar11 = *(code **)(*plVar3 + 0x50);
      goto LAB_014ecda8;
    }
    uVar8 = FUN_014ece00();
joined_r0x014eccc4:
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    goto LAB_014eccc8;
  }
  uVar9 = 0;
  switch(DAT_048364f0) {
  case '\0':
    FUN_014ecfec();
    break;
  case '\x01':
    uVar8 = FUN_014ed19c();
    goto joined_r0x014eccc4;
  case '\x02':
    FUN_014ed8ac();
    break;
  default:
    goto switchD_014ecc24_caseD_3;
  case '\x04':
    thunk_FUN_014ece20(&local_40);
    if (local_38 != '\0') {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar10 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar10;
      plVar3 = *(long **)(lVar10 + 0x1c8);
      plVar6 = *(long **)(lVar10 + 0x1c0);
      do {
        if (plVar6 == plVar3) {
          lVar10 = 0;
          break;
        }
        lVar10 = *plVar6;
        uVar8 = FUN_011b8548(lVar10 + 0x28);
        plVar6 = plVar6 + 1;
      } while ((uVar8 & 1) == 0);
      FUN_014ece0c(lVar10,local_40);
    }
    DAT_048364f0 = DAT_048364f0 + '\x01';
    if (local_40 == (long *)0x0) {
      return 0;
    }
    plVar3 = local_40 + 5;
    do {
      lVar10 = *plVar3;
      iVar7 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 != 0) {
      if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      return 0;
    }
    pcVar11 = *(code **)(*local_40 + 0x10);
LAB_014ecda8:
    (*pcVar11)();
    return 0;
  case '\x05':
    FUN_014ed0c4(0);
    break;
  case '\x06':
    uVar9 = 1;
    DAT_048364f0 = '\0';
    goto switchD_014ecc24_caseD_3;
  }
LAB_014eccc8:
  DAT_048364f0 = DAT_048364f0 + '\x01';
  uVar9 = 0;
switchD_014ecc24_caseD_3:
  return uVar9;
}


