/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d8910; name: FUN_003d8910
 */


undefined8 FUN_003d8910(long param_1,long param_2,ulong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  undefined **ppuVar11;
  byte bVar12;
  
  if ((param_3 & 1) == 0) {
    lVar7 = FUN_00452c30(param_3 & 0xfffffffffffffffe,"external/openssl/ssl/t1_lib.c",0x813);
    if (lVar7 != 0) {
      if (param_3 != 0) {
        uVar10 = 0;
        do {
          piVar1 = (int *)(param_2 + uVar10 * 4);
          iVar2 = *piVar1;
          iVar3 = piVar1[1];
          if (iVar2 == 0x2a0) {
            ppuVar11 = &PTR_s_ecdsa_secp256r1_sha256_044a1810;
            if (iVar3 != 0x198) {
LAB_003d8a28:
              bVar8 = false;
              bVar4 = false;
              goto LAB_003d8a30;
            }
          }
          else {
            bVar8 = false;
            if (iVar2 < 0x2a2) {
              if (iVar2 != 0) {
                bVar4 = false;
                if (iVar2 == 0x2a1) {
                  ppuVar11 = &PTR_s_ecdsa_secp384r1_sha384_044a1838;
                  if (iVar3 == 0x198) goto LAB_003d89f8;
                  bVar4 = false;
                  bVar8 = true;
                }
                goto LAB_003d8a30;
              }
              if (iVar3 == 0x43f) {
                ppuVar11 = &PTR_s_ed25519_044a1888;
              }
              else {
                if (iVar3 != 0x440) goto LAB_003d8a28;
                ppuVar11 = &PTR_s_ed448_044a18b0;
              }
            }
            else if (iVar2 == 0x2a2) {
              ppuVar11 = &PTR_s_ecdsa_secp521r1_sha512_044a1860;
              if (iVar3 == 0x198) goto LAB_003d89f8;
              bVar8 = false;
              bVar4 = true;
LAB_003d8a30:
              if (iVar2 == 0x40) {
                ppuVar11 = (undefined **)&DAT_044a1900;
                if (iVar3 == 0x198) goto LAB_003d89f8;
                bVar9 = true;
              }
              else {
                bVar9 = false;
                if (iVar2 == 0x2a0) {
                  bVar9 = false;
                  ppuVar11 = &PTR_s_rsa_pss_rsae_sha256_044a1928;
                  if (iVar3 == 0x390) goto LAB_003d89f8;
                }
              }
              if (bVar8) {
                ppuVar11 = &PTR_s_rsa_pss_rsae_sha384_044a1950;
                if (iVar3 == 0x390) goto LAB_003d89f8;
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              bVar5 = false;
              if (bVar4) {
                ppuVar11 = &PTR_s_rsa_pss_rsae_sha512_044a1978;
                if (iVar3 == 0x390) goto LAB_003d89f8;
                bVar5 = true;
              }
              if ((iVar2 != 0x2a0) ||
                 (ppuVar11 = &PTR_s_rsa_pss_pss_sha256_044a19a0, iVar3 != 0x390)) {
                bVar4 = false;
                if (bVar8) {
                  ppuVar11 = &PTR_s_rsa_pss_pss_sha384_044a19c8;
                  if (iVar3 == 0x390) goto LAB_003d89f8;
                  bVar4 = true;
                }
                if (bVar5) {
                  ppuVar11 = &PTR_s_rsa_pss_pss_sha512_044a19f0;
                  if (iVar3 == 0x390) goto LAB_003d89f8;
                  bVar8 = true;
                }
                else {
                  bVar8 = false;
                }
                if ((iVar2 != 0x2a0) || (ppuVar11 = &PTR_s_rsa_pkcs1_sha256_044a1a18, iVar3 != 6)) {
                  if (bVar4) {
                    ppuVar11 = &PTR_s_rsa_pkcs1_sha384_044a1a40;
                    if (iVar3 != 6) {
                      bVar6 = 1;
                      if (bVar8) goto LAB_003d8c7c;
LAB_003d8c6c:
                      bVar12 = 0;
                      goto LAB_003d8ac0;
                    }
                  }
                  else {
                    bVar6 = 0;
                    if (!bVar8) goto LAB_003d8c6c;
LAB_003d8c7c:
                    ppuVar11 = &PTR_s_rsa_pkcs1_sha512_044a1a68;
                    if (iVar3 != 6) {
                      bVar8 = false;
                      bVar12 = 1;
                      goto LAB_003d8ac0;
                    }
                  }
                }
              }
            }
            else {
              bVar4 = false;
              if (iVar2 != 0x2a3) goto LAB_003d8a30;
              if (iVar3 == 6) {
                ppuVar11 = &PTR_s_rsa_pkcs1_sha224_044a1a90;
                goto LAB_003d89f8;
              }
              ppuVar11 = (undefined **)&DAT_044a18d8;
              if (iVar3 == 0x198) goto LAB_003d89f8;
              bVar9 = false;
              bVar12 = 0;
              bVar6 = 0;
              bVar8 = true;
LAB_003d8ac0:
              if ((((!bVar9) || (ppuVar11 = &PTR_s_rsa_pkcs1_sha1_044a1ab8, iVar3 != 6)) &&
                  ((iVar2 != 0x2a0 || (ppuVar11 = (undefined **)&DAT_044a1ae0, iVar3 != 0x74)))) &&
                 ((((ppuVar11 = (undefined **)&DAT_044a1b08, !(bool)(bVar6 & iVar3 == 0x74) &&
                    (ppuVar11 = (undefined **)&DAT_044a1b30, !(bool)(bVar12 & iVar3 == 0x74))) &&
                   (ppuVar11 = (undefined **)&DAT_044a1b58, !(bool)(bVar8 & iVar3 == 0x74))) &&
                  (ppuVar11 = (undefined **)&DAT_044a1b80, !(bool)(bVar9 & iVar3 == 0x74))))) {
                if (iVar2 == 0x329) {
                  ppuVar11 = (undefined **)&DAT_044a1bf8;
                  if (iVar3 != 0x32b) goto LAB_003d8cbc;
                }
                else if (iVar2 == 0x3d7) {
                  ppuVar11 = (undefined **)&DAT_044a1bd0;
                  if (iVar3 != 0x3d4) goto LAB_003d8cbc;
                }
                else if ((iVar2 != 0x3d6) ||
                        (ppuVar11 = (undefined **)&DAT_044a1ba8, iVar3 != 0x3d3)) {
LAB_003d8cbc:
                  FUN_00452f80(lVar7,"external/openssl/ssl/t1_lib.c",0x836);
                  return 0;
                }
              }
            }
          }
LAB_003d89f8:
          *(undefined2 *)(lVar7 + uVar10) = *(undefined2 *)(ppuVar11 + 1);
          uVar10 = uVar10 + 2;
        } while (uVar10 < param_3);
      }
      if (param_4 == 0) {
        FUN_00452f80(*(undefined8 *)(param_1 + 0x198),"external/openssl/ssl/t1_lib.c",0x82e);
        *(long *)(param_1 + 0x198) = lVar7;
        *(ulong *)(param_1 + 0x1a0) = param_3 >> 1;
        return 1;
      }
      FUN_00452f80(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/t1_lib.c",0x82a);
      *(long *)(param_1 + 0x1a8) = lVar7;
      *(ulong *)(param_1 + 0x1b0) = param_3 >> 1;
      return 1;
    }
    FUN_004806c0(0x14,0x278,0x41,"external/openssl/ssl/t1_lib.c",0x814);
  }
  return 0;
}


