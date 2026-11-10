/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a71e8; name: FUN_024a71e8
 */


void FUN_024a71e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x18) = param_3;
  if (*(long *)(param_1 + 8) == param_3) {
    if (*(long *)(lVar1 + 0x128) != 0) {
      FUN_024a65bc();
    }
    *(undefined8 *)(lVar1 + 0x128) = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar1 + 0x128) != 0) {
      FUN_024a65bc();
    }
    *(long *)(lVar1 + 0x128) = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    }
  }
  return;
}


