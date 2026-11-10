/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2afa8; name: FUN_01e2afa8
 */


void FUN_01e2afa8(long param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0x365) {
    uVar3 = FUN_0152f880(*(undefined8 *)(param_1 + 0x70));
    uVar2 = FUN_021f1610(uVar3,param_2);
    FUN_00eec030(*(undefined8 *)(param_1 + 0x70),uVar2);
    return;
  }
  return;
}


