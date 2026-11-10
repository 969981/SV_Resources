/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e8340; name: FUN_020e8340
 */


bool FUN_020e8340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  char *local_50;
  long *local_48;
  int local_3c;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  local_38 = *(long *)(param_1 + 0x28);
  lStack_30 = *(long *)(param_1 + 0x30);
  if (((lStack_30 != 0 || local_38 != 0) &&
      (local_28 = param_3, uVar3 = nn::fs::IsSaveDataExisting(param_2,&local_38), (uVar3 & 1) != 0))
     && (iVar2 = nn::fs::MountSaveDataReadOnly("linked-save",param_2,&local_38), iVar2 == 0)) {
    local_3c = 0;
    local_50 = "linked-save";
    FUN_020e8420(&local_48,&local_50,&local_28);
    plVar1 = (long *)PTR_PTR_047d4508;
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 7;
    }
    iVar2 = nn::fs::GetEntryType((DirectoryEntryType *)&local_3c,(char *)*plVar1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    nn::fs::Unmount("linked-save");
    if (iVar2 == 0) {
      return local_3c == 1;
    }
  }
  return false;
}


