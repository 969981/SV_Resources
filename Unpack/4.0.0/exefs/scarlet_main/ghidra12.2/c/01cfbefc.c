/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfbefc; name: FUN_01cfbefc
 */


void FUN_01cfbefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  undefined8 local_18;
  
  puVar1 = PTR_LAB_047d7090;
  if (DAT_0482cc80 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18 = param_3;
  uVar2 = FUN_01b610a0(param_4);
  FUN_01d00a6c(auStack_40,param_2,puVar1,0,&local_18,uVar2);
  FUN_01cfc740(param_1,auStack_40);
  FUN_01cfc798(auStack_40);
  return;
}


