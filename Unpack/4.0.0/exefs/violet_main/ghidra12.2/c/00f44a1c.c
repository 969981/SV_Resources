/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f44a1c; name: FUN_00f44a1c
 */


void FUN_00f44a1c(long *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  int local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  plVar4 = *(long **)(*param_1 + 0xa8);
  lVar9 = *(long *)(*param_1 + 0xb0);
  plVar2 = plVar4;
  if (lVar9 != 0) {
    plVar2 = plVar4 + lVar9;
  }
  if (plVar2 != plVar4) {
    if ((long *)*plVar4 != (long *)0x0) {
      (**(code **)(*(long *)*plVar4 + 8))();
    }
    if (plVar4 + 1 != plVar2) {
      plVar8 = (long *)plVar4[1];
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      for (plVar4 = plVar4 + 2; plVar4 != plVar2; plVar4 = plVar4 + 1) {
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 8))();
        }
      }
    }
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar9 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar9;
  if (lVar9 != 0) {
    if (((*PTR_DAT_047da9b8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da9b8);
    }
    lVar9 = *(long *)PTR_DAT_047da9c0;
    *(long *)PTR_DAT_047da9c8 = lVar9;
    if (lVar9 != 0) {
      FUN_00f44cf0();
    }
  }
  plVar4 = DAT_0485e990;
  if (DAT_0485e990 != (long *)0x0) {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) == 0) {
      nn::os::LockMutex((MutexType *)&DAT_0485e970);
      bVar10 = false;
      goto LAB_00f44c20;
    }
    DAT_0485e990 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar9 = plVar4[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar4 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  bVar10 = true;
LAB_00f44c20:
  puVar6 = PTR_DAT_047d0900;
  if (*(long *)PTR_DAT_047d0900 != 0) {
    FUN_00f45260(*(long *)PTR_DAT_047d0900,0);
  }
  if (((DAT_0485e9d8 == (long *)0x0) ||
      ((**(code **)(*DAT_0485e9d8 + 0x28))(local_48), local_48[0] == 0)) &&
     ((*(long *)puVar6 == 0 || (FUN_00cbd7b4(local_48), local_48[0] == 0)))) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(local_48,local_38);
  }
  if (!bVar10) {
    nn::os::UnlockMutex((MutexType *)&DAT_0485e970);
  }
  return;
}


