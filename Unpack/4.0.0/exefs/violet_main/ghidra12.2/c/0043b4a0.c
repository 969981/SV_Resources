/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043b4a0; name: FUN_0043b4a0
 */


undefined4 FUN_0043b4a0(long *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  if ((*(byte *)(*param_1 + 0x11) >> 3 & 1) == 0) {
    return *(undefined4 *)(*param_1 + 0xc);
  }
  iVar1 = FUN_0043a230(param_1,0x25,0,&local_4);
  if (iVar1 != 1) {
    local_4 = 0xffffffff;
  }
  return local_4;
}


