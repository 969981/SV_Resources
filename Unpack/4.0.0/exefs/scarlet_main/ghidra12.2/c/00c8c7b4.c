/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c8c7b4; name: FUN_00c8c7b4
 */


long FUN_00c8c7b4(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *local_48;
  long local_40;
  long *local_38;
  long local_30;
  ulong uStack_28;
  
  if (*(char *)param_2[1] == '\0') {
    return *(long *)(*(long *)(param_1 + 0x60) + 0x18);
  }
  uVar6 = *(ulong *)(param_1 + 0x688);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar4;
    }
    else if (uVar4 < uVar6) {
      uVar8 = uVar4;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar4 / uVar6;
      }
      uVar8 = uVar4 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x680) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar4) {
            if (plVar9[2] == uVar4) goto LAB_00c8c950;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar4) {
            if (plVar9[2] == uVar4) {
LAB_00c8c950:
              return plVar9[6];
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar2 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  local_48 = (long *)0x0;
  local_40 = 0;
  uVar6 = FUN_00e89b88(param_1,param_2,&local_40,&local_48);
  plVar9 = (long *)PTR_PTR_047d4508;
  if ((uVar6 & 1) == 0) {
    lVar5 = 0;
    goto LAB_00c8c8e8;
  }
  if (local_40 == 0) {
    uVar6 = param_2[1];
    lVar5 = *(long *)(param_1 + 0x60);
    if (*(code **)(param_1 + 0x530) != (code *)0x0) {
      local_30 = param_1;
      uStack_28 = uVar6;
      (**(code **)(param_1 + 0x530))(&local_38,param_1 + 0x550,&uStack_28,&local_30);
      plVar3 = *(long **)(lVar5 + 0x18);
      plVar9 = (long *)PTR_PTR_047d4508;
      if (local_38 != (long *)0x0) {
        plVar9 = local_38 + 7;
      }
      goto LAB_00c8c9c0;
    }
    plVar9 = *(long **)(lVar5 + 0x18);
  }
  else {
    puVar1 = (ulong *)PTR_PTR_047d4508;
    if (local_48 != (long *)0x0) {
      puVar1 = (ulong *)(local_48 + 7);
    }
    uVar6 = *puVar1;
    lVar5 = *(long *)(local_40 + 0xe8);
    if (*(code **)(param_1 + 0x530) != (code *)0x0) {
      local_30 = param_1;
      uStack_28 = uVar6;
      (**(code **)(param_1 + 0x530))(&local_38,param_1 + 0x550,&uStack_28,&local_30);
      plVar3 = *(long **)(lVar5 + 0x18);
      if (local_38 != (long *)0x0) {
        plVar9 = local_38 + 7;
      }
LAB_00c8c9c0:
      lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar9,1);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      goto LAB_00c8c8e8;
    }
    plVar9 = *(long **)(lVar5 + 0x18);
  }
  lVar5 = (**(code **)(*plVar9 + 0x78))(plVar9,uVar6,1);
LAB_00c8c8e8:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return lVar5;
}


