/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188864c; name: FUN_0188864c
 */


undefined4 FUN_0188864c(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_18;
  
  if ((*param_2 == '\0') || (*param_2 == '\x01')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_FUN_047d73f8;
  if (DAT_0482d178 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_018886ac(param_1,puVar1,0,&local_18);
  return uVar2;
}


