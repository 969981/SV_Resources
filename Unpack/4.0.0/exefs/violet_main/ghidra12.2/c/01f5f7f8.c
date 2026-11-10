/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f5f7f8; name: FUN_01f5f7f8
 */


void FUN_01f5f7f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    FUN_01f5fed0(param_1 + 0x98);
  }
  FUN_01f6050c(param_1 + 0x70);
  FUN_01f6063c(0);
  FUN_01f6063c(1);
  FUN_01f6063c(2);
  FUN_01f6063c(3);
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  return;
}


