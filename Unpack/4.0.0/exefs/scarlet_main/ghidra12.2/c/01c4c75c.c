/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c4c75c; name: FUN_01c4c75c
 */


void FUN_01c4c75c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  puVar1 = PTR_LAB_047d60e0;
  if (DAT_04815c10 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = param_2;
  uVar2 = FUN_01c48984(param_3);
  FUN_01c4dd58(param_1,puVar1,0,&local_24,uVar2);
  return;
}


