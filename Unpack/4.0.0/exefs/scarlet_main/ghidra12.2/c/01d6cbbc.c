/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d6cbbc; name: FUN_01d6cbbc
 */


void FUN_01d6cbbc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  puVar1 = PTR_FUN_047d7cd0;
  if (DAT_048321a8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01d6f194(param_2);
  local_14 = param_3;
  FUN_01d6f238(param_1,puVar1,0,uVar2,&local_14);
  return;
}


