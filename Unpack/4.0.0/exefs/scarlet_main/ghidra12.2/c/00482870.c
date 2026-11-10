/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00482870; name: FUN_00482870
 */


undefined8 FUN_00482870(long param_1,char *param_2,undefined4 param_3)

{
  size_t __n;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char *__s2;
  char *pcVar11;
  char *pcVar10;
  
  if ((param_2 == (char *)0x0) || (cVar9 = *param_2, cVar9 == '\0')) {
    uVar7 = 0x71;
    uVar8 = 0xa0;
LAB_00482a0c:
    FUN_004806c0(0xb,100,uVar7,"external/openssl/crypto/x509/by_dir.c",uVar8);
    return 0;
  }
  __s2 = param_2;
  pcVar10 = param_2;
  if (cVar9 == ';') goto LAB_004828d0;
LAB_004828c4:
  __s2 = param_2;
  if (cVar9 == '\0') goto LAB_004828d0;
  pcVar11 = pcVar10;
LAB_004829d4:
  do {
    pcVar10 = pcVar11 + 1;
    if (*pcVar11 == '\0') {
      return 1;
    }
    cVar9 = *pcVar10;
    __s2 = param_2;
    if (cVar9 != ';') goto LAB_004828c4;
LAB_004828d0:
    param_2 = pcVar10 + 1;
    __n = (long)pcVar10 - (long)__s2;
    pcVar11 = pcVar10;
    if (__n != 0) {
      iVar1 = FUN_0047e430(*(undefined8 *)(param_1 + 8));
      if (iVar1 < 1) {
        iVar1 = FUN_0047e430(*(undefined8 *)(param_1 + 8));
        if (0 < iVar1) goto LAB_004829d4;
      }
      else {
        iVar1 = 0;
        do {
          puVar3 = (undefined8 *)FUN_0047e450(*(undefined8 *)(param_1 + 8),iVar1);
          pcVar10 = (char *)*puVar3;
          sVar4 = strlen(pcVar10);
          if ((sVar4 == __n) && (iVar2 = strncmp(pcVar10,__s2,__n), iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 8));
        } while (iVar1 < iVar2);
        iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 8));
        if (iVar1 < iVar2) goto LAB_004829d4;
      }
      if (*(long *)(param_1 + 8) == 0) {
        lVar5 = FUN_0047dcc0();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) {
          uVar7 = 0x41;
          uVar8 = 0xb9;
          goto LAB_00482a0c;
        }
      }
      plVar6 = (long *)FUN_00452c30(0x18,"external/openssl/crypto/x509/by_dir.c",0xbd);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0x41;
        uVar8 = 0xbf;
        goto LAB_00482a0c;
      }
      *(undefined4 *)(plVar6 + 1) = param_3;
      lVar5 = FUN_0047de20(&LAB_00482b00);
      plVar6[2] = lVar5;
      lVar5 = FUN_0045ac20(__s2,__n,"external/openssl/crypto/x509/by_dir.c",0xc4);
      *plVar6 = lVar5;
      if ((lVar5 == 0) || (plVar6[2] == 0)) {
        FUN_00452f80(lVar5,"external/openssl/crypto/x509/by_dir.c",0x8a);
        FUN_0047e3b0(plVar6[2],&LAB_00482860);
        FUN_00452f80(plVar6,"external/openssl/crypto/x509/by_dir.c",0x8c);
        return 0;
      }
      iVar1 = FUN_0047e2f0(*(undefined8 *)(param_1 + 8),plVar6);
      if (iVar1 == 0) {
        FUN_00452f80(*plVar6,"external/openssl/crypto/x509/by_dir.c",0x8a);
        FUN_0047e3b0(plVar6[2],&LAB_00482860);
        FUN_00452f80(plVar6,"external/openssl/crypto/x509/by_dir.c",0x8c);
        uVar7 = 0x41;
        uVar8 = 0xcb;
        goto LAB_00482a0c;
      }
    }
  } while( true );
}


