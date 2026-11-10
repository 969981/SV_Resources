/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e6ddc; name: FUN_014e6ddc
 */


void FUN_014e6ddc(long param_1,int param_2,uint param_3,int param_4)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long local_108;
  long lStack_100;
  long local_f8;
  long *local_f0;
  undefined1 auStack_e8 [24];
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  
  if (param_2 == 0) {
    lVar4 = 0x68bc;
  }
  else {
    switch(param_2) {
    case 1:
      lVar4 = 0x68da;
      break;
    default:
      goto switchD_014e6fec_caseD_2;
    case 3:
      lVar4 = 0x68b0;
      break;
    case 4:
      lVar4 = 0x68b6;
      break;
    case 5:
      lVar4 = 0x68f8;
      break;
    case 6:
      lVar4 = 0x68fe;
    }
  }
  FUN_014e5ac0(auStack_e8,param_1 + (ulong)*(byte *)(param_1 + lVar4 + (ulong)param_3) * 0x98 + 0x30
              );
  if (param_4 == 0) {
    plVar6 = *(long **)(param_1 + 0x6cd0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
    }
    plVar8 = (long *)PTR_DAT_047d8b70;
    plVar5 = (long *)PTR_PTR_047d4508;
    plVar7 = (long *)PTR_DAT_047d8b70;
    if (local_d0 != (long *)0x0) {
      plVar7 = local_d0 + 6;
    }
    local_108 = *plVar7;
    plVar7 = (long *)PTR_PTR_047d4508;
    if (local_d0 != (long *)0x0) {
      plVar7 = local_d0 + 7;
    }
    lStack_100 = *plVar7;
    if (local_d0 == (long *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_d0[8];
    }
    local_f0 = (long *)0x0;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x18))(local_d0);
    }
    local_f0 = local_d0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
      lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
      (**(code **)(*plVar6 + 0x60))(plVar6);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))(local_d0);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x60))(plVar6);
    }
    plVar6 = *(long **)(param_1 + 0x6cd0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
    }
    if (local_b0 != (long *)0x0) {
      plVar5 = local_b0 + 7;
      plVar8 = local_b0 + 6;
    }
    local_108 = *plVar8;
    lStack_100 = *plVar5;
    if (local_b0 == (long *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_b0[8];
    }
    local_f0 = (long *)0x0;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))(local_b0);
    }
    local_f0 = local_b0;
    plVar7 = local_b0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
      lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
      (**(code **)(*plVar6 + 0x60))(plVar6);
      if (lVar4 != 0) {
        bVar3 = *(byte *)(lVar4 + 0x58) & 0xfe;
LAB_014e6f64:
        *(byte *)(lVar4 + 0x58) = bVar3;
      }
    }
LAB_014e6f68:
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x60))(plVar6);
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x6cd0);
    if (param_4 == 4) {
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar5 = (long *)PTR_DAT_047d8b70;
      plVar8 = (long *)PTR_PTR_047d4508;
      plVar7 = (long *)PTR_DAT_047d8b70;
      if (local_d0 != (long *)0x0) {
        plVar7 = local_d0 + 6;
      }
      local_108 = *plVar7;
      plVar7 = (long *)PTR_PTR_047d4508;
      if (local_d0 != (long *)0x0) {
        plVar7 = local_d0 + 7;
      }
      lStack_100 = *plVar7;
      if (local_d0 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_d0[8];
      }
      local_f0 = (long *)0x0;
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x18))(local_d0);
      }
      local_f0 = local_d0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
        }
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))(local_d0);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      bVar2 = local_b0 == (long *)0x0;
      if (!bVar2) {
        plVar5 = local_b0 + 6;
      }
      plVar7 = local_b0;
