/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f834a4; name: FUN_00f834a4
 */


void FUN_00f834a4(long *param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  long *plVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *plStack_60;
  long *local_58;
  
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = param_3[2];
  plVar11 = (long *)param_3[3];
  plStack_60 = plVar11;
  if (plVar11 == (long *)0x0) {
    lVar7 = FUN_00f839cc(param_2,&local_78);
  }
  else {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar7 = FUN_00f839cc(param_2,&local_78);
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (lVar7 == -1) {
    pcVar13 = (char *)param_3[1];
    if (*pcVar13 == '\0') {
      plVar11 = (long *)FUN_00d44228();
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar8 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar8;
      FUN_00cf9884(&local_58,uVar8,pcVar13);
      plVar11 = local_58;
    }
    plVar9 = (long *)PTR_PTR_047d4508;
    plVar10 = (long *)PTR_PTR_047d4508;
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 7;
    }
    lVar7 = *plVar10;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    *param_1 = (long)&DAT_cbf29ce484222645;
    param_1[1] = (long)&DAT_03c886bc;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_00ddaef8(param_1 + 6,lVar7,0);
    plVar12 = (long *)param_1[6];
    plVar10 = (long *)PTR_DAT_047d8b70;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 6;
    }
    lVar7 = *plVar10;
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 7;
    }
    lVar15 = *plVar9;
    if (plVar12 == (long *)0x0) {
      lVar16 = 0;
    }
    else {
      lVar16 = plVar12[8];
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar10 = (long *)param_1[3];
    *param_1 = lVar7;
    param_1[1] = lVar15;
    param_1[2] = lVar16;
    param_1[3] = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    param_1[3] = (long)plVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x20);
      goto LAB_00f83774;
    }
  }
  else {
    plVar11 = *(long **)(*(long *)(param_2 + 0x168) + lVar7 * 8);
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar8;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar9 = (long *)PTR_PTR_047d4508;
    plVar12 = (long *)plVar11[8];
    plVar10 = (long *)PTR_PTR_047d4508;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 7;
    }
    pcVar13 = (char *)*plVar10;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (*pcVar13 == '\0') {
      plVar10 = (long *)FUN_00d44228();
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar8 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar8;
      FUN_00cf9884(&local_58,uVar8,pcVar13);
      plVar10 = local_58;
    }
    plVar2 = plVar9;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 7;
    }
    lVar7 = *plVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    lVar15 = plVar11[0x17];
    lVar16 = plVar11[0x18];
    *param_1 = (long)&DAT_cbf29ce484222645;
    param_1[1] = (long)&DAT_03c886bc;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = lVar15;
    param_1[5] = lVar16;
    FUN_00ddaef8(param_1 + 6,lVar7,0);
    plVar14 = (long *)param_1[6];
    plVar2 = (long *)PTR_DAT_047d8b70;
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 6;
    }
    lVar7 = *plVar2;
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 7;
    }
    lVar15 = *plVar9;
    if (plVar14 == (long *)0x0) {
      lVar16 = 0;
    }
    else {
      lVar16 = plVar14[8];
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar9 = (long *)param_1[3];
    *param_1 = lVar7;
    param_1[1] = lVar15;
    param_1[2] = lVar16;
    param_1[3] = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    param_1[3] = (long)plVar14;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    lVar7 = plVar11[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x50);
LAB_00f83774:
                    /* WARNING: Could not recover jumptable at 0x00f83790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar11);
      return;
    }
    if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


