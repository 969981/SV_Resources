/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edcb20; name: FUN_01edcb20
 */


void FUN_01edcb20(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = FUN_021f567c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar5 & 1) == 0) {
    uVar1 = FUN_0153bd80();
  }
  else if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar2 = FUN_00cf44f4();
    uVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar4 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_00f13da0(uVar2,uVar3,uVar4);
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_00e9987c();
  }
  FUN_019b7a68(*(undefined8 *)(param_1 + 0x70),uVar1);
  return;
}


