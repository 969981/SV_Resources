/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fea5b8; name: FUN_01fea5b8
 */


undefined8 FUN_01fea5b8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_01fea5f8(param_1,*param_2);
  if ((*(long *)(lVar1 + 0xd8) == 0) || (*(short *)(*(long *)(lVar1 + 0xd8) + 0x1a) == 0)) {
    FUN_01473a8c(lVar1 + 0xc0);
  }
  return 0;
}


