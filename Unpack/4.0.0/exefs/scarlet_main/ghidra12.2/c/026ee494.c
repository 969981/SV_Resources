/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ee494; name: FUN_026ee494
 */


ulong FUN_026ee494(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *local_58 [4];
  size_t local_38;
  
  if ((*(long *)(param_1 + 0x138) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x138) + 0x10), lVar1 == 0)) {
    local_38 = 0;
  }
  else {
    FUN_026ee520(local_58,lVar1 + -0x28,*(undefined8 *)(param_1 + 8));
    if ((param_3 & 0xffffffff) < local_38) {
      local_38 = 0;
    }
    else {
      memcpy(param_2,local_58[0],local_38);
    }
    FUN_026ee830(local_58);
  }
  return local_38 & 0xffffffff;
}


