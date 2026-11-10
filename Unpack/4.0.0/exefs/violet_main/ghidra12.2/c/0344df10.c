/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344df10; name: FUN_0344df10
 */


void FUN_0344df10(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(byte *)(param_1 + 0x70) >> 1 & 1) == 0) {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 2;
    plVar5 = *(long **)PTR_DAT_047e6f38;
    uVar1 = *(uint *)(param_1 + 0x2c);
    nn::os::LockMutex((MutexType *)(plVar5 + 3));
    uVar2 = *(uint *)(plVar5 + 1);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar4 = *(long *)(*plVar5 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar4 != 0;
          lVar4 = *(long *)(lVar4 + 0x70)) {
        if (*(uint *)(lVar4 + 0x54) == uVar1) {
          *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
          FUN_034b3448(plVar5,uVar1);
          goto LAB_0344df88;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar5 + 3));
LAB_0344df88:
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


