/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ab910; name: FUN_003ab910
 */


undefined * FUN_003ab910(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if ((PTR_s_TLS_AES_128_GCM_SHA256_0449b738 != (undefined *)0x0) &&
     (iVar1 = strcmp(param_1,PTR_s_TLS_AES_128_GCM_SHA256_0449b738), iVar1 == 0)) {
    return &DAT_0449b728;
  }
  if ((PTR_s_TLS_AES_256_GCM_SHA384_0449b788 != (undefined *)0x0) &&
     (iVar1 = strcmp(param_1,PTR_s_TLS_AES_256_GCM_SHA384_0449b788), iVar1 == 0)) {
    return &DAT_0449b778;
  }
  if ((PTR_s_TLS_CHACHA20_POLY1305_SHA256_0449b7d8 != (undefined *)0x0) &&
     (iVar1 = strcmp(param_1,PTR_s_TLS_CHACHA20_POLY1305_SHA256_0449b7d8), iVar1 == 0)) {
    return &DAT_0449b7c8;
  }
  if ((PTR_s_TLS_AES_128_CCM_SHA256_0449b828 != (undefined *)0x0) &&
     (iVar1 = strcmp(param_1,PTR_s_TLS_AES_128_CCM_SHA256_0449b828), iVar1 == 0)) {
    return &DAT_0449b818;
  }
  if ((PTR_s_TLS_AES_128_CCM_8_SHA256_0449b878 != (undefined *)0x0) &&
     (iVar1 = strcmp(param_1,PTR_s_TLS_AES_128_CCM_8_SHA256_0449b878), iVar1 == 0)) {
    return &DAT_0449b868;
  }
  uVar3 = 0xffffffffffffffff;
  puVar2 = &DAT_04498398;
  do {
    if ((*(char **)(puVar2 + 0x10) != (char *)0x0) &&
       (iVar1 = strcmp(param_1,*(char **)(puVar2 + 0x10)), iVar1 == 0)) {
      return puVar2;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x50;
  } while (uVar3 < 0xa2);
  if ((PTR_s_TLS_EMPTY_RENEGOTIATION_INFO_SCS_0449b698 != (undefined *)0x0) &&
     (iVar1 = strcmp(param_1,PTR_s_TLS_EMPTY_RENEGOTIATION_INFO_SCS_0449b698), iVar1 == 0)) {
    return &DAT_0449b688;
  }
  if ((PTR_s_TLS_FALLBACK_SCSV_0449b6e8 == (undefined *)0x0) ||
     (iVar1 = strcmp(param_1,PTR_s_TLS_FALLBACK_SCSV_0449b6e8), iVar1 != 0)) {
    return (undefined *)0x0;
  }
  return &DAT_0449b6d8;
}


