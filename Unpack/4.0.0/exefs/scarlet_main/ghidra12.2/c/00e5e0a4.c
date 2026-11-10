/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5e0a4; name: FUN_00e5e0a4
 */


void FUN_00e5e0a4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  plVar7 = DAT_0485e990;
  if (DAT_0485e990 != (long *)0x0) {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) == 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x250));
      puVar10 = *(undefined4 **)(param_1 + 0x278);
      puVar9 = *(undefined4 **)(param_1 + 0x270);
      if (puVar10 != puVar9) {
        if (puVar9 != puVar10) {
          do {
            FUN_02c5db68(*puVar9,*(undefined8 *)(puVar9 + 2));
            puVar9 = puVar9 + 4;
          } while (puVar9 != puVar10);
          puVar9 = *(undefined4 **)(param_1 + 0x270);
        }
        *(undefined4 **)(param_1 + 0x278) = puVar9;
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x250));
    }
    else {
      DAT_0485e990 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar6 = plVar7[6];
        psVar1 = (short *)(lVar6 + 0x1a);
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
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
    }
  }
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar6 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar6;
  if (lVar6 != 0) {
    FUN_01a54978();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_02c719f0();
  }
  plVar7 = *(long **)(param_1 + 0x78);
  plVar8 = *(long **)(param_1 + 0x80);
  while (plVar7 != plVar8) {
    if ((*plVar7 == 0) || (*(short *)(*plVar7 + 0x1a) == 0)) {
      plVar7 = (long *)FUN_0284d948((long *)(param_1 + 0x78));
    }
    else {
      plVar7 = plVar7 + 2;
    }
    plVar8 = *(long **)(param_1 + 0x80);
  }
  return;
}


