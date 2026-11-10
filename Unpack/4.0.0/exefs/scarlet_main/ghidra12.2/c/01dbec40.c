/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbec40; name: FUN_01dbec40
 */


void FUN_01dbec40(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined1 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60 [3];
  long *local_48;
  long *local_40;
  long *local_38;
  undefined1 *local_30;
  undefined1 auStack_28 [8];
  
  local_30 = &DAT_cbf29ce484222645;
  cVar5 = FUN_00cec028(*param_1);
  if (cVar5 == '\x01') {
    uVar9 = 0x9cac2aed84ee;
  }
  else if (cVar5 == '\x02') {
    uVar9 = 0xa0ac2aed8bba;
  }
  else {
    uVar9 = 0x9fac2aed8a07;
  }
  local_30 = (undefined1 *)(uVar9 | 0x395000000000000);
  FUN_00ea425c(&local_38);
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar11;
  local_78 = &DAT_ce02c237861a2a94;
  pcStack_70 = "strinput";
  local_68 = 8;
  FUN_00d8fb98(local_60,&local_78);
  FUN_00f1203c(&local_40,uVar11,local_60,&local_30,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_014c0fb4(local_38,0,*param_1);
  local_80 = local_40;
  if (local_40 != (long *)0x0) {
    plVar7 = local_40 + 5;
    do {
      lVar10 = *plVar7;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_01dbf0d0;
  }
  FUN_01dbf208(local_60,local_38,&local_80);
  if (local_80 != (long *)0x0) {
    plVar7 = local_80 + 5;
    do {
      lVar10 = *plVar7;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01dbefd4;
  }
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,0x40);
  plVar7 = (long *)FUN_0152bfac(auStack_28,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),&local_78)
  ;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_01dbf0d0;
  }
  FUN_0105453c(*param_1,plVar7);
  cVar5 = FUN_0168d1c0();
  if ((byte)(cVar5 - 1U) < 10) {
    uVar8 = *(undefined4 *)(&DAT_03d2fe30 + (long)(char)(cVar5 - 1U) * 4);
  }
  else {
    uVar8 = 0xc;
  }
  local_88 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar1 = local_60[0] + 5;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_01dbf0d0;
  }
  local_90 = (long *)0x0;
  local_98 = plVar7;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) {
LAB_01dbf0d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_014edb40(&local_88,&local_90,&local_98,1,uVar8,1);
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01dbefd4;
  }
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01dbefd4;
  }
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01dbefd4;
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar10 == 0) goto LAB_01dbefd4;
  }
  if (local_60[0] != (long *)0x0) {
    plVar7 = local_60[0] + 5;
    do {
      lVar10 = *plVar7;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01dbefd4;
  }
  if (local_40 != (long *)0x0) {
    plVar7 = local_40 + 5;
    do {
      lVar10 = *plVar7;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_01dbefd4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar4) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


