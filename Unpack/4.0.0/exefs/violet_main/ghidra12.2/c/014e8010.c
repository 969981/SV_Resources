/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e8010; name: FUN_014e8010
 */


void FUN_014e8010(long param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  plVar4 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  lVar9 = 0;
  do {
    bVar2 = *(byte *)(param_1 + 0x68bc + lVar9);
    plVar7 = *(long **)(param_1 + 0x6cd0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    plVar8 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
    plVar6 = plVar1;
    plVar3 = plVar4;
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 7;
      plVar3 = plVar8 + 6;
    }
    local_80 = *plVar3;
    lStack_78 = *plVar6;
    if (plVar8 == (long *)0x0) {
      local_70 = 0;
    }
    else {
      local_70 = plVar8[8];
      local_68 = (long *)0x0;
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    local_68 = plVar8;
    if ((plVar7 != (long *)0x0) && (lVar5 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar5 != 0)) {
      FUN_00dfcea4();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x60))(plVar7);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x1e);
  bVar2 = *(byte *)(param_1 + 0x68b0);
  plVar7 = *(long **)(param_1 + 0x6cd0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar8 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
  plVar6 = plVar1;
  plVar3 = plVar4;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 7;
    plVar3 = plVar8 + 6;
  }
  local_80 = *plVar3;
  lStack_78 = *plVar6;
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = plVar8[8];
  }
  local_68 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_68 = plVar8;
  if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar9 != 0)) {
    FUN_00dfcea4();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  bVar2 = *(byte *)(param_1 + 0x68b1);
  plVar7 = *(long **)(param_1 + 0x6cd0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar8 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
  plVar6 = plVar1;
  plVar3 = plVar4;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 7;
    plVar3 = plVar8 + 6;
  }
  local_80 = *plVar3;
  lStack_78 = *plVar6;
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
    local_68 = (long *)0x0;
  }
  else {
    local_70 = plVar8[8];
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_68 = plVar8;
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar9 != 0)) {
    FUN_00dfcea4();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  bVar2 = *(byte *)(param_1 + 0x68b2);
  plVar7 = *(long **)(param_1 + 0x6cd0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar8 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
  plVar6 = plVar1;
  plVar3 = plVar4;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 7;
    plVar3 = plVar8 + 6;
  }
  local_80 = *plVar3;
  lStack_78 = *plVar6;
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
    local_68 = (long *)0x0;
  }
  else {
    local_70 = plVar8[8];
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_68 = plVar8;
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar9 != 0)) {
    FUN_00dfcea4();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  bVar2 = *(byte *)(param_1 + 0x68b3);
  plVar7 = *(long **)(param_1 + 0x6cd0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar8 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
  plVar6 = plVar1;
  plVar3 = plVar4;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 7;
    plVar3 = plVar8 + 6;
  }
  local_80 = *plVar3;
  lStack_78 = *plVar6;
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
    local_68 = (long *)0x0;
  }
  else {
    local_70 = plVar8[8];
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_68 = plVar8;
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar9 != 0)) {
    FUN_00dfcea4();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  bVar2 = *(byte *)(param_1 + 0x68b4);
  plVar7 = *(long **)(param_1 + 0x6cd0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar8 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
  plVar6 = plVar1;
  plVar3 = plVar4;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 7;
    plVar3 = plVar8 + 6;
  }
  local_80 = *plVar3;
  lStack_78 = *plVar6;
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
    local_68 = (long *)0x0;
  }
  else {
    local_70 = plVar8[8];
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_68 = plVar8;
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar9 != 0)) {
    FUN_00dfcea4();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  bVar2 = *(byte *)(param_1 + 0x68b5);
  plVar7 = *(long **)(param_1 + 0x6cd0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar6 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xb8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 7;
    plVar4 = plVar6 + 6;
  }
  local_80 = *plVar4;
  lStack_78 = *plVar1;
  if (plVar6 == (long *)0x0) {
    local_70 = 0;
    local_68 = (long *)0x0;
  }
  else {
    local_70 = plVar6[8];
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_68 = plVar6;
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00e895f4(plVar7[0x2e],&local_80), lVar9 != 0)) {
    FUN_00dfcea4();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  return;
}


