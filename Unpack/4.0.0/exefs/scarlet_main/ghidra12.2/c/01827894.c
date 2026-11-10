/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01827894; name: FUN_01827894
 */


void FUN_01827894(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char local_48 [8];
  undefined1 auStack_40 [28];
  undefined4 local_24;
  
  uVar1 = DAT_048020c0;
  local_24 = param_1;
  FUN_01827980(local_48,param_2);
  FUN_01827900(uVar1,&local_24,local_48);
  if (local_48[0] != '\0') {
    FUN_00d8e444(auStack_40);
  }
  return;
}


