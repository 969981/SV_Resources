/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013ca00; name: FUN_0013ca00
 */


void FUN_0013ca00(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00129fd0(param_1,5,0x38);
  *(undefined2 *)(lVar1 + 10) = 0x3f;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined **)(lVar1 + 0x18) = &DAT_03cb6498;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}


