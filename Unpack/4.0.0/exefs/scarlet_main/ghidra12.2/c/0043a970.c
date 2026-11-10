/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043a970; name: thunk_FUN_0043a5d0
 */


undefined8 thunk_FUN_0043a5d0(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0x94;
    uVar4 = 0x1a7;
LAB_0043a638:
    FUN_004806c0(6,0x7f,uVar3,"external/openssl/crypto/evp/evp_enc.c",uVar4);
    return 0;
  }
  lVar5 = *param_1;
  if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
    uVar2 = (**(code **)(lVar5 + 0x20))(param_1,param_2,0,0);
    if ((int)uVar2 < 0) {
      return 0;
    }
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = *(uint *)(lVar5 + 4);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_003f6d60("assertion failed: b <= sizeof(ctx->buf)","external/openssl/crypto/evp/evp_enc.c",
                 0x1b5);
  }
  if (uVar2 != 1) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
      if (uVar1 < uVar2) {
        memset((void *)((long)param_1 + (ulong)uVar1 + 0x38),uVar2 - uVar1,
               (ulong)(uVar2 + ~uVar1) + 1);
      }
      uVar3 = (**(code **)(lVar5 + 0x20))(param_1,param_2,param_1 + 7,uVar2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      *param_3 = uVar2;
      return uVar3;
    }
    if (uVar1 != 0) {
      uVar3 = 0x8a;
      uVar4 = 0x1be;
      goto LAB_0043a638;
    }
  }
  *param_3 = 0;
  return 1;
}


