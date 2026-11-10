/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01014118; name: FUN_01014118
 */


void FUN_01014118(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar14 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar14;
  puVar11 = PTR_DAT_047d49b8;
  puVar10 = PTR_DAT_047d49b0;
  puVar9 = PTR_DAT_047d4850;
  puVar8 = PTR_DAT_047d3ab0;
  puVar7 = PTR_DAT_047d39c0;
  puVar6 = PTR_DAT_047d39b8;
  plVar16 = *(long **)(lVar14 + 0x1c0);
  plVar2 = *(long **)(lVar14 + 0x1c8);
  do {
    if (plVar16 == plVar2) {
      return;
    }
    lVar14 = *plVar16;
    plVar13 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
      if (((*PTR_DAT_047d4848 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4848), iVar12 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3aa8), iVar12 != 0)) {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar12 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
              *(undefined8 *)PTR_DAT_047d39c8 = 0;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar6 = PTR_DAT_047d39c8;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(PTR_DAT_047d4848);
      }
      *(undefined **)puVar11 = puVar9;
      __cxa_guard_release(puVar10);
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)puVar11) {
        *(byte *)(param_1 + 0x1c1) = *(byte *)(lVar14 + 0x40) >> 5 & 1;
        *(byte *)(param_1 + 0x1c0) = *(byte *)(lVar14 + 0x40) >> 6 & 1;
        lVar14 = *(long *)(param_1 + 0x138);
        if (lVar14 == 0) {
          return;
        }
        if (*(short *)(lVar14 + 0x1a) == 0) {
          return;
        }
        psVar1 = (short *)(lVar14 + 0x1a);
        sVar15 = *(short *)(lVar14 + 0x1a);
        goto LAB_01014270;
      }
    }
    plVar16 = plVar16 + 1;
  } while( true );
LAB_01014270:
  sVar3 = *psVar1;
  if (sVar3 == sVar15) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar15 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01014294;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01014294:
    bVar5 = false;
  }
  if (bVar5) {
    lVar14 = *(long *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      return;
    }
    plVar16 = (long *)(lVar14 + -0x28);
    FUN_01f8c7ac(plVar16,param_1 + 0x1c0);
    lVar14 = *(long *)(lVar14 + 0x70);
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01014370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x50))(plVar16);
      return;
    }
    if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  sVar15 = sVar3;
  if (sVar3 == 0) {
    return;
  }
  goto LAB_01014270;
}


