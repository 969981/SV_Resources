/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02230b98; name: FUN_02230b98
 */


bool FUN_02230b98(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x488);
  if (lVar3 == 0) {
    bVar1 = true;
  }
  else if (*(char *)(lVar3 + 0x11a) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar3 + 0x130) == 3;
  }
  if (*(long *)(param_1 + 0x498) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(*(long *)(param_1 + 0x498) + 0x11a) != '\0';
  }
  if ((bool)(bVar1 & bVar2)) {
    return *(int *)(param_1 + 0x3b0) == 1;
  }
  return false;
}


