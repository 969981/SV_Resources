/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc7e4; name: FUN_018dc7e4
 */


void FUN_018dc7e4(long param_1,long param_2)

{
  void *__dest;
  float fVar1;
  undefined1 auStack_190 [336];
  
  FUN_017e1410(auStack_190);
  __dest = (void *)(param_1 + 0x2e0);
  memcpy(__dest,auStack_190,0x150);
  FUN_017e1484(__dest,(void *)(param_1 + 0x40));
  fVar1 = *(float *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(float *)(param_1 + 0x430) = fVar1;
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x94);
  if (fVar1 <= 1.1920929e-07) {
    memcpy((void *)(param_1 + 0x40),__dest,0x150);
  }
  return;
}


