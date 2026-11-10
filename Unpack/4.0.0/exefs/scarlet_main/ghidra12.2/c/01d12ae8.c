/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d12ae8; name: FUN_01d12ae8
 */


void FUN_01d12ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_250 [560];
  
  puVar1 = PTR_LAB_047d72f0;
  if (DAT_0482cce8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d13234(auStack_250,param_2,puVar1,0);
  FUN_01d13290(param_1,auStack_250);
  FUN_01d06e34(auStack_250);
  return;
}


