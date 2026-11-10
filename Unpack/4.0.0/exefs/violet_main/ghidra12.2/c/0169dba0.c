/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169dba0; name: FUN_0169dba0
 */


undefined4 FUN_0169dba0(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined4 local_54 [5];
  
  if (((*PTR_DAT_047d38d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d38d8), iVar9 != 0))
  {
    FUN_00100190(&LAB_008f33ec,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38d8);
  }
  lVar10 = *(long *)PTR_DAT_047d38e0;
  DAT_04800900 = lVar10;
  nn::os::LockMutex((MutexType *)(lVar10 + 0x90));
  local_54[0] = *(undefined4 *)(lVar10 + 0xb0);
  local_60 = (long *)0x0;
  FUN_0169e42c(lVar10 + 0x28,local_54,&local_60);
  if (local_60 != (long *)0x0) {
    lVar15 = local_60[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0169ddec;
  }
  uVar16 = *(undefined8 *)(lVar10 + 8);
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_70);
  plVar14 = local_70;
  plVar11 = (long *)(**(code **)local_70[5])(local_70 + 5);
  if ((*PTR_DAT_047d9100 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_047d9100);
    puVar7 = PTR_DAT_047d3ab0;
    if (iVar9 != 0) {
      if ((*PTR_DAT_047d3aa8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
        puVar5 = PTR_DAT_047d39b8;
        if (iVar9 != 0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar6 = PTR_DAT_047d39c8;
            if (iVar9 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
                *(undefined8 *)puVar6 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar5 = puVar6;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
      }
      *(undefined **)PTR_DAT_047d9108 = puVar7;
      __cxa_guard_release(PTR_DAT_047d9100);
    }
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    if (plVar11 == (long *)PTR_DAT_047d9108) goto LAB_0169dce4;
  }
  plVar14 = (long *)0x0;
LAB_0169dce4:
  local_68 = plVar14;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar12;
  plVar11 = (long *)FUN_012fd13c(uVar12,1);
  local_78 = *(undefined8 *)(*plVar11 + 0x40);
  uVar16 = FUN_0169e0e0(uVar16,&local_68,&local_78);
  FUN_0169e024(&local_60,uVar16);
  puVar13 = (undefined8 *)FUN_0169e220(lVar10 + 0x28,local_54);
  FUN_0169dfa4();
  plVar11 = local_60;
  local_60 = (long *)0x0;
  *puVar13 = plVar11;
  if (local_70 != (long *)0x0) {
    lVar15 = local_70[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0169ddec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar8 = local_54[0];
  *(uint *)(lVar10 + 0xb0) = *(int *)(lVar10 + 0xb0) + 1U & 0x3f;
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x90));
  return uVar8;
}


