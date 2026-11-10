/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a0fd0; name: FUN_003a0fd0
 */


void FUN_003a0fd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_003a2fc0(param_1 + 0x948);
  FUN_003aa850(param_1);
  uVar2 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar1 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118));
    if (lVar1 != 0) {
      do {
        FUN_003c9930(*(undefined8 *)(lVar1 + 8));
        FUN_003a2cd0(lVar1);
        lVar1 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118));
      } while (lVar1 != 0);
    }
    lVar1 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
    if (lVar1 != 0) {
      do {
        FUN_003c9930(*(undefined8 *)(lVar1 + 8));
        FUN_003a2cd0(lVar1);
        lVar1 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
      } while (lVar1 != 0);
    }
    FUN_003a2d40(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118));
    FUN_003a2d40(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
  }
  FUN_00452f80(uVar2,"external/openssl/ssl/d1_lib.c",0x9b);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


