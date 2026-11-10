/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080a108; name: FUN_0080a108
 */


void FUN_0080a108(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  
  puVar1 = PTR_DAT_047d15d8;
  lVar2 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x1378));
  *(uint *)(param_1 + 0x38) = param_2;
  lVar3 = thunk_FUN_00799c50(*(undefined8 *)puVar1);
  *(ulong *)(*(long *)(lVar3 + 0x1308) + 0x18) = (ulong)param_2;
  lVar3 = thunk_FUN_00799c50(*(undefined8 *)puVar1);
  uVar4 = thunk_FUN_00799c50(*(undefined8 *)puVar1);
  FUN_007fedb0(auStack_50,uVar4,(ulong)param_2);
  uVar5 = FUN_007967e8(lVar3 + 0x98,auStack_50);
  if ((uVar5 & 1) == 0) {
    FUN_00796828(lVar3 + 0x98,auStack_50);
  }
  thunk_FUN_00799c50(*(undefined8 *)puVar1);
  FUN_007a271c();
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x1378));
  return;
}


