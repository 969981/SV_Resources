/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184f7c4; name: FUN_0184f7c4
 */


void FUN_0184f7c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *__src;
  undefined1 auStack_738 [1800];
  
  uVar1 = 0x50;
  if (DAT_0481b808 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  __src = (void *)FUN_0184f9a0(param_2);
  memcpy(auStack_738,__src,0x708);
  FUN_0184f82c(param_1,uVar1,auStack_738);
  return;
}


