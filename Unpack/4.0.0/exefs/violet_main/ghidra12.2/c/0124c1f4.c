/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124c1f4; name: FUN_0124c1f4
 */


void FUN_0124c1f4(long param_1,undefined1 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  *(undefined1 *)(lVar1 + 0x19) = param_2;
  *(uint *)(lVar1 + 8) = param_3 & 0xff;
  *(uint *)(lVar1 + 0xc) = param_4 & 0xff;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x14) = param_5;
  return;
}


