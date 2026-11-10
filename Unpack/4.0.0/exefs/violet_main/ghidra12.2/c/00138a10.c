/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00138a10; name: FUN_00138a10
 */


void FUN_00138a10(long param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x20) == 0x120) {
    uVar1 = FUN_00138a70(param_1,param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0x120;
  return;
}


