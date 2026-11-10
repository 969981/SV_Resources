/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040a7d0; name: FUN_0040a7d0
 */


int FUN_0040a7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  
  iVar4 = FUN_003eb2b0(param_4);
  uVar2 = iVar4 + 1;
  lVar6 = FUN_00452c30(-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2,
                       "external/openssl/crypto/bn/bn_gf2m.c",0x1da);
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_003eb480(param_4);
    if (iVar5 == 0) {
      uVar3 = *(uint *)(param_4 + 1);
      if ((int)uVar3 < 1) {
        iVar5 = 0;
      }
      else {
        lVar8 = *param_4;
        iVar5 = 0;
        iVar9 = uVar3 << 5;
        uVar7 = (ulong)uVar3;
        do {
          uVar10 = uVar7 - 1;
          uVar3 = *(uint *)(lVar8 + uVar10 * 4);
          if (uVar3 != 0) {
            uVar11 = 0x80000000;
            iVar12 = 0x1e;
            uVar3 = uVar3 & 0x80000000;
            while( true ) {
              if (uVar3 != 0) {
                if (iVar5 <= iVar4) {
                  *(int *)(lVar6 + (long)iVar5 * 4) = iVar9 + iVar12 + -0x1f;
                }
                iVar5 = iVar5 + 1;
              }
              if ((*(uint *)(lVar8 + uVar10 * 4) & uVar11 >> 1) != 0) {
                if (iVar5 <= iVar4) {
                  *(int *)(lVar6 + (long)iVar5 * 4) = iVar9 + iVar12 + -0x20;
                }
                iVar5 = iVar5 + 1;
              }
              if (iVar12 == 0) break;
              uVar11 = uVar11 >> 2;
              iVar12 = iVar12 + -2;
              uVar3 = uVar11 & *(uint *)(lVar8 + uVar10 * 4);
            }
          }
          iVar9 = iVar9 + -0x20;
          bVar1 = 1 < (long)uVar7;
          uVar7 = uVar10;
        } while (bVar1);
      }
      if (iVar5 <= iVar4) {
        *(undefined4 *)(lVar6 + (long)iVar5 * 4) = 0xffffffff;
        iVar5 = iVar5 + 1;
      }
      if ((iVar5 != 0) && (iVar5 <= (int)uVar2)) {
        iVar5 = FUN_0040a120(param_1,param_2,param_3,lVar6,param_5);
        goto LAB_0040a93c;
      }
    }
    else {
      iVar5 = 0;
    }
    FUN_004806c0(3,0x85,0x6a,"external/openssl/crypto/bn/bn_gf2m.c",0x1de);
  }
LAB_0040a93c:
  FUN_00452f80(lVar6,"external/openssl/crypto/bn/bn_gf2m.c",0x1e4);
  return iVar5;
}


