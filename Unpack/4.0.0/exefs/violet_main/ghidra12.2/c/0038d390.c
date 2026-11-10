/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038d390; name: FUN_0038d390
 */


undefined4 FUN_0038d390(char *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  char *local_8;
  
  uVar2 = strtol(param_1,&local_8,0);
  uVar1 = (undefined4)uVar2;
  if (*local_8 != '\0' || uVar2 >> 0x1f != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


