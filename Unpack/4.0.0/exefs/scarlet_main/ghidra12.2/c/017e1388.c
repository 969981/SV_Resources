/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e1388; name: FUN_017e1388
 */


void FUN_017e1388(long param_1)

{
  void *__dest;
  undefined1 auStack_190 [336];
  
  FUN_017e1410(auStack_190);
  __dest = (void *)(param_1 + 0x2e0);
  memcpy(__dest,auStack_190,0x150);
  FUN_017e1484(__dest,(void *)(param_1 + 0x40));
  memcpy((void *)(param_1 + 0x40),__dest,0x150);
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined2 *)(param_1 + 0x2d0) = 0x101;
  FUN_00d8fea0(param_1);
  return;
}


