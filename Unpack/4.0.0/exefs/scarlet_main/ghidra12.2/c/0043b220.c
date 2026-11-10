/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043b220; name: FUN_0043b220
 */


ulong FUN_0043b220(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint local_24;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0x40) != (code *)0x0) {
    uVar1 = (**(code **)(lVar4 + 0x40))(param_1,param_2);
    if (0 < (int)uVar1) {
      return (ulong)uVar1;
    }
    if (uVar1 != 0xfffffffe) {
      FUN_004806c0(6,0xcc,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x51);
      if ((int)uVar1 < -1) {
        return 0xffffffff;
      }
      return (ulong)uVar1;
    }
    goto LAB_0043b2e0;
  }
  uVar1 = (uint)*(ulong *)(lVar4 + 0x10);
  if ((uVar1 >> 0xc & 1) == 0) {
LAB_0043b290:
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(ulong *)(lVar4 + 0x10) & 0xf0007;
    if (uVar5 < 0x10002) {
      if (uVar5 - 6 < 2 || uVar5 == 0x10001) {
LAB_0043b2e0:
        FUN_004806c0(6,0xcc,0x6b,"external/openssl/crypto/evp/evp_lib.c",0x51);
        return 0xffffffff;
      }
    }
    else {
      if (uVar5 == 0x10002) {
        return 1;
      }
      if (uVar5 == 0x10003) goto LAB_0043b2e0;
    }
    if (param_2 != 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        puVar6 = (uint *)(lVar4 + 0xc);
      }
      else {
        puVar6 = &local_24;
        iVar2 = FUN_0043a230(param_1,0x25,0,&local_24);
        if (iVar2 != 1) goto LAB_0043b3b8;
      }
      uVar1 = *puVar6;
      if (0x10 < uVar1) {
LAB_0043b3b8:
                    /* WARNING: Subroutine does not return */
        FUN_003f6d60("assertion failed: l <= sizeof(c->iv)","external/openssl/crypto/evp/evp_lib.c",
                     0x5e);
      }
      uVar3 = FUN_0043b890(param_2,param_1 + 3,uVar1);
      if (uVar3 != uVar1) goto LAB_0043b290;
      if (0 < (int)uVar1) {
        memcpy(param_1 + 5,param_1 + 3,(ulong)uVar1);
        return (ulong)uVar1;
      }
    }
    uVar5 = 0;
  }
  FUN_004806c0(6,0xcc,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x51);
  return uVar5;
}


