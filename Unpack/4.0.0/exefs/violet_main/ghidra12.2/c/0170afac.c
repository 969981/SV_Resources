/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170afac; name: FUN_0170afac
 */


void FUN_0170afac(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),0);
  uVar2 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),1);
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0;
  uVar1 = uVar1 & 0xff;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x33c) = 0;
  if (uVar1 == (uVar2 & 0xff)) {
    *(undefined4 *)(param_1 + 0x31c) = 0x215;
    *(undefined2 *)(param_1 + 800) = 0x1100;
    *(uint *)(param_1 + 0x324) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x31c) = 0x216;
    *(uint *)(param_1 + 0x324) = uVar1;
    *(uint *)(param_1 + 0x328) = uVar2 & 0xff;
    *(undefined2 *)(param_1 + 800) = 0x2100;
  }
  return;
}


