/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d3bd0; name: FUN_021d3bd0
 */


void FUN_021d3bd0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_38 = *(long *)(param_1 + 0xf8) + lVar1;
      FUN_021d5600(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar1),&local_38,param_2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 0x130));
  }
  return;
}


