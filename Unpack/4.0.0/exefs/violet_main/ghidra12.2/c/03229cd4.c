/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03229cd4; name: FUN_03229cd4
 */


undefined8 FUN_03229cd4(undefined8 param_1,char *param_2)

{
  int iVar1;
  int local_4;
  
  iVar1 = nn::fs::GetEntryType((DirectoryEntryType *)&local_4,param_2);
  if (iVar1 == 0) {
    if (local_4 == 0) {
      iVar1 = nn::fs::DeleteDirectoryRecursively(param_2);
    }
    else {
      iVar1 = nn::fs::DeleteFile(param_2);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0x80040200;
}


