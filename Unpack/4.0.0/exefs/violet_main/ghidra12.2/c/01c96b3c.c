/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c96b3c; name: FUN_01c96b3c
 */


void FUN_01c96b3c(undefined1 *param_1)

{
  undefined1 auStack_100 [112];
  undefined1 auStack_90 [112];
  
  FUN_01c8794c();
  FUN_01c98658(auStack_100);
  *param_1 = 1;
  memcpy(auStack_90,auStack_100,0x70);
  FUN_01c8ff3c(param_1 + 8,auStack_90);
  return;
}


