/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080b034; name: FUN_0080b034
 */


void FUN_0080b034(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  lVar2 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x1378));
  lVar4 = *(long *)(param_1 + 0x698);
  lVar3 = *(long *)(param_1 + 0x690);
  if ((lVar4 != lVar3) && (*(long *)(param_1 + 8) != 0)) {
    FUN_005b8f10(*(long *)(param_1 + 8),param_1 + 0x690);
    lVar3 = *(long *)(param_1 + 0x690);
    lVar4 = *(long *)(param_1 + 0x698);
  }
  for (; lVar4 != lVar3; lVar4 = lVar4 + -0x48) {
    if ((*(byte *)(lVar4 + -0x28) & 1) == 0) {
      bVar1 = *(byte *)(lVar4 + -0x48);
    }
    else {
      (**(code **)(**(long **)(lVar4 + -0x10) + 0x18))
                (*(long **)(lVar4 + -0x10),*(undefined8 *)(lVar4 + -0x18),
                 *(ulong *)(lVar4 + -0x28) & 0xfffffffffffffffe,1);
      bVar1 = *(byte *)(lVar4 + -0x48);
    }
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(lVar4 + -0x30) + 0x18))
                (*(long **)(lVar4 + -0x30),*(undefined8 *)(lVar4 + -0x38),
                 *(ulong *)(lVar4 + -0x48) & 0xfffffffffffffffe,1);
    }
  }
  *(long *)(param_1 + 0x698) = lVar3;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


