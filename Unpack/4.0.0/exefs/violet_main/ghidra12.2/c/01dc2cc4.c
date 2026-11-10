/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc2cc4; name: FUN_01dc2cc4
 */


undefined8 FUN_01dc2cc4(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long *local_e0;
  long *local_d8 [14];
  long *local_68;
  long *local_60;
  long *local_28;
  
  if (param_2 == 2) {
    lVar6 = 0x68f8;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return 0;
      }
      lVar6 = param_1 + 0x68bc;
      uVar7 = 0x1e;
      goto LAB_01dc2d18;
    }
    lVar6 = 0x68b0;
  }
  lVar6 = param_1 + lVar6;
  uVar7 = 6;
LAB_01dc2d18:
  if (param_4 < uVar7) {
    FUN_014e5ac0(local_d8,param_1 + (ulong)*(byte *)(lVar6 + (ulong)param_4) * 0x98 + 0x30);
    local_28 = *(long **)(param_1 + 0x6cd0);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x58))();
    }
    plVar4 = (long *)PTR_DAT_047d8b70;
    plVar2 = (long *)PTR_PTR_047d4508;
    plVar8 = (long *)PTR_DAT_047d8b70;
    if (local_60 != (long *)0x0) {
      plVar8 = local_60 + 6;
    }
    local_f8 = *plVar8;
    plVar8 = (long *)PTR_PTR_047d4508;
    if (local_60 != (long *)0x0) {
      plVar8 = local_60 + 7;
    }
    lStack_f0 = *plVar8;
    if (local_60 == (long *)0x0) {
      local_e8 = 0;
    }
    else {
      local_e8 = local_60[8];
    }
    local_e0 = (long *)0x0;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
    local_e0 = local_60;
    uVar5 = FUN_01992df4(&local_28,&local_f8);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x60))();
    }
    if ((uVar5 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x6cd0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
      }
      plVar1 = plVar2;
      plVar3 = plVar4;
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 7;
        plVar3 = local_68 + 6;
      }
      local_f8 = *plVar3;
      lStack_f0 = *plVar1;
      if (local_68 == (long *)0x0) {
        local_e8 = 0;
      }
      else {
        local_e8 = local_68[8];
      }
      local_e0 = (long *)0x0;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
      local_e0 = local_68;
      if ((plVar8 != (long *)0x0) && (lVar6 = FUN_00e895f4(plVar8[0x2e],&local_f8), lVar6 != 0)) {
        FUN_00dfcea4();
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x60))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x6cd0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
      }
      if (local_d8[0] != (long *)0x0) {
        plVar2 = local_d8[0] + 7;
        plVar4 = local_d8[0] + 6;
      }
      local_f8 = *plVar4;
      lStack_f0 = *plVar2;
      if (local_d8[0] == (long *)0x0) {
        local_e8 = 0;
      }
      else {
        local_e8 = local_d8[0][8];
      }
      local_e0 = (long *)0x0;
      if (local_d8[0] != (long *)0x0) {
        (**(code **)(*local_d8[0] + 0x18))(local_d8[0]);
      }
      local_e0 = local_d8[0];
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
        lVar6 = FUN_00c8c7b4(plVar8[0x2e],&local_f8);
        (**(code **)(*plVar8 + 0x60))(plVar8);
        if (lVar6 != 0) {
          *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
        }
      }
      if (local_d8[0] != (long *)0x0) {
        (**(code **)(*local_d8[0] + 0x20))(local_d8[0]);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x60))(plVar8);
      }
      FUN_014e58d8(local_d8);
      return 1;
    }
    FUN_014e58d8(local_d8);
  }
  return 0;
}


