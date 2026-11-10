/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02715a2c; name: FUN_02715a2c
 */


void FUN_02715a2c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  
  plVar5 = DAT_04859f50;
  DAT_04859f50 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_04859f58;
  DAT_04859f58 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  pcVar6 = DAT_04859f68;
  if (DAT_04859f68 != (code *)0x0) {
    DAT_04859f70 = 0;
    DAT_04859f78 = 0;
    DAT_04859f60 = 0;
    DAT_04859f68 = (code *)0x0;
    (*pcVar6)(&DAT_04859f80);
  }
  plVar5 = DAT_04859fe0;
  DAT_0485a020 = 0;
  DAT_04859fe0 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_04859fe8;
  DAT_04859fe8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_04859ff0;
  DAT_04859ff0 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_04859ff8;
  DAT_04859ff8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_0485a000;
  DAT_0485a000 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_0485a008;
  DAT_0485a008 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_0485a010;
  DAT_0485a010 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02715d24;
  }
  plVar5 = DAT_0485a018;
  DAT_0485a018 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_02715d24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (((*PTR_DAT_047e0d80 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  *(undefined8 *)PTR_DAT_047e0d90 = *(undefined8 *)PTR_DAT_047e0d88;
  FUN_0270fc0c();
  return;
}


