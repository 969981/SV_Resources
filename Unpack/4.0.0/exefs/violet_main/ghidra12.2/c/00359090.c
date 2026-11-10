/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00359090; name: FUN_00359090
 */


void FUN_00359090(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0038dac0();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003507c0(*(undefined8 *)(param_1 + 0x10));
  FUN_0038db20(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0xe8));
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


