/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01580a6c; name: FUN_01580a6c
 */


undefined1  [16]
FUN_01580a6c(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  ulong local_38;
  
  FUN_0189372c(&local_40);
  param_2 = param_2 & 0xffff;
  local_38 = 0;
  local_40 = param_3;
  if (2 < param_2 - 3) {
    if (param_2 == 2) {
      uVar1 = (**(code **)(*param_5 + 0x68))(param_5,PTR_DAT_047e25c8);
      uVar2 = (**(code **)(*param_5 + 0x68))(param_5,PTR_DAT_047e25d0);
      local_38 = local_38 & 0xfffffffffffffff8 | 2;
      uVar3 = FUN_0189405c(param_4,uVar1,uVar2);
      uVar4 = local_38 & 0xfffffffffffffe07 | (ulong)((uVar3 & 0x3f) << 3);
      goto LAB_01580ab8;
    }
    if (param_2 != 1) {
      uVar4 = 0;
      goto LAB_01580ab8;
    }
  }
  uVar4 = 1;
LAB_01580ab8:
  auVar5._4_4_ = uStack_3c;
  auVar5._0_4_ = local_40;
  auVar5._8_8_ = uVar4;
  return auVar5;
}


