/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00493490; name: FUN_00493490
 */


undefined8 FUN_00493490(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s1;
  
  __s1 = *(char **)(param_3 + 8);
  iVar1 = strncmp(__s1,"fullname",9);
  if (iVar1 == 0) {
    lVar3 = FUN_004938c0(param_2,*(undefined8 *)(param_3 + 0x10));
    uVar6 = 0;
    if (lVar3 == 0) goto LAB_0049363c;
    lVar5 = *param_1;
  }
  else {
    iVar1 = strcmp(__s1,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar2 = (undefined8 *)FUN_0048b9d0();
    if (puVar2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar3 = FUN_00491c40(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar3 == 0) {
      FUN_004806c0(0x22,0x9e,0x96,"external/openssl/crypto/x509v3/v3_crld.c",0x56);
      return 0xffffffff;
    }
    iVar1 = FUN_0049be80(puVar2,lVar3,0x1001);
    FUN_00491c90(param_2,lVar3);
    uVar6 = *puVar2;
    *puVar2 = 0;
    FUN_0048b9e0(puVar2);
    if ((iVar1 == 0) || (iVar1 = FUN_0047e430(uVar6), iVar1 < 1)) {
      lVar3 = 0;
      goto LAB_0049363c;
    }
    iVar1 = FUN_0047e430(uVar6);
    lVar3 = FUN_0047e450(uVar6,iVar1 + -1);
    if (*(int *)(lVar3 + 0x10) != 0) {
      FUN_004806c0(0x22,0x9e,0xa1,"external/openssl/crypto/x509v3/v3_crld.c",0x66);
      lVar3 = 0;
      goto LAB_0049363c;
    }
    lVar3 = 0;
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    puVar4 = (undefined4 *)FUN_003e49a0(PTR_DAT_047cd658);
    *param_1 = (long)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      if (lVar3 == 0) {
        *puVar4 = 1;
        *(undefined8 *)(puVar4 + 2) = uVar6;
        return 1;
      }
      *puVar4 = 0;
      *(long *)(puVar4 + 2) = lVar3;
      return 1;
    }
  }
  else {
    FUN_004806c0(0x22,0x9e,0xa0,"external/openssl/crypto/x509v3/v3_crld.c",0x6e);
  }
LAB_0049363c:
  FUN_0047e3b0(lVar3,PTR_FUN_047cca70);
  FUN_0047e3b0(uVar6,PTR_FUN_047cd5a0);
  return 0xffffffff;
}