LAB_014e7134:
      if (!bVar2) {
        plVar8 = plVar7 + 7;
      }
      local_108 = *plVar5;
      lStack_100 = *plVar8;
      if (plVar7 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = plVar7[8];
      }
      local_f0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      local_f0 = plVar7;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          bVar3 = *(byte *)(lVar4 + 0x58) | 1;
          goto LAB_014e6f64;
        }
      }
      goto LAB_014e6f68;
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
    }
    plVar5 = (long *)PTR_DAT_047d8b70;
    plVar8 = (long *)PTR_PTR_047d4508;
    plVar7 = (long *)PTR_DAT_047d8b70;
    if (local_b0 != (long *)0x0) {
      plVar7 = local_b0 + 6;
    }
    local_108 = *plVar7;
    plVar7 = (long *)PTR_PTR_047d4508;
    if (local_b0 != (long *)0x0) {
      plVar7 = local_b0 + 7;
    }
    lStack_100 = *plVar7;
    if (local_b0 == (long *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_b0[8];
    }
    local_f0 = (long *)0x0;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))(local_b0);
    }
    local_f0 = local_b0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
      lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
      (**(code **)(*plVar6 + 0x60))(plVar6);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))(local_b0);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x60))(plVar6);
    }
    plVar6 = *(long **)(param_1 + 0x6cd0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
    }
    plVar7 = plVar8;
    plVar1 = plVar5;
    if (local_d0 != (long *)0x0) {
      plVar7 = local_d0 + 7;
      plVar1 = local_d0 + 6;
    }
    local_108 = *plVar1;
    lStack_100 = *plVar7;
    if (local_d0 == (long *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_d0[8];
    }
    local_f0 = (long *)0x0;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x18))(local_d0);
    }
    local_f0 = local_d0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
      lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
      (**(code **)(*plVar6 + 0x60))(plVar6);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      }
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))(local_d0);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x60))(plVar6);
    }
    if (param_4 == 3) {
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar7 = plVar8;
      plVar1 = plVar5;
      if (local_c8 != (long *)0x0) {
        plVar7 = local_c8 + 7;
        plVar1 = local_c8 + 6;
      }
      local_108 = *plVar1;
      lStack_100 = *plVar7;
      if (local_c8 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_c8[8];
      }
      local_f0 = (long *)0x0;
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_f0 = local_c8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
        }
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))(local_c8);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar7 = plVar8;
      plVar1 = plVar5;
      if (local_c0 != (long *)0x0) {
        plVar7 = local_c0 + 7;
        plVar1 = local_c0 + 6;
      }
      local_108 = *plVar1;
      lStack_100 = *plVar7;
      if (local_c0 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_c0[8];
      }
      local_f0 = (long *)0x0;
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      local_f0 = local_c0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
        }
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))(local_c0);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      local_c8 = local_b8;
LAB_014e77b4:
      bVar2 = local_c8 == (long *)0x0;
      if (!bVar2) {
        plVar5 = local_c8 + 6;
      }
      plVar7 = local_c8;
      goto LAB_014e7134;
    }
    if (param_4 == 2) {
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar7 = plVar8;
      plVar1 = plVar5;
      if (local_c8 != (long *)0x0) {
        plVar7 = local_c8 + 7;
        plVar1 = local_c8 + 6;
      }
      local_108 = *plVar1;
      lStack_100 = *plVar7;
      if (local_c8 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_c8[8];
      }
      local_f0 = (long *)0x0;
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_f0 = local_c8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
        }
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))(local_c8);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar7 = plVar8;
      plVar1 = plVar5;
      if (local_b8 != (long *)0x0) {
        plVar7 = local_b8 + 7;
        plVar1 = local_b8 + 6;
      }
      local_108 = *plVar1;
      lStack_100 = *plVar7;
      if (local_b8 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_b8[8];
      }
      local_f0 = (long *)0x0;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))(local_b8);
      }
      local_f0 = local_b8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
        }
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))(local_b8);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      local_c8 = local_c0;
      goto LAB_014e77b4;
    }
    if (param_4 == 1) {
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar7 = plVar8;
      plVar1 = plVar5;
      if (local_c0 != (long *)0x0) {
        plVar7 = local_c0 + 7;
        plVar1 = local_c0 + 6;
      }
      local_108 = *plVar1;
      lStack_100 = *plVar7;
      if (local_c0 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_c0[8];
      }
      local_f0 = (long *)0x0;
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      local_f0 = local_c0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
        }
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))(local_c0);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      plVar7 = plVar8;
      plVar1 = plVar5;
      if (local_b8 != (long *)0x0) {
        plVar7 = local_b8 + 7;
        plVar1 = local_b8 + 6;
      }
      local_108 = *plVar1;
      lStack_100 = *plVar7;
      if (local_b8 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_b8[8];
      }
      local_f0 = (long *)0x0;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))(local_b8);
      }
      local_f0 = local_b8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
        lVar4 = FUN_00c8c7b4(plVar6[0x2e],&local_108);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
        }
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))(local_b8);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x60))(plVar6);
      }
      plVar6 = *(long **)(param_1 + 0x6cd0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
      goto LAB_014e77b4;
    }
  }
  FUN_014e58d8(auStack_e8);
switchD_014e6fec_caseD_2:
  return;
}


