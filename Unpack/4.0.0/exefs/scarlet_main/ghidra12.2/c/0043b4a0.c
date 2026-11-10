/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


