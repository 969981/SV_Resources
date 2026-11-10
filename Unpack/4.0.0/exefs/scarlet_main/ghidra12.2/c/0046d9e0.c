/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046d9e0; name: FUN_0046d9e0
 */


ulong FUN_0046d9e0(long param_1,void *param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint local_38 [2];
  
  lVar9 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar9 + 0x20) == 0) {
    uVar8 = FUN_004696a0(param_5 & 0xffffffff,param_4,param_2,
                         *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                         *(undefined4 *)(lVar9 + 0x1c));
    local_38[0] = (uint)uVar8;
joined_r0x0046dad4:
    if ((int)local_38[0] < 0) {
      return uVar8;
    }
    uVar8 = uVar8 & 0xffffffff;
LAB_0046db18:
    uVar4 = 1;
    *param_3 = uVar8;
  }
  else {
    if (*(int *)(lVar9 + 0x1c) == 1) {
      uVar6 = FUN_0043b710();
      iVar2 = FUN_0046fd50(uVar6,0,0,param_2,local_38,param_4,param_5,
                           *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
      if (0 < iVar2) {
        uVar8 = (ulong)local_38[0];
        goto joined_r0x0046dad4;
      }
    }
    else {
      if (*(int *)(lVar9 + 0x1c) != 5) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(lVar9 + 0x38);
      if (lVar5 == 0) {
        iVar2 = FUN_0043dbf0(*(undefined8 *)(param_1 + 0x10));
        lVar5 = FUN_00452c30((long)iVar2,"external/openssl/crypto/rsa/rsa_pmeth.c",0x6a);
        *(long *)(lVar9 + 0x38) = lVar5;
        if (lVar5 == 0) {
          FUN_004806c0(4,0xa7,0x41,"external/openssl/crypto/rsa/rsa_pmeth.c",0x6b);
          return 0xffffffff;
        }
      }
      iVar2 = FUN_004696a0(param_5 & 0xffffffff,param_4,lVar5,
                           *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),5);
      uVar8 = (ulong)(iVar2 - 1U);
      if (0 < iVar2) {
        bVar1 = *(byte *)(*(long *)(lVar9 + 0x38) + uVar8);
        FUN_0043b710(*(undefined8 *)(lVar9 + 0x20));
        uVar3 = FUN_00470860();
        if (uVar3 == bVar1) {
          uVar3 = FUN_0043b720(*(undefined8 *)(lVar9 + 0x20));
          if (iVar2 - 1U == uVar3) {
            if (param_2 != (void *)0x0) {
              memcpy(param_2,*(void **)(lVar9 + 0x38),uVar8);
            }
            goto LAB_0046db18;
          }
          uVar6 = 0x8f;
          uVar7 = 0xd7;
        }
        else {
          uVar6 = 100;
          uVar7 = 0xd2;
        }
        FUN_004806c0(4,0x8d,uVar6,"external/openssl/crypto/rsa/rsa_pmeth.c",uVar7);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


