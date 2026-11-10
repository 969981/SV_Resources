/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d9fa4; name: FUN_025d9fa4
 */


void FUN_025d9fa4(undefined8 param_1,undefined4 param_2,byte param_3)

{
  undefined *puVar1;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar1 = PTR_LAB_047dffd0;
  if (DAT_048537e8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18[0] = param_3 & 1;
  local_14 = param_2;
  FUN_025dbcd8(param_1,puVar1,0,&local_14,local_18);
  return;
}


