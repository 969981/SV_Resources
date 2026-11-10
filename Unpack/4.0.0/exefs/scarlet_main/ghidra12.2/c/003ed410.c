/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ed410; name: FUN_003ed410
 */


void FUN_003ed410(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *__dest;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x38) != 0)) {
LAB_003ed430:
    *(int *)(param_1 + 0x34) = iVar3 + 1;
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == *(uint *)(param_1 + 0x2c)) {
    uVar1 = 0x20;
    if (uVar4 != 0) {
      uVar1 = uVar4 * 3 >> 1;
    }
    __dest = (void *)FUN_00452c30((ulong)uVar1 << 2,"external/openssl/crypto/bn/bn_ctx.c",0x108);
    if (__dest == (void *)0x0) {
      FUN_004806c0(3,0x94,0x41,"external/openssl/crypto/bn/bn_ctx.c",0x109);
      FUN_004806c0(3,0x81,0x6d,"external/openssl/crypto/bn/bn_ctx.c",0xbd);
      iVar3 = *(int *)(param_1 + 0x34);
      goto LAB_003ed430;
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x28) << 2);
    }
    FUN_00452f80(*(undefined8 *)(param_1 + 0x20),"external/openssl/crypto/bn/bn_ctx.c",0x10e);
    uVar4 = *(uint *)(param_1 + 0x28);
    *(void **)(param_1 + 0x20) = __dest;
    *(uint *)(param_1 + 0x2c) = uVar1;
  }
  else {
    __dest = *(void **)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(undefined4 *)((long)__dest + (ulong)uVar4 * 4) = uVar2;
  return;
}


