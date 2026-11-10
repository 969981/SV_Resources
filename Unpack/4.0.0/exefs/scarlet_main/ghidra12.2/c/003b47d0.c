/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b47d0; name: FUN_003b47d0
 */


undefined8 FUN_003b47d0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_00452f80(*(undefined8 *)(param_1 + 600),"external/openssl/ssl/ssl_lib.c",0xb8f);
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    return 0;
  }
  if (1 < param_3) {
    uVar3 = 0;
    do {
      if (*(byte *)(param_2 + uVar3) == 0) {
        return 1;
      }
      uVar1 = (int)uVar3 + (uint)*(byte *)(param_2 + uVar3) + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 < param_3);
    if (uVar1 == param_3) {
      lVar2 = FUN_0045ace0(param_2,(ulong)param_3,"external/openssl/ssl/ssl_lib.c",0xb98);
      if (lVar2 == 0) {
        FUN_004806c0(0x14,0x157,0x41,"external/openssl/ssl/ssl_lib.c",0xb9a);
        return 1;
      }
      FUN_00452f80(*(undefined8 *)(param_1 + 600),"external/openssl/ssl/ssl_lib.c",0xb9d);
      *(long *)(param_1 + 600) = lVar2;
      *(ulong *)(param_1 + 0x260) = (ulong)param_3;
      return 0;
    }
  }
  return 1;
}


