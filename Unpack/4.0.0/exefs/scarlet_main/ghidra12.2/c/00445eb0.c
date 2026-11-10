/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445eb0; name: FUN_00445eb0
 */


undefined8 FUN_00445eb0(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (DAT_047f192c == '\x01') {
    FUN_004806c0(0xf,0x74,0x46,"external/openssl/crypto/init.c",0x27b);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0047e650(&DAT_047f1950,&LAB_00446370);
    uVar2 = 0;
    if ((iVar1 != 0) && (DAT_047f1954 != 0)) {
      iVar1 = FUN_0047e650(&DAT_047f1958,&LAB_00446400);
      uVar2 = 0;
      if ((iVar1 != 0) && (DAT_047f193c != '\0')) {
        iVar1 = FUN_0047e650(&DAT_047f195c,&LAB_00446410);
        uVar2 = 0;
        if ((iVar1 != 0) && (DAT_047f1940 != '\0')) {
          puVar3 = (undefined4 *)FUN_0049e5d0(&DAT_044a9520);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)FUN_00452ce0(0xc,"external/openssl/crypto/init.c",0x46);
            if (puVar3 == (undefined4 *)0x0) {
              return 0;
            }
            iVar1 = FUN_0049e5f0(&DAT_044a9520,puVar3);
            if (iVar1 == 0) {
              FUN_00452f80(puVar3,"external/openssl/crypto/init.c",0x48);
              return 0;
            }
          }
          if ((param_1 & 1) != 0) {
            *puVar3 = 1;
          }
          if ((param_1 >> 1 & 1) != 0) {
            puVar3[1] = 1;
          }
          uVar2 = 1;
          if ((param_1 >> 2 & 1) != 0) {
            puVar3[2] = 1;
            return 1;
          }
        }
      }
    }
  }
  return uVar2;
}


