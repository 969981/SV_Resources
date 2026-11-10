/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ebc70; name: FUN_001ebc70
 */


undefined8 FUN_001ebc70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1158) == 0) {
    lVar2 = FUN_001ec338(param_2,0xb8);
    if (lVar2 == 0) {
      uVar1 = 0x1b;
    }
    else {
      uVar1 = 0;
      *(long *)(param_1 + 0x1158) = lVar2;
      *(undefined8 *)(param_1 + 0xbf8) = param_2;
      *(undefined8 *)(param_1 + 0x1160) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


