/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025d088; name: FUN_0025d088
 */


int FUN_0025d088(byte *param_1)

{
  int iVar1;
  FsContext *pFVar2;
  undefined1 *local_28;
  
  if (param_1[0x20] != 0) {
    return 0;
  }
  local_28 = &LAB_0025d120;
  pFVar2 = (FsContext *)nn::fs::GetCurrentThreadFsContext();
  nn::fs::SetCurrentThreadFsContext((FsContext *)&local_28);
  if ((*param_1 & 1) == 0) {
    iVar1 = nn::fs::MountRom((char *)(param_1 + 1));
  }
  else {
    iVar1 = nn::fs::MountRom(*(char **)(param_1 + 0x10));
  }
  if (iVar1 == 0) {
    param_1[0x20] = 1;
  }
  nn::fs::SetCurrentThreadFsContext(pFVar2);
  return iVar1;
}


