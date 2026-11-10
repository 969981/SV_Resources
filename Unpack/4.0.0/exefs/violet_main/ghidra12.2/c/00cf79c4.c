/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf79c4; name: FUN_00cf79c4
 */


void FUN_00cf79c4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0 [13];
  long *local_58;
  long *local_38;
  
  lVar17 = *param_3;
  if (lVar17 == 0) {
    return;
  }
  uVar18 = *(undefined8 *)*param_1;
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
  local_c0[0] = plVar8;
  FUN_00c5ecb4(&local_58,uVar18,&local_e0);
  if ((char)local_e0 != '\0') {
    if (local_c0[0] != (long *)0x0) {
      (**(code **)(*local_c0[0] + 0x20))();
    }
    local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
  }
  if (local_58 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)FUN_00cf7d80(param_1[1],lVar17);
  local_e0 = FUN_00cf8024;
  local_d8 = FUN_02e4d8cc;
  local_d0 = &LAB_02e4d8d0;
  local_c8 = &LAB_02e4d8dc;
  plVar9 = *(long **)(lVar17 + 0x50);
  pcVar10 = FUN_02e4d8cc;
  local_c0[0] = plVar8;
  if (plVar9 != (long *)0x0) {
    local_38 = plVar9 + 6;
    piVar11 = (int *)plVar8[5];
    if ((((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 5)) ||
        (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar13 == 0)) ||
       (*(char *)((long)piVar11 + uVar13) == '\0')) {
      uVar16 = 0;
    }
    else {
      if ((plVar8[0x11] != 0) && (uVar13 = plVar8[7], uVar13 != 0)) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar12 = plVar9[2];
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar15 = uVar13 - 1 & uVar12;
        }
        else if (uVar12 < uVar13) {
          uVar15 = uVar12;
        }
        else {
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = uVar12 / uVar13;
          }
          uVar15 = uVar12 - uVar15 * uVar13;
        }
        plVar19 = *(long **)(plVar8[6] + uVar15 * 8);
        if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
          if (uVar14 < 2) {
            do {
              if (plVar19[1] == uVar12) {
                if (plVar19[2] == uVar12) goto LAB_00cf7d30;
              }
              else if ((plVar19[1] & uVar13 - 1) != uVar15) goto LAB_00cf7ad4;
              plVar19 = (long *)*plVar19;
              uVar16 = 1;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              uVar14 = plVar19[1];
              if (uVar14 == uVar12) {
                if (plVar19[2] == uVar12) goto LAB_00cf7d30;
              }
              else {
                if (uVar13 <= uVar14) {
                  uVar7 = 0;
                  if (uVar13 != 0) {
                    uVar7 = uVar14 / uVar13;
                  }
                  uVar14 = uVar14 - uVar7 * uVar13;
                }
                if (uVar14 != uVar15) goto LAB_00cf7ad4;
              }
              plVar19 = (long *)*plVar19;
              uVar16 = 1;
            } while (plVar19 != (long *)0x0);
          }
          goto LAB_00cf7ad8;
        }
      }
LAB_00cf7ad4:
      uVar16 = 1;
    }
    goto LAB_00cf7ad8;
  }
LAB_00cf7b3c:
  local_d0 = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  (*pcVar10)(local_c0);
LAB_00cf7b4c:
  local_e0 = FUN_00cf7ec4;
  local_d8 = FUN_02e4d8e8;
  local_d0 = &LAB_02e4d8ec;
  local_c8 = &LAB_02e4d8f8;
  plVar9 = *(long **)(lVar17 + 0xb8);
  pcVar10 = FUN_02e4d8e8;
  local_c0[0] = plVar8;
  if (plVar9 != (long *)0x0) {
    local_38 = plVar9 + 6;
    FUN_00cf7ec4(local_c0,plVar9 + 2,&local_38);
    while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
      local_38 = plVar9 + 6;
      (*local_e0)(local_c0,plVar9 + 2,&local_38);
    }
    pcVar10 = local_d8;
    if (local_d8 == (code *)0x0) goto LAB_00cf7b98;
  }
  local_d0 = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  (*pcVar10)(local_c0);
LAB_00cf7b98:
  if (local_58 != (long *)0x0) {
    plVar8 = local_58 + 5;
    do {
      lVar17 = *plVar8;
      iVar6 = (int)lVar17 + -1;
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
    else if ((int)lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00cf7d30:
  uVar16 = (uint)(plVar19[7] != uVar12);
LAB_00cf7ad8:
  plVar19 = (long *)*plVar9;
  *(uint *)(plVar9 + 6) = uVar16;
  *(undefined8 *)((long)plVar9 + 0x34) = 0;
  if (plVar19 == (long *)0x0) {
    pcVar10 = FUN_02e4d8cc;
    goto LAB_00cf7b3c;
  }
  local_38 = plVar19 + 6;
  FUN_00cf8024(local_c0,plVar19 + 2,&local_38);
  while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
    local_38 = plVar19 + 6;
    (*local_e0)(local_c0,plVar19 + 2,&local_38);
  }
  pcVar10 = local_d8;
  if (local_d8 != (code *)0x0) goto LAB_00cf7b3c;
  goto LAB_00cf7b4c;
}


