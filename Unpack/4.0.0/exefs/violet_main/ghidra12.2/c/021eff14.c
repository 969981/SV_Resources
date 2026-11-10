/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021eff14; name: FUN_021eff14
 */


void FUN_021eff14(long param_1,undefined8 *param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  sVar1 = FUN_00cf44ec(param_2[1]);
  if (sVar1 != 0x84) {
    param_2 = param_2 + 1;
  }
  uVar5 = *param_2;
  uVar3 = FUN_00cf44ec(uVar5);
  uVar4 = FUN_00cf41a0(uVar5);
  uVar2 = FUN_021ec81c(uVar3,uVar4);
  *(undefined2 *)(param_1 + 0x2a) = uVar2;
  return;
}


