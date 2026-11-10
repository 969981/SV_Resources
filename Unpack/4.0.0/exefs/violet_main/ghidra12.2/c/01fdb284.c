/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fdb284; name: FUN_01fdb284
 */


undefined8 FUN_01fdb284(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_01fdb2c4(param_1,*param_2);
  if ((*(long *)(lVar1 + 0x88) == 0) || (*(short *)(*(long *)(lVar1 + 0x88) + 0x1a) == 0)) {
    FUN_013f7d04(lVar1 + 0x70);
  }
  return 0;
}


