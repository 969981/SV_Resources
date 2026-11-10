/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9b4fc; name: FUN_00d9b4fc
 */


void FUN_00d9b4fc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0;
  long **pplStack_b8;
  undefined8 *local_b0;
  long *local_58;
  long *local_38;
  
  lVar16 = *param_3;
  if (lVar16 == 0) {
    return;
  }
  uVar17 = *(undefined8 *)*param_1;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  plVar8 = (long *)param_2[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
  local_d8 = (code *)uVar1;
  local_d0 = (undefined1 *)uVar3;
  local_c8 = (undefined1 *)uVar2;
  local_c0 = plVar8;
  FUN_00c5ecb4(&local_58,uVar17,&local_e0);
  if ((char)local_e0 != '\0') {
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
  }
  if (local_58 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)FUN_00cf7d80(param_1[1],lVar16);
  local_b0 = (undefined8 *)param_1[2];
  pplStack_b8 = &local_58;
  local_e0 = FUN_00c74294;
  local_d8 = FUN_02e4db10;
  local_d0 = &LAB_02e4db14;
  local_c8 = &LAB_02e4db28;
  plVar18 = *(long **)(lVar16 + 0x50);
  pcVar9 = FUN_02e4db10;
  local_c0 = plVar8;
  if (plVar18 != (long *)0x0) {
    local_38 = plVar18 + 6;
    piVar10 = (int *)plVar8[5];
    if ((((piVar10 == (int *)0x0) || (*(ushort *)((long)piVar10 - (long)*piVar10) < 5)) ||
        (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar12 == 0)) ||
       (*(char *)((long)piVar10 + uVar12) == '\0')) goto LAB_00d9b854;
    if ((plVar8[0x11] != 0) && (uVar12 = plVar8[7], uVar12 != 0)) {
      uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar11 = plVar18[2];
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar12 - 1 & uVar11;
      }
      else if (uVar11 < uVar12) {
        uVar14 = uVar11;
      }
      else {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar11 / uVar12;
        }
        uVar14 = uVar11 - uVar14 * uVar12;
      }
      plVar15 = *(long **)(plVar8[6] + uVar14 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar15[1] == uVar11) {
              if (plVar15[2] == uVar11) goto LAB_00d9b848;
            }
            else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar15[1];
            if (uVar13 == uVar11) {
              if (plVar15[2] == uVar11) goto LAB_00d9b848;
            }
            else {
              if (uVar12 <= uVar13) {
                uVar7 = 0;
                if (uVar12 != 0) {
                  uVar7 = uVar13 / uVar12;
                }
                uVar13 = uVar13 - uVar7 * uVar12;
              }
              if (uVar13 != uVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_00d9b614;
  }
LAB_00d9b650:
  local_d0 = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  (*pcVar9)(&local_c0);
LAB_00d9b664:
  local_b0 = (undefined8 *)param_1[3];
  pplStack_b8 = &local_58;
  local_e0 = FUN_00d9b8b4;
  local_d8 = FUN_02e4db3c;
  local_d0 = &LAB_02e4db40;
  local_c8 = &LAB_02e4db54;
  plVar18 = *(long **)(lVar16 + 0xb8);
  pcVar9 = FUN_02e4db3c;
  local_c0 = plVar8;
  if (plVar18 != (long *)0x0) {
    local_38 = plVar18 + 6;
    FUN_00d9b8b4(&local_c0,plVar18 + 2,&local_38);
    while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
      local_38 = plVar18 + 6;
      (*local_e0)(&local_c0,plVar18 + 2,&local_38);
    }
    pcVar9 = local_d8;
    if (local_d8 == (code *)0x0) goto LAB_00d9b6b8;
  }
  local_d0 = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  (*pcVar9)(&local_c0);
LAB_00d9b6b8:
  if (local_58 != (long *)0x0) {
    plVar8 = local_58 + 5;
    do {
      lVar16 = *plVar8;
      iVar6 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00d9b848:
  if (plVar15[7] == uVar11) {
LAB_00d9b854:
    if (0.0 < *(float *)((long)plVar18 + 0x34)) {
      (*(code *)*local_b0)(&local_58,plVar18 + 2,plVar18 + 7);
    }
  }
LAB_00d9b614:
  plVar18 = (long *)*plVar18;
  if (plVar18 != (long *)0x0) {
    do {
      local_38 = plVar18 + 6;
      (*local_e0)(&local_c0,plVar18 + 2,&local_38);
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  pcVar9 = local_d8;
  if (local_d8 != (code *)0x0) goto LAB_00d9b650;
  goto LAB_00d9b664;
}


