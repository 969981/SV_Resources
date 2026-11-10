/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c916c; name: FUN_034c916c
 */


void FUN_034c916c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048b0310 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048b0318 = 9;
  DAT_048b0320 = 900;
  DAT_048b0328 = 0;
  DAT_048b0330 = PTR_LAB_047e72d0;
  memset(&DAT_048b0338,0,0x48);
  DAT_048b0380 = &DAT_048b0310;
  DAT_048b0388 = 7;
  DAT_048b0390 = 0xae;
  DAT_048b0398 = PTR_LAB_047e72d8;
  DAT_048b03a0 = PTR_LAB_047e72e0;
  memset(&DAT_048b03a8,0,0x48);
  DAT_048b03f0 = &DAT_048b0380;
  DAT_048b03f8 = 7;
  DAT_048b0400 = 0xb5;
  DAT_048b0408 = &LAB_034c8ce0;
  DAT_048b0410 = PTR_LAB_047e72e8;
  memset(&DAT_048b0418,0,0x48);
  *(undefined8 ***)puVar1 = &DAT_048b03f0;
  return;
}


