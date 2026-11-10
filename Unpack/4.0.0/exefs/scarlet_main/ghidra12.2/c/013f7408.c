/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f7408; name: FUN_013f7408
 */


void FUN_013f7408(long param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e8fa88();
  uVar1 = FUN_013f755c(param_1,uVar1,param_3);
  switch(param_2) {
  case 0:
    FUN_00ef0e3c(*(undefined8 *)(param_1 + 0x70));
    FUN_00f13cb8(param_1,1);
    return;
  case 1:
    FUN_00ef1188(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f1415c(param_1);
    FUN_00f15484(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 2:
    FUN_00ef14d4(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f142b0(param_1);
    FUN_00f157b8(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 3:
    FUN_00ef1820(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f14560(param_1);
    FUN_00f15e20(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 4:
    FUN_00ef1b6c(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f146b8(param_1);
    FUN_00f16154(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  case 5:
    FUN_00ef1eb8(*(undefined8 *)(param_1 + 0x70),uVar1);
    uVar1 = FUN_00f14408(param_1);
    FUN_00f15aec(*(undefined8 *)(param_1 + 0x70),uVar1);
    return;
  default:
    return;
  }
}


