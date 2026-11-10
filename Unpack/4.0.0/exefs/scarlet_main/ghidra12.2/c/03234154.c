/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03234154; name: FUN_03234154
 */


void FUN_03234154(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x174) = 1;
  *(undefined1 **)(param_1 + 0x128) = &LAB_032341bc;
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x130) = param_2;
  *(undefined8 *)(param_1 + 0x138) = param_2;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    do {
      nn::os::ReleaseSemaphore
                ((SemaphoreType *)(*(long *)(*(long *)(param_1 + 0x18) + (uVar2 - 1) * 8) + 0x20),1)
      ;
      bVar1 = 1 < (long)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  return;
}


