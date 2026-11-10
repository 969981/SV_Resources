/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043afa0; name: FUN_0043afa0
 */


int FUN_0043afa0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint local_24;
  
  piVar2 = (int *)*param_1;
  if (*(code **)(piVar2 + 0xe) == (code *)0x0) {
    uVar3 = (uint)*(ulong *)(piVar2 + 4);
    if ((uVar3 >> 0xc & 1) == 0) {
      iVar1 = -1;
LAB_0043b014:
      FUN_004806c0(6,0xcd,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x2e);
      return iVar1;
    }
    uVar4 = *(ulong *)(piVar2 + 4) & 0xf0007;
    if (uVar4 < 0x10002) {
      if (uVar4 - 6 < 2 || uVar4 == 0x10001) goto LAB_0043b0a8;
    }
    else {
      if (uVar4 == 0x10003) goto LAB_0043b0a8;
      if (uVar4 == 0x10002) {
        if (*piVar2 == 0xf6) {
          FUN_003de3c0(param_2,5,0);
          return 1;
        }
        return 1;
      }
    }
    iVar1 = 0;
    if (param_2 == 0) goto LAB_0043b014;
    if ((uVar3 >> 0xb & 1) == 0) {
      puVar5 = (uint *)(piVar2 + 3);
    }
    else {
      puVar5 = &local_24;
      iVar1 = FUN_0043a230(param_1,0x25,0,&local_24);
      if (iVar1 != 1) goto LAB_0043b13c;
    }
    if (0x10 < *puVar5) {
LAB_0043b13c:
                    /* WARNING: Subroutine does not return */
      FUN_003f6d60("assertion failed: j <= sizeof(c->iv)","external/openssl/crypto/evp/evp_lib.c",
                   0x6f);
    }
    iVar1 = FUN_0043b810(param_2,param_1 + 3);
  }
  else {
    iVar1 = (**(code **)(piVar2 + 0xe))(param_1,param_2);
  }
  if (0 < iVar1) {
    return iVar1;
  }
  if (iVar1 != -2) {
    FUN_004806c0(6,0xcd,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x2e);
    if (iVar1 < -1) {
      return -1;
    }
    return iVar1;
  }
LAB_0043b0a8:
  FUN_004806c0(6,0xcd,0xe4,"external/openssl/crypto/evp/evp_lib.c",0x2e);
  return -1;
}


