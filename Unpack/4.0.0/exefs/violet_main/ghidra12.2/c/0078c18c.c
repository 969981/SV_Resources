/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078c18c; name: FUN_0078c18c
 */


void FUN_0078c18c(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint local_40 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 auStack_20 [16];
  
  uVar3 = FUN_0078a324();
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0078b1ec(param_1), (uVar3 & 1) == 0)) {
    FUN_007c70a8(auStack_20);
    uVar3 = FUN_0078a34c(param_1);
    if ((uVar3 & 1) == 0) {
      local_40[0] = 0;
      FUN_0078a244(&local_30,param_1,local_40);
      local_40[0] = local_40[0] & 0xffffff00;
      uVar2 = FUN_007c7184(auStack_20);
      local_40[0] = local_40[0] | uVar2 & 0xff;
      FUN_0284e360(param_1);
      return;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_0078a390(local_40,param_1,&local_30);
    bVar1 = FUN_007c7184(auStack_20);
    local_28 = CONCAT71(local_28._1_7_,(byte)local_28 & bVar1);
    bVar1 = FUN_007c7184(auStack_20);
    local_28._0_2_ = CONCAT11(local_28._1_1_ & bVar1,(byte)local_28);
    bVar1 = FUN_007c7184(auStack_20);
    local_28._0_3_ = CONCAT12(local_28._2_1_ & bVar1,(undefined2)local_28);
    bVar1 = FUN_007c7184(auStack_20);
    local_28._0_4_ = CONCAT13(local_28._3_1_ & bVar1,(undefined3)local_28);
    bVar1 = FUN_007c7184(auStack_20);
    local_28._0_5_ = CONCAT14(local_28._4_1_ & bVar1,(undefined4)local_28);
    bVar1 = FUN_007c7184(auStack_20);
    local_28._0_6_ = CONCAT15(local_28._5_1_ & bVar1,(undefined5)local_28);
    bVar1 = FUN_007c7184(auStack_20);
    local_28._0_7_ = CONCAT16(local_28._6_1_ & bVar1,(undefined6)local_28);
    bVar1 = FUN_007c7184(auStack_20);
    local_28 = CONCAT17(local_28._7_1_ & bVar1,(undefined7)local_28);
    FUN_0078a208(param_1,local_30,local_28);
  }
  return;
}


