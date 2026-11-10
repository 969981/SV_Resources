/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a478; name: FUN_0078a478
 */


undefined4 FUN_0078a478(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
    uVar2 = 6;
    if (iVar1 != 0) {
      iVar1 = memcmp((void *)(param_1 + 0xc),&DAT_03d0abac,0xc);
      uVar2 = 6;
      if (iVar1 != 0) {
        uVar2 = 0x12;
      }
      return uVar2;
    }
  }
  return uVar2;
}


