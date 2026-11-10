/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013af00; name: FUN_0013af00
 */


void FUN_0013af00(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0012d7b0(param_1,0x40,0);
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = lVar1;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  return;
}


