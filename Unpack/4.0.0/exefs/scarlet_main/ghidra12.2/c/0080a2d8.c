/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080a2d8; name: FUN_0080a2d8
 */


void FUN_0080a2d8(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  int local_90 [4];
  undefined1 auStack_80 [16];
  undefined4 local_70 [4];
  int local_60 [4];
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  undefined4 local_28 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) == 0) {
    FUN_0080a1c4(param_1);
  }
  else if (param_2 == 2) {
    local_60[0] = 0xc406;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_50);
    FUN_00cbd7c0(local_50,local_60);
    if ((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x4a) != '\0')) {
      FUN_00cbd7b4(local_60,*(undefined8 *)PTR_DAT_047d0900);
      plVar3 = *(long **)(param_1 + 8);
      if (local_60[0] == 0) {
        local_70[0] = 0xc406;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
        uVar1 = FUN_00796458(local_70);
        (**(code **)(*plVar3 + 0x38))(plVar3,uVar1);
      }
      else {
        uVar1 = FUN_00796458(local_60);
        (**(code **)(*plVar3 + 0x38))(plVar3,uVar1);
        FUN_018ff39c(local_50,local_60);
      }
    }
    FUN_00cbd7c0(auStack_80,local_50);
    FUN_0080a46c(param_1);
    lVar2 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
    FUN_00cbd7c0(local_90,local_50);
    if (*(int *)(lVar2 + 0x1a8) != local_90[0]) {
      FUN_018ff39c(lVar2 + 0x1a8,local_90);
    }
  }
  else {
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    FUN_00cbd7c0(auStack_40,local_50);
    FUN_0080a46c(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


