/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f2120; name: FUN_003f2120
 */


undefined8 FUN_003f2120(undefined8 *param_1,long *param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  void *__s;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  if ((int)param_3 < 0) {
    FUN_004806c0(3,0x91,0x77,"external/openssl/crypto/bn/bn_shift.c",0x56);
    uVar11 = 0;
  }
  else {
    uVar6 = param_3 >> 5;
    lVar8 = FUN_003eb9a0(param_1,(int)param_2[1] + uVar6 + 1);
    if (lVar8 == 0) {
      uVar11 = 0;
    }
    else {
      iVar5 = (int)param_2[1];
      if (iVar5 == 0) {
        __s = (void *)*param_1;
        *(undefined4 *)((long)__s + (ulong)uVar6 * 4) = 0;
      }
      else {
        lVar8 = *param_2;
        __s = (void *)*param_1;
        uVar3 = -param_3 & 0x1f;
        uVar7 = -uVar3;
        uVar7 = uVar7 | uVar7 >> 8;
        uVar10 = *(uint *)(lVar8 + (long)(iVar5 + -1) * 4);
        puVar2 = (uint *)((long)__s + (ulong)uVar6 * 4);
        puVar2[iVar5] = uVar10 >> (ulong)(-param_3 & 0x1f) & uVar7;
        uVar10 = uVar10 << (ulong)(param_3 & 0x1f);
        if (1 < (int)*(uint *)(param_2 + 1)) {
          uVar9 = (ulong)*(uint *)(param_2 + 1);
          do {
            uVar4 = *(uint *)(lVar8 + (ulong)((int)uVar9 - 2) * 4);
            *(uint *)((long)__s + uVar9 * 4 + (ulong)uVar6 * 4 + -4) =
                 uVar4 >> (ulong)uVar3 & uVar7 | uVar10;
            uVar10 = uVar4 << (ulong)(param_3 & 0x1f);
            bVar1 = 2 < (long)uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar1);
        }
        *puVar2 = uVar10;
      }
      if (0x3e < param_3 + 0x1f) {
        memset(__s,0,(ulong)(uVar6 << 2));
      }
      *(int *)(param_1 + 2) = (int)param_2[2];
      uVar11 = 1;
      *(uint *)(param_1 + 1) = (int)param_2[1] + uVar6 + 1;
    }
    FUN_003ebc30(param_1);
  }
  return uVar11;
}


