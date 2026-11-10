/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d810b4; name: FUN_00d810b4
 */


void FUN_00d810b4(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long *plVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 local_68 [2];
  
  plVar11 = *(long **)(param_1 + 0x1e0);
  local_68[0] = param_8;
  if (plVar11 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 8);
    plVar11 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x78,8);
    if (plVar11 == (long *)0x0) {
      plVar6 = (long *)0x0;
      uVar15 = 0;
      uVar9 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar6;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *plVar11 = 0;
      *(undefined1 *)(plVar11 + 1) = 0;
      *(undefined4 *)(plVar11 + 4) = 1;
      *(undefined8 *)((long)plVar11 + 0x24) = 0;
      *(undefined8 *)((long)plVar11 + 0x2c) = 0;
      uVar9 = 8;
      uVar15 = 0x78;
      plVar11[0xb] = 0;
      plVar11[0xd] = 0;
      *(undefined4 *)(plVar11 + 0xe) = 0;
      plVar11[3] = 0x100000001;
      *(undefined8 *)((long)plVar11 + 0x31) = 0;
      plVar11[9] = 0x100000001;
      plVar11[10] = 1;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar8 = *(long *)(param_1 + 0x1e0);
    *(long **)(param_1 + 0x1e0) = plVar11;
    if (lVar8 == 0) {
      *(long **)(param_1 + 0x1e8) = plVar6;
      *(undefined8 *)(param_1 + 0x1f0) = uVar15;
    }
    else {
      FUN_00eeae00(param_1 + 0x1e8);
      *(long **)(param_1 + 0x1e8) = plVar6;
      *(undefined8 *)(param_1 + 0x1f0) = uVar15;
      plVar11 = *(long **)(param_1 + 0x1e0);
    }
    bVar13 = 0;
    *(undefined8 *)(param_1 + 0x1f8) = uVar9;
  }
  else {
    bVar13 = 1;
  }
  bVar3 = *(int *)((long)plVar11 + 0x74) != 2;
  if (bVar3) {
    *(undefined4 *)((long)plVar11 + 0x74) = 2;
  }
  plVar6 = (long *)*plVar11;
  param_2 = (long *)*param_2;
  bVar12 = bVar3;
  if (plVar6 != param_2) {
    if (param_2 != (long *)0x0) {
      plVar6 = param_2 + 5;
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar12) {
          *(int *)plVar6 = (int)lVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar6 = (long *)*plVar11;
    }
    *plVar11 = (long)param_2;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        iVar5 = (int)*plVar1;
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *(int *)plVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    bVar12 = true;
  }
  cVar2 = (char)plVar11[1];
  bVar14 = bVar12;
  if ((cVar2 == '\0') || ((char)*param_3 == '\0')) {
    if ((char)*param_3 == '\0' && cVar2 == '\0') goto LAB_00d81154;
  }
  else if (plVar11[2] == param_3[1]) goto LAB_00d81154;
  lVar8 = param_3[1];
  plVar11[1] = *param_3;
  plVar11[2] = lVar8;
  bVar14 = true;
LAB_00d81154:
  if ((((((int)plVar11[3] != (int)*param_4) ||
        (*(int *)((long)plVar11 + 0x1c) != *(int *)((long)param_4 + 4))) ||
       ((int)plVar11[4] != (int)param_4[1])) ||
      ((*(int *)((long)plVar11 + 0x24) != *(int *)((long)param_4 + 0xc) ||
       ((int)plVar11[5] != (int)param_4[2])))) ||
     (bVar10 = bVar14, *(int *)((long)plVar11 + 0x2c) != *(int *)((long)param_4 + 0x14))) {
    lVar8 = *param_4;
    bVar10 = true;
    lVar7 = param_4[2];
    plVar11[4] = param_4[1];
    plVar11[5] = lVar7;
    plVar11[3] = lVar8;
  }
  bVar4 = FUN_00d814d0(bVar10,plVar11 + 6,param_5,plVar11 + 7,param_6,plVar11 + 9,param_7,
                       plVar11 + 0xe,local_68);
  if ((bVar13 & ((bVar3 | bVar12 | bVar14 | bVar10 | bVar4) ^ 1)) == 0) {
    lVar8 = *(long *)(param_1 + 0x208);
    lVar7 = *(long *)(param_1 + 0x210);
    if (((lVar8 != lVar7) && (*(undefined1 *)(lVar8 + 0x10) = 1, lVar8 + 0x18 != lVar7)) &&
       (*(undefined1 *)(lVar8 + 0x28) = 1, lVar8 + 0x30 != lVar7)) {
      *(undefined1 *)(lVar8 + 0x40) = 1;
      for (lVar8 = lVar8 + 0x48; lVar8 != lVar7; lVar8 = lVar8 + 0x18) {
        *(undefined1 *)(lVar8 + 0x10) = 1;
      }
    }
  }
  return;
}


