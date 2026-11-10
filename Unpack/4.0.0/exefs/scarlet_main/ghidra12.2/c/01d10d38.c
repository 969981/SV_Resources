/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d10d38; name: FUN_01d10d38
 */


void FUN_01d10d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_78 [88];
  
  puVar1 = PTR_LAB_047d72d8;
  if (DAT_0482ccd8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d11484(auStack_78,param_2,puVar1,0);
  FUN_01d114d0(param_1,auStack_78);
  FUN_01d04fb4(auStack_78);
  return;
}


