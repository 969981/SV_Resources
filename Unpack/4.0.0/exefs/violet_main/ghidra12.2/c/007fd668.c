/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd668; name: FUN_007fd668
 */


void FUN_007fd668(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 local_88 [4];
  undefined4 local_78;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_78 = 0x10407;
LAB_007fd6b8:
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_78 | 4),(Result *)local_88);
  }
  else {
    if ((*(int *)(param_2 + 0x13b0) == 1) ||
       (uVar2 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0x13a0)), (uVar2 & 1) != 0)) {
      local_78 = 0x10408;
      goto LAB_007fd6b8;
    }
    FUN_007ff808(*(undefined8 *)(param_2 + 0x10));
    local_78 = (uint)local_78._2_2_ << 0x10;
    FUN_0284e338(auStack_70);
    local_38 = 1;
    local_40 = local_40 & 0xffffff00;
    local_50 = 0;
    local_48 = 0;
    local_3c = 0;
    *(undefined2 *)(param_2 + 0x38) = (undefined2)local_78;
    FUN_0284e39c(param_2 + 0x40,auStack_70);
    *(undefined2 *)(param_2 + 0x78) = local_38;
    *(undefined8 *)(param_2 + 0x68) = local_48;
    *(ulong *)(param_2 + 0x70) = CONCAT44(local_3c,local_40);
    *(undefined8 *)(param_2 + 0x60) = local_50;
    FUN_0284e3d4(auStack_70);
    *(undefined8 *)(param_2 + 0x770) = 0;
    iVar1 = FUN_0078cdcc(*(undefined8 *)(param_2 + 0x13a0));
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_2 + 0x13a0) + 0x10))(*(long **)(param_2 + 0x13a0),1);
    }
    (**(code **)(**(long **)(param_2 + 0x13a0) + 0x48))
              (&local_78,*(long **)(param_2 + 0x13a0),param_3);
    if (local_78 == 0) {
      FUN_0078cd58(*(undefined8 *)(param_2 + 0x13a0),0);
      local_88[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_28);
      puVar3 = local_88;
      goto LAB_007fd6d4;
    }
  }
  puVar3 = &local_78;
LAB_007fd6d4:
  FUN_00cbd7c0(param_1,puVar3);
  return;
}


