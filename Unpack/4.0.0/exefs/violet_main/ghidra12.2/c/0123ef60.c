/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123ef60; name: FUN_0123ef60
 */


void FUN_0123ef60(void *param_1,void *param_2)

{
  undefined1 auStack_c0 [96];
  undefined1 auStack_60 [48];
  
  FUN_01246154(auStack_60);
  memcpy(auStack_c0,param_1,0x8c);
  memcpy(param_1,param_2,0x8c);
  memcpy(param_2,auStack_c0,0x8c);
  return;
}


