/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043b3d0; name: FUN_0043b3d0
 */


ulong FUN_0043b3d0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint local_24;
  
  if (param_2 != 0) {
    if ((*(byte *)(*param_1 + 0x11) >> 3 & 1) == 0) {
      puVar4 = (uint *)(*param_1 + 0xc);
    }
    else {
      puVar4 = &local_24;
      iVar2 = FUN_0043a230(param_1,0x25,0,&local_24);
      if (iVar2 != 1) goto LAB_0043b480;
    }
    uVar1 = *puVar4;
    if (0x10 < uVar1) {
LAB_0043b480:
                    /* WARNING: Subroutine does not return */
      FUN_003f6d60("assertion failed: l <= sizeof(c->iv)","external/openssl/crypto/evp/evp_lib.c",
                   0x5e);
    }
    uVar3 = FUN_0043b890(param_2,param_1 + 3,uVar1);
    if (uVar3 != uVar1) {
      return 0xffffffff;
    }
    if (0 < (int)uVar1) {
      memcpy(param_1 + 5,param_1 + 3,(ulong)uVar1);
      return (ulong)uVar1;
    }
  }
  return 0;
}


