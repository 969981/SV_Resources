/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e52a0; name: FUN_003e52a0
 */


void FUN_003e52a0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0)) {
    puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    FUN_00452f80(*puVar1,"external/openssl/crypto/asn1/tasn_utl.c",0x83);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
  }
  return;
}


