/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bf7fdc; name: FUN_01bf7fdc
 */


void FUN_01bf7fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_LAB_047d59f8;
  if (DAT_04810750 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01bf8984(auStack_30,param_2,puVar1,0);
  FUN_01bf8a00(param_1,auStack_30);
  FUN_01bf8a58(auStack_30);
  return;
}


