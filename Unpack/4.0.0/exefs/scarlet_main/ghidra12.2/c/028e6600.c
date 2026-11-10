/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e6600; name: FUN_028e6600
 */


void FUN_028e6600(long param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  long *local_70 [3];
  long *local_58;
  undefined1 auStack_40 [8];
  long *local_38;
  long local_18;
  
  uVar9 = *(ulong *)(param_1 + 0x1a8);
  if (uVar9 != 0) {
    uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar13 = uVar9 - 1 & uVar7;
    }
    else {
      uVar13 = uVar7;
      if (uVar9 <= uVar7) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar7 / uVar9;
        }
        uVar13 = uVar7 - uVar13 * uVar9;
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x1a0) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar7) {
            if (plVar14[2] == uVar7) {
              return;
            }
          }
          else if ((plVar14[1] & uVar9 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar7) {
            if (plVar14[2] == uVar7) {
              return;
            }
          }
          else {
            if (uVar9 <= uVar11) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar11 / uVar9;
              }
              uVar11 = uVar11 - uVar4 * uVar9;
            }
            if (uVar11 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x210);
  lVar10 = *(long *)(param_1 + 0x208);
  plVar14 = (long *)FUN_00c8f0cc((long *)(param_1 + 0x1a0),param_2);
  *plVar14 = lVar8 - lVar10 >> 6;
  pcVar15 = (char *)param_2[1];
  if (*pcVar15 == '\0') {
    plVar14 = (long *)FUN_00d44228();
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar6;
    FUN_00cf9884(local_70,uVar6,pcVar15);
    plVar14 = local_70[0];
  }
  plVar12 = (long *)PTR_DAT_047d8b70;
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 6;
  }
  local_90 = *plVar12;
  plVar12 = (long *)PTR_PTR_047d4508;
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 7;
  }
  lStack_88 = *plVar12;
  if (plVar14 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = plVar14[8];
  }
  local_78 = (long *)0x0;
  plVar12 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plVar12 = plVar14;
  }
  local_78 = plVar12;
  local_18 = FUN_028e6938(*(undefined8 *)(param_1 + 8));
  if (local_18 != 0) {
    piVar1 = (int *)(local_18 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_028e6a60(local_70,&local_90,&local_18);
  FUN_028e6b44(param_1 + 0x208,local_70);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_028e6b98(auStack_40);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_028e6b98(&local_18);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return;
}


