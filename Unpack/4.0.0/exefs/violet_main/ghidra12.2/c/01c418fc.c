/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c418fc; name: FUN_01c418fc
 */


void FUN_01c418fc(undefined8 param_1,void *param_2,void *param_3)

{
  undefined1 auStack_310 [368];
  undefined1 auStack_1a0 [368];
  
  memcpy(auStack_1a0,param_2,0x16c);
  memcpy(auStack_310,param_3,0x16c);
  FUN_01c4195c(param_1,auStack_1a0,auStack_310);
  return;
}


