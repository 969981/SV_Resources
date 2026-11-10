/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6a938; name: FUN_01f6a938
 */


void FUN_01f6a938(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 2) {
    uVar1 = FUN_01f6ac24(*(undefined8 *)(param_1 + 0x130));
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) != 1) {
      return;
    }
    if ((9 < *(uint *)(param_1 + 0x10) - 4) && (2 < *(uint *)(param_1 + 0x10))) {
      return;
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_01f6ac0c();
      uVar2 = 0x20000000f;
      goto LAB_01f6a998;
    }
  }
  uVar2 = 0x30000000e;
LAB_01f6a998:
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


