/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2cb98; name: FUN_01e2cb98
 */


void FUN_01e2cb98(long *param_1,undefined8 param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_38;
  
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar7;
  FUN_00cf9884(&local_38,uVar7,"global");
  plVar5 = local_38;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  puVar8 = (undefined8 *)FUN_012f9cf0();
  puVar8 = (undefined8 *)FUN_012f9cf8(*puVar8);
  uVar7 = *puVar8;
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 6;
  }
  local_70 = *plVar11;
  plVar11 = (long *)PTR_PTR_047d4508;
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 7;
  }
  lStack_68 = *plVar11;
  if (plVar5 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = plVar5[8];
  }
  local_58 = (long *)0x0;
  plVar11 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar11 = plVar5;
  }
  lVar9 = tpidr_el0;
  local_58 = plVar11;
  if (*(long *)(lVar9 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar9 + 0x30) = DAT_04859430;
  }
  FUN_01100fc0(&local_38,uVar7,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar9 = *param_1;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
LAB_01e2ccb8:
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar10 == 0) {
LAB_01e2cea8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar10 = *(short *)(lVar9 + 0x1a);
LAB_01e2ce14:
  sVar2 = *psVar1;
  if (sVar2 == sVar10) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01e2ce38;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01e2ce38:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x01e2ce40;
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + -0x28);
    uVar7 = FUN_010fff68(plVar11,*(undefined8 *)(lVar9 + -0x20),&local_38);
    FUN_010ff8f0(uVar7,param_2);
    FUN_00c705b8(uVar7,1);
    if ((param_3 & 1) != 0) {
      FUN_01101dbc(uVar7,1,0);
    }
    lVar9 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar10 == 0) goto LAB_01e2cea8;
  }
  goto LAB_01e2ccb8;
code_r0x01e2ce40:
  sVar10 = sVar2;
  if (sVar2 == 0) goto LAB_01e2ccb8;
  goto LAB_01e2ce14;
}


