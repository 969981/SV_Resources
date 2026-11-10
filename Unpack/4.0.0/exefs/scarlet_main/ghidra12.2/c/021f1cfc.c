/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f1cfc; name: FUN_021f1cfc
 */


void FUN_021f1cfc(long param_1,undefined1 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (0x1e < param_3) {
    param_3 = 0x1f;
  }
  switch(param_2) {
  case 0:
    FUN_00ef4ce8(*(undefined8 *)(param_1 + 0x70));
    FUN_00f13cb8(param_1,1);
    return;
  case 1:
    FUN_00ef503c(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f1415c(param_1);
    FUN_00f15484(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 2:
    FUN_00ef5394(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f142b0(param_1);
    FUN_00f157b8(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 3:
    FUN_00ef5a44(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f14560(param_1);
    FUN_00f15e20(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 4:
    FUN_00ef5d9c(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f146b8(param_1);
    FUN_00f16154(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 5:
    FUN_00ef56ec(*(undefined8 *)(param_1 + 0x70),param_3);
    uVar1 = FUN_00f14408(param_1);
    FUN_00f15aec(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  default:
    return;
  }
}


