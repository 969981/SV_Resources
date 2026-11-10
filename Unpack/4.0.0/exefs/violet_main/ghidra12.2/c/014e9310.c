/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e9310; name: FUN_014e9310
 */


void FUN_014e9310(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  long *local_18;
  
  uVar3 = 6;
  if (*(int *)(param_1 + 0x6c38) != 1) {
    uVar3 = 0x1e;
  }
  if (param_3 < uVar3) {
    lVar2 = param_1 + 0x68b0;
    if (*(int *)(param_1 + 0x6c38) != 1) {
      lVar2 = param_1 + 0x68bc;
    }
    bVar1 = *(byte *)(lVar2 + (ulong)param_3);
    if ((param_4 & 1) == 0) {
      local_18 = *(long **)(param_1 + 0x6cd0);
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 0x58))();
      }
      plVar5 = *(long **)(param_1 + (ulong)bVar1 * 0x98 + 0xb0);
      plVar4 = (long *)PTR_DAT_047d8b70;
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 6;
      }
      local_50 = *plVar4;
      plVar4 = (long *)PTR_PTR_047d4508;
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 7;
      }
      lStack_48 = *plVar4;
      if (plVar5 == (long *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = plVar5[8];
      }
      local_38 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      local_38 = plVar5;
      FUN_01dc5c64(&local_18,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (local_18 == (long *)0x0) {
        return;
      }
      lVar2 = *local_18;
      plVar4 = local_18;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x6cd0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x58))(plVar4);
      }
      plVar6 = *(long **)(param_1 + (ulong)bVar1 * 0x98 + 0xb0);
      plVar5 = (long *)PTR_DAT_047d8b70;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 6;
      }
      local_50 = *plVar5;
      plVar5 = (long *)PTR_PTR_047d4508;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 7;
      }
      lStack_48 = *plVar5;
      if (plVar6 == (long *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = plVar6[8];
      }
      local_38 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      local_38 = plVar6;
      if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00e895f4(plVar4[0x2e],&local_50), lVar2 != 0)) {
        FUN_00dfcea4();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar2 = *plVar4;
    }
    (**(code **)(lVar2 + 0x60))(plVar4);
  }
  return;
}


