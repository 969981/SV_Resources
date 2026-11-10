/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004813f0; name: FUN_004813f0
 */


void FUN_004813f0(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char *__s;
  undefined1 *puVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  puVar3 = (undefined1 *)FUN_00452c30(0x51,"external/openssl/crypto/err/err.c",0x354);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    if (0 < param_1) {
      lVar10 = 0;
      iVar11 = 0x50;
      puVar7 = puVar3;
      do {
        iVar9 = (int)param_2[3];
        if ((iVar9 < 0) && (*(int *)(param_2 + 3) = iVar9 + 8, iVar9 < -7)) {
          puVar6 = (undefined8 *)(param_2[1] + (long)iVar9);
        }
        else {
          puVar6 = (undefined8 *)*param_2;
          *param_2 = (long)(puVar6 + 1);
        }
        __s = "<NULL>";
        if ((char *)*puVar6 != (char *)0x0) {
          __s = (char *)*puVar6;
        }
        sVar4 = strlen(__s);
        lVar10 = sVar4 + (long)(int)lVar10;
        iVar9 = (int)lVar10;
        puVar3 = puVar7;
        if (iVar11 < iVar9) {
          puVar3 = (undefined1 *)
                   FUN_00452db0(puVar7,(long)(iVar9 + 0x15),"external/openssl/crypto/err/err.c",
                                0x362);
          if (puVar3 == (undefined1 *)0x0) {
            uVar5 = 0x364;
            goto LAB_00481568;
          }
          iVar11 = iVar9 + 0x14;
        }
        FUN_0045ade0(puVar3,__s,(long)iVar11 + 1);
        param_1 = param_1 + -1;
        puVar7 = puVar3;
      } while (param_1 != 0);
    }
    lVar10 = FUN_004807b0();
    if (lVar10 == 0) {
      uVar5 = 0x36c;
      puVar7 = puVar3;
LAB_00481568:
      FUN_00452f80(puVar7,"external/openssl/crypto/err/err.c",uVar5);
      return;
    }
    lVar8 = (long)*(int *)(lVar10 + 0x240);
    lVar1 = lVar10 + lVar8 * 4;
    if ((*(uint *)(lVar1 + 0x140) & 1) != 0) {
      lVar2 = lVar10 + lVar8 * 8;
      FUN_00452f80(*(undefined8 *)(lVar2 + 0xc0),"external/openssl/crypto/err/err.c",0x336);
      *(undefined8 *)(lVar2 + 0xc0) = 0;
    }
    *(undefined1 **)(lVar10 + lVar8 * 8 + 0xc0) = puVar3;
    *(undefined4 *)(lVar1 + 0x140) = 3;
  }
  return;
}


