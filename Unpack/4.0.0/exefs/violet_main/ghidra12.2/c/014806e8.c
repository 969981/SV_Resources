/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014806e8; name: FUN_014806e8
 */


void FUN_014806e8(long param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_011e2fb0(param_2);
    return;
  }
  uVar2 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x290),
                       *(undefined4 *)(param_1 + 0x110));
  sVar1 = *(short *)(param_1 + 0x114);
  if ((uVar2 & 0xff) == 10 || sVar1 == 0) {
    return;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x98))();
  FUN_01480790(param_2,uVar3,sVar1,uVar2);
  return;
}


