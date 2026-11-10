/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080a1c4; name: FUN_0080a1c4
 */


void FUN_0080a1c4(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x18);
  nn::os::LockMutex(pMVar1);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    local_38[0] = 0xac65;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    uVar3 = FUN_00796458(local_38);
    (**(code **)(*plVar5 + 0x38))(plVar5,uVar3);
    FUN_0080a538(param_1);
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  puVar2 = PTR_DAT_047d15d8;
  if ((*(char *)(param_1 + 0x4a) == '\0') ||
     (uVar4 = FUN_00808ce4(*(undefined8 *)PTR_DAT_047d15d8), (uVar4 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    FUN_00808eb4(local_38,*(undefined8 *)puVar2);
    return;
  }
  FUN_00808e44(local_38,*(undefined8 *)puVar2);
  return;
}


