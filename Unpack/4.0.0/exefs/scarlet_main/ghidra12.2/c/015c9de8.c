/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c9de8; name: FUN_015c9de8
 */


void FUN_015c9de8(long param_1)

{
  long lVar1;
  undefined1 auStack_180 [336];
  
  FUN_015c9e58(param_1 + 0x488);
  lVar1 = FUN_015c9f1c(param_1 + 0x488,param_1 + 0x480);
  if (lVar1 != 0) {
    FUN_017e1410(auStack_180,lVar1 + 0x20);
    memcpy((void *)(param_1 + 0x40),auStack_180,0x150);
    *(undefined2 *)(param_1 + 0x2d0) = 0x101;
  }
  return;
}


