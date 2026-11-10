/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219aaf8; name: FUN_0219aaf8
 */


void FUN_0219aaf8(char *param_1)

{
  char *pcVar1;
  long *local_58 [4];
  long *local_38;
  char *local_28;
  char *local_8;
  
  local_8 = param_1;
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  local_28 = param_1;
  FUN_0219ab7c(local_58,&local_8,&local_28);
  FUN_0219abf8(local_58);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58[0] != (long *)0x0) {
    (**(code **)(*local_58[0] + 0x20))();
  }
  return;
}


