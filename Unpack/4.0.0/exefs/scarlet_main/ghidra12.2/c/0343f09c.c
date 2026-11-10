/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343f09c; name: FUN_0343f09c
 */


void FUN_0343f09c(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  param_1[0xf] = param_2;
  if ((uint)*(byte *)(param_1 + 0x18) < *(uint *)(param_1 + 0x15)) {
    puVar2 = (undefined8 *)param_1[0x17];
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar3 != 0) {
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar1 = uVar3 & 3;
      if (2 < uVar3 - 1) {
        iVar4 = -(uVar3 & 0xfc);
        do {
          iVar4 = iVar4 + 4;
          puVar2 = *(undefined8 **)**(undefined8 **)*puVar2;
        } while (iVar4 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar2 = (undefined8 *)*puVar2;
      }
    }
    if (*(long *)puVar2[1] + (ulong)*(uint *)(puVar2 + 2) != param_2) {
      FUN_0343e344(param_1);
      goto LAB_0343f164;
    }
  }
  else {
    (**(code **)(*param_1 + 0x100))(param_1,param_2);
  }
  FUN_0343e98c(param_1);
LAB_0343f164:
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}


