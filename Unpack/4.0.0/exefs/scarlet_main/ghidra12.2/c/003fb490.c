/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fb490; name: FUN_003fb490
 */


undefined2 * FUN_003fb490(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  
  iVar1 = FUN_003eb2b0();
  iVar1 = (iVar1 * 3) / 10 + (iVar1 * 3) / 1000;
  uVar2 = (iVar1 + 2) / 9 + 1;
  piVar3 = (int *)FUN_00452c30(-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2,
                               "external/openssl/crypto/bn/bn_print.c",0x48);
  lVar6 = (long)(iVar1 + 5);
  puVar4 = (undefined2 *)FUN_00452c30(lVar6,"external/openssl/crypto/bn/bn_print.c",0x49);
  if (piVar3 == (int *)0x0 || puVar4 == (undefined2 *)0x0) {
    FUN_004806c0(3,0x68,0x41,"external/openssl/crypto/bn/bn_print.c",0x4b);
  }
  else {
    lVar5 = FUN_003eb7a0(param_1);
    if (lVar5 != 0) {
      iVar1 = FUN_003eb480();
      if (iVar1 != 0) {
        *puVar4 = 0x30;
LAB_003fb598:
        FUN_00452f80(piVar3,"external/openssl/crypto/bn/bn_print.c",0x76);
        FUN_003eb520(lVar5);
        return puVar4;
      }
      iVar1 = FUN_003ec670(lVar5);
      puVar8 = puVar4;
      if (iVar1 != 0) {
        puVar8 = (undefined2 *)((long)puVar4 + 1);
        *(undefined1 *)puVar4 = 0x2d;
      }
      iVar1 = FUN_003eb480(lVar5);
      piVar9 = piVar3;
      if (iVar1 == 0) {
        do {
          if ((long)(int)uVar2 <= (long)piVar9 - (long)piVar3 >> 2) goto LAB_003fb6d8;
          iVar1 = FUN_003f2cf0(lVar5,1000000000);
          *piVar9 = iVar1;
          if (iVar1 == -1) goto LAB_003fb6d8;
          piVar9 = piVar9 + 1;
          iVar1 = FUN_003eb480(lVar5);
        } while (iVar1 == 0);
      }
      piVar9 = piVar9 + -1;
      uVar2 = FUN_003e7390(puVar8,(undefined1 *)((long)puVar4 + (lVar6 - (long)puVar8)),
                           &DAT_03be652f,*piVar9);
      if (-1 < (int)uVar2) {
        if (piVar9 != piVar3) {
          puVar7 = (undefined1 *)((long)puVar8 + (ulong)uVar2);
          do {
            piVar9 = piVar9 + -1;
            uVar2 = FUN_003e7390(puVar7,(undefined1 *)((long)puVar4 + (lVar6 - (long)puVar7)),
                                 &DAT_03c5b700,*piVar9);
            if ((int)uVar2 < 0) goto LAB_003fb6d8;
            puVar7 = puVar7 + uVar2;
          } while (piVar3 != piVar9);
        }
        goto LAB_003fb598;
      }
LAB_003fb6d8:
      FUN_00452f80(piVar3,"external/openssl/crypto/bn/bn_print.c",0x76);
      goto LAB_003fb5d0;
    }
  }
  FUN_00452f80(piVar3,"external/openssl/crypto/bn/bn_print.c",0x76);
  lVar5 = 0;
LAB_003fb5d0:
  FUN_003eb520(lVar5);
  FUN_00452f80(puVar4,"external/openssl/crypto/bn/bn_print.c",0x7a);
  return (undefined2 *)0x0;
}


