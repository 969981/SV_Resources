/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344ec90; name: FUN_0344ec90
 */


long FUN_0344ec90(MutexType *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    nn::os::LockMutex(param_1);
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        if (*(uint *)(lVar3 + 0x10) == param_2) {
          lVar4 = lVar3 + -8;
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
          goto LAB_0344ed5c;
        }
      }
    }
    lVar4 = 0;
  }
  else {
    nn::os::LockMutex(param_1 + 0x38);
    uVar1 = *(uint *)(param_1 + 0x60);
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar3 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        if (*(uint *)(lVar3 + 0x10) == param_2) {
          lVar4 = lVar3 + -8;
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
          goto LAB_0344ed40;
        }
      }
    }
    lVar4 = 0;
LAB_0344ed40:
    param_1 = param_1 + 0x38;
  }
LAB_0344ed5c:
  nn::os::UnlockMutex(param_1);
  return lVar4;
}


