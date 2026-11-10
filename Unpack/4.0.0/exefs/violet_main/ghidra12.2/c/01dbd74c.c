/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbd74c; name: FUN_01dbd74c
 */


bool FUN_01dbd74c(long param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = FUN_00cf5bec();
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    FUN_021f44e8(*(undefined8 *)(param_1 + 0x70),1);
    FUN_021f4834(*(undefined8 *)(param_1 + 0x70),param_2 + 6);
    FUN_021f4c98(*(undefined8 *)(param_1 + 0x70),*(undefined1 *)(param_2 + 4));
    FUN_021f4fe4(*(undefined8 *)(param_1 + 0x70),*(undefined1 *)(param_2 + 5));
    FUN_00e6ae80(*(undefined8 *)(param_1 + 0x70),0);
    FUN_00e6b1cc(*(undefined8 *)(param_1 + 0x70),0);
    FUN_00e6b518(*(undefined8 *)(param_1 + 0x70),0);
    FUN_00e6b864(*(undefined8 *)(param_1 + 0x70),0);
    uVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar2 = FUN_00f783e0(uVar2,uVar3);
    FUN_021f5330(*(undefined8 *)(param_1 + 0x70),uVar2);
  }
  else {
    FUN_021f44e8(*(undefined8 *)(param_1 + 0x70),0);
  }
  FUN_01edcb20(param_1);
  return !bVar1;
}


