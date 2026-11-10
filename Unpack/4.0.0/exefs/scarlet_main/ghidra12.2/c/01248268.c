/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248268; name: FUN_01248268
 */


undefined1 FUN_01248268(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 local_14;
  
  local_14 = param_2;
  lVar2 = FUN_01248518(param_1 + 0x60,&local_14);
  if (lVar2 == 0) {
    uVar1 = 10;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x14);
  }
  return uVar1;
}


