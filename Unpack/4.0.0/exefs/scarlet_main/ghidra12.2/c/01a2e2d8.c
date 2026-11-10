/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2e2d8; name: FUN_01a2e2d8
 */


void FUN_01a2e2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *__src;
  undefined1 auStack_740 [1800];
  undefined8 local_38;
  
  puVar1 = PTR_LAB_047d5908;
  if (DAT_04810518 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_38 = FUN_017f7db0(param_2);
  __src = (void *)FUN_0184f9a0(param_3);
  memcpy(auStack_740,__src,0x708);
  FUN_01a2e35c(param_1,puVar1,0,&local_38,auStack_740);
  return;
}


