/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e895f4; name: FUN_00e895f4
 */


long FUN_00e895f4(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *extraout_x10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  long *local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  long *local_58;
  long *local_38;
  
  local_70 = *param_2;
  uStack_68 = param_2[1];
  local_60 = param_2[2];
  plVar11 = (long *)param_2[3];
  local_58 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar12 = plVar11;
  if (*(code **)(param_1 + 0x5b0) != (code *)0x0) {
    local_98 = param_1;
    (**(code **)(param_1 + 0x5b0))(&local_38,param_1 + 0x5d0,param_2,&local_98);
    plVar12 = local_38;
    puVar2 = (ulong *)PTR_DAT_047d8b70;
    if (local_38 != (long *)0x0) {
      puVar2 = (ulong *)(local_38 + 6);
    }
    uVar7 = *puVar2;
    puVar2 = (ulong *)PTR_PTR_047d4508;
    if (local_38 != (long *)0x0) {
      puVar2 = (ulong *)(local_38 + 7);
    }
    uVar9 = *puVar2;
    if (local_38 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = local_38[8];
      (**(code **)(*local_38 + 0x18))(local_38);
    }
    local_58 = (long *)0x0;
    local_70 = uVar7;
    uStack_68 = uVar9;
    local_60 = uVar5;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    local_58 = plVar12;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x6f0);
  if (uVar7 != 0) {
    uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar8 = uVar7 - 1 & uVar5;
    }
    else if (uVar5 < uVar7) {
      uVar8 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar5 / uVar7;
      }
      uVar8 = uVar5 - uVar8 * uVar7;
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x6e8) + uVar8 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_00e897f8;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar8) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_00e897f8;
          }
          else {
            if (uVar7 <= uVar9) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar3 * uVar7;
            }
            if (uVar9 != uVar8) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  local_38 = (long *)0x0;
  local_78 = (long *)0x0;
  uVar7 = FUN_00e89b88(param_1,&local_70,&local_38,&local_78);
  plVar11 = local_78;
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if ((uVar7 & 1) == 0) goto LAB_00e89b04;
  if (local_38 == (long *)0x0) {
    puVar1 = (ulong *)PTR_DAT_047d8b70;
    if (local_78 != (long *)0x0) {
      puVar1 = (ulong *)(local_78 + 6);
    }
    uVar7 = *puVar1;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))(local_78);
    }
    uVar9 = *(ulong *)(param_1 + 600);
    if (uVar9 != 0) {
      uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar8 = uVar9 - 1 & uVar7;
      }
      else if (uVar7 < uVar9) {
        uVar8 = uVar7;
      }
      else {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x250) + uVar8 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar5 < 2) {
          do {
            if (plVar10[1] == uVar7) {
              if (plVar10[2] == uVar7) goto LAB_00e89a24;
            }
            else if ((plVar10[1] & uVar9 - 1) != uVar8) goto LAB_00e899b0;
            plVar10 = (long *)*plVar10;
            plVar14 = (long *)0x0;
          } while (plVar10 != (long *)0x0);
          goto LAB_00e89a28;
        }
        do {
          uVar5 = plVar10[1];
          if (uVar5 == uVar7) {
            if (plVar10[2] == uVar7) goto LAB_00e89a24;
          }
          else {
            if (uVar9 <= uVar5) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar5 / uVar9;
              }
              uVar5 = uVar5 - uVar3 * uVar9;
            }
            if (uVar5 != uVar8) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
LAB_00e899b0:
    plVar14 = (long *)0x0;
    goto LAB_00e89a28;
  }
  lVar4 = FUN_00d36bcc(local_38,0x14);
  plVar10 = local_78;
  uVar13 = *(undefined8 *)(lVar4 + 8);
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (local_78 != (long *)0x0) {
    plVar11 = local_78 + 6;
  }
  local_98 = *plVar11;
  plVar11 = (long *)PTR_PTR_047d4508;
  if (local_78 != (long *)0x0) {
    plVar11 = local_78 + 7;
  }
  lStack_90 = *plVar11;
  if (local_78 == (long *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = local_78[8];
  }
  local_80 = (long *)0x0;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  local_80 = plVar10;
  lVar4 = FUN_00e89fec(uVar13,&local_98);
  if (local_80 != (long *)0x0) {
    lVar6 = *local_80;
    plVar11 = local_80;
    goto LAB_00e89838;
  }
LAB_00e89788:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
LAB_00e897fc:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return lVar4;
LAB_00e897f8:
  lVar4 = plVar11[6];
  goto LAB_00e897fc;
LAB_00e89a24:
  plVar14 = plVar10;
LAB_00e89a28:
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = local_78;
  if (plVar14 == (long *)0x0) {
LAB_00e89b04:
    lVar4 = 0;
  }
  else {
    if (local_78 != (long *)0x0) {
      puVar2 = (ulong *)(local_78 + 6);
    }
    uVar7 = *puVar2;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))(local_78);
    }
    uVar9 = *(ulong *)(param_1 + 600);
    if (uVar9 != 0) {
      uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar8 = uVar9 - 1 & uVar7;
      }
      else if (uVar7 < uVar9) {
        uVar8 = uVar7;
      }
      else {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x250) + uVar8 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar5 < 2) {
          do {
            if (plVar10[1] == uVar7) {
              if (plVar10[2] == uVar7) goto LAB_00e89b64;
            }
            else if ((plVar10[1] & uVar9 - 1) != uVar8) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar10[1];
            if (uVar5 == uVar7) {
              if (plVar10[2] == uVar7) goto LAB_00e89b64;
            }
            else {
              if (uVar9 <= uVar5) {
                uVar3 = 0;
                if (uVar9 != 0) {
                  uVar3 = uVar5 / uVar9;
                }
                uVar5 = uVar5 - uVar3 * uVar9;
              }
              if (uVar5 != uVar8) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    FUN_0216c050();
    plVar10 = extraout_x10;
LAB_00e89b64:
    lVar4 = plVar10[6];
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
LAB_00e89838:
      (**(code **)(lVar6 + 0x20))(plVar11);
    }
  }
  goto LAB_00e89788;
}


