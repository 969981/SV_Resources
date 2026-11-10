/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ddfe0; name: FUN_031ddfe0
 */


ulong FUN_031ddfe0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  lVar2 = FUN_031de4d0(param_1,&local_38);
  if (lVar2 == 0) {
    uVar6 = 0xffffffff00000000;
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (ulong)*(uint *)(lVar2 + 4);
    uVar6 = (lVar2 - param_1[2]) * 0x20000000;
  }
  uVar4 = uVar4 | uVar6;
  if ((int)uVar4 < 0) {
    local_48 = 0;
    local_40 = 0x8000000000000000;
    FUN_031de118(param_2,&local_48,0);
    local_58 = 0;
    uStack_50 = 0x8000000000000000;
    uVar4 = FUN_031de394(param_1,&local_38,&local_58);
    lVar2 = *param_1;
    plVar1 = (long *)(lVar2 + (long)(int)uVar4 * 0x18 + 8);
    if (&local_48 == plVar1) {
      uVar3 = local_40._4_4_;
    }
    else {
      FUN_031de9ac(plVar1);
      FUN_031de9ac(&local_48);
      lVar5 = *plVar1;
      *plVar1 = local_48;
      lVar2 = lVar2 + (long)(int)uVar4 * 0x18;
      *(undefined4 *)(lVar2 + 0x10) = (undefined4)local_40;
      uVar3 = *(uint *)(lVar2 + 0x14);
      *(uint *)(lVar2 + 0x14) = local_40._4_4_;
      local_40 = (ulong)uVar3 << 0x20;
      local_48 = lVar5;
    }
    local_40 = local_40 & 0xffffffff00000000;
    if ((-1 < (int)uVar3) && (local_48 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_48,(ulong)uVar3 << 4);
    }
  }
  return uVar4;
}


