/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8daf4; name: FUN_01c8daf4
 */


void FUN_01c8daf4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char local_350 [8];
  undefined1 auStack_348 [792];
  undefined4 local_14;
  
  puVar1 = PTR_FUN_047d6498;
  if (DAT_04816c80 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_14 = param_3;
  FUN_01c8e454(local_350,param_2,puVar1,0,&local_14);
  FUN_01c8e490(param_1,local_350);
  if (local_350[0] != '\0') {
    FUN_01c8e52c(auStack_348);
  }
  return;
}


