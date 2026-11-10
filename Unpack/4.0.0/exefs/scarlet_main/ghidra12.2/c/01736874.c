/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01736874; name: FUN_01736874
 */


undefined1  [16] FUN_01736874(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_28;
  
  if (param_3 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_3 + 8);
    lVar1 = *(long *)(*param_1 + 0x30);
    local_58 = *(undefined8 *)(lVar1 + 8);
    uStack_50 = *(undefined8 *)(lVar1 + 0x6098);
    local_48 = lVar1 + 0x10;
    auVar4 = FUN_00ec13d4(*(undefined8 *)(lVar1 + 0x6140),&local_58,&local_28,1,
                          *(undefined8 *)(param_3 + 0x10));
    unaff_x20 = auVar4._8_8_;
    uVar3 = auVar4._0_8_ & 0xff;
    uVar2 = auVar4._0_8_ & 0xffffffffffffff00;
    if (uVar3 != 0 && unaff_x20 != 0) {
      FUN_00f1d9f4(*(long *)(*(long *)(*param_1 + 0x30) + 0x6140) + 0x110,param_2,
                   *(undefined4 *)(unaff_x20 + 0x88));
    }
  }
  auVar4._0_8_ = uVar2 | uVar3;
  auVar4._8_8_ = unaff_x20;
  return auVar4;
}


