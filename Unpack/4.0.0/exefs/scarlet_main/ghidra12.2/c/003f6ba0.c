/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f6ba0; name: FUN_003f6ba0
 */


void FUN_003f6ba0(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (DAT_047f1830 != 0) {
    if (DAT_047f1838 != 0) {
      uVar3 = 0;
      do {
        puVar5 = (undefined8 *)(DAT_047f1830 + uVar3 * 0x18);
        FUN_00452f80(*puVar5,"external/openssl/crypto/conf/conf_ssl.c",0x31);
        plVar6 = puVar5 + 1;
        lVar1 = *plVar6;
        if (puVar5[2] != 0) {
          lVar4 = 0;
          uVar2 = 0;
          do {
            FUN_00452f80(*(undefined8 *)(lVar1 + lVar4),"external/openssl/crypto/conf/conf_ssl.c",
                         0x33);
            FUN_00452f80(*(undefined8 *)(*plVar6 + lVar4 + 8),
                         "external/openssl/crypto/conf/conf_ssl.c",0x34);
            uVar2 = uVar2 + 1;
            lVar4 = lVar4 + 0x10;
            lVar1 = *plVar6;
          } while (uVar2 < (ulong)puVar5[2]);
        }
        FUN_00452f80(lVar1,"external/openssl/crypto/conf/conf_ssl.c",0x36);
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_047f1838);
    }
    FUN_00452f80(DAT_047f1830,"external/openssl/crypto/conf/conf_ssl.c",0x38);
    DAT_047f1830 = 0;
    DAT_047f1838 = 0;
  }
  return;
}


