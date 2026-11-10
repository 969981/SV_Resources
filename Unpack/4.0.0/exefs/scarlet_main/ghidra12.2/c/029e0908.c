/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e0908; name: FUN_029e0908
 */


void FUN_029e0908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_28 = *(long *)(param_1 + 0xf8) + lVar1;
      FUN_029e1c38(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar1),&local_28,param_2,
                   param_3);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 0x130));
  }
  return;
}


