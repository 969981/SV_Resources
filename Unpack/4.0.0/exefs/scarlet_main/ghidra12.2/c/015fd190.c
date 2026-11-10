/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fd190; name: FUN_015fd190
 */


undefined8 FUN_015fd190(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_8 [8];
  
  FUN_015fd28c(auStack_8);
  if ((((PTR_DAT_047ddbe0[0x31] == '\0') && (iVar1 = FUN_012dca9c(PTR_DAT_047ddbe0), iVar1 < 0)) ||
      ((PTR_DAT_047ddbe8[0x31] == '\0' && (iVar1 = FUN_012dca9c(PTR_DAT_047ddbe8), iVar1 < 0)))) ||
     ((((PTR_DAT_047ddbf0[0x31] == '\0' && (iVar1 = FUN_012dca9c(PTR_DAT_047ddbf0), iVar1 < 0)) ||
       ((PTR_DAT_047ddbf8[0x31] == '\0' && (iVar1 = FUN_012dca9c(PTR_DAT_047ddbf8), iVar1 < 0)))) ||
      (((PTR_DAT_047ddc00[0x31] == '\0' && (iVar1 = FUN_012dca9c(PTR_DAT_047ddc00), iVar1 < 0)) ||
       ((PTR_DAT_047ddc08[0x31] == '\0' && (iVar1 = FUN_012dca9c(PTR_DAT_047ddc08), iVar1 < 0)))))))
     ) {
    uVar2 = 0x80040200;
  }
  else {
    uVar2 = 0;
  }
  FUN_015fd2a8(auStack_8);
  return uVar2;
}


