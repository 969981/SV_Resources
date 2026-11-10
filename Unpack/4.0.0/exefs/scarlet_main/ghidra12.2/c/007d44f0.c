/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d44f0; name: FUN_007d44f0
 */


void FUN_007d44f0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  undefined8 local_18;
  
  lVar2 = FUN_007ec50c();
  if (lVar2 != 0) {
    lVar2 = FUN_007ec50c(param_1);
    lVar3 = FUN_007ec4a8(param_1);
    if (lVar2 == lVar3) {
      *(short *)(param_1 + 0xdc) = *(short *)(param_1 + 0xdc) + 1;
      FUN_007e5b98(param_1 + 0x180,&local_18,&local_24);
      uVar1 = FUN_007d7bb0(param_1,local_18,local_24);
      FUN_007e5770(param_1 + 0x180,uVar1);
    }
  }
  return;
}


