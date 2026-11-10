/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047df50; name: FUN_0047df50
 */


int FUN_0047df50(int *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0x7fffffff)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 2);
  uVar4 = 4;
  if (3 < iVar5) {
    uVar4 = iVar5 + 1;
  }
  if (lVar3 == 0) {
    lVar3 = FUN_00452ce0((ulong)uVar4 << 3,"external/openssl/crypto/stack/stack.c",0xb4);
    *(long *)(param_1 + 2) = lVar3;
    if (lVar3 == 0) {
      FUN_004806c0(0xf,0x81,0x41,"external/openssl/crypto/stack/stack.c",0xb5);
      return 0;
    }
    param_1[5] = uVar4;
LAB_0047e000:
    iVar5 = *param_1;
  }
  else {
    uVar6 = (ulong)(uint)param_1[5];
    if ((int)uVar4 <= param_1[5]) goto LAB_0047e000;
    do {
      iVar5 = (int)uVar6;
      if (0x55555554 < iVar5) {
        uVar6 = 0x7fffffff;
        goto LAB_0047e044;
      }
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar5 + 1;
      }
      uVar1 = iVar5 + (iVar2 >> 1);
      uVar6 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar4);
    if (uVar1 == 0) {
      return 0;
    }
LAB_0047e044:
    lVar3 = FUN_00452db0(lVar3,-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3,
                         "external/openssl/crypto/stack/stack.c",0xc6);
    if (lVar3 == 0) {
      return 0;
    }
    *(long *)(param_1 + 2) = lVar3;
    param_1[5] = (int)uVar6;
    iVar5 = *param_1;
  }
  if (-1 < (int)param_3) {
    uVar4 = iVar5 - param_3;
    if (uVar4 != 0 && (int)param_3 <= iVar5) {
      memmove((void *)(lVar3 + (long)(int)(param_3 + 1) * 8),(void *)(lVar3 + (ulong)param_3 * 8),
              -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_3 * 8) = param_2;
      iVar5 = *param_1;
      goto LAB_0047e074;
    }
  }
  *(undefined8 *)(lVar3 + (long)iVar5 * 8) = param_2;
LAB_0047e074:
  *param_1 = iVar5 + 1;
  param_1[4] = 0;
  return iVar5 + 1;
}


