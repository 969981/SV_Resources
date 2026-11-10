/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d0288; name: FUN_019d0288
 */


long FUN_019d0288(long param_1,int *param_2)

{
  ushort *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar1 < 5) {
    local_8 = 0;
    local_4 = 0;
  }
  else {
    local_4 = 0;
    if ((ulong)puVar1[2] != 0) {
      local_4 = *(undefined4 *)((long)param_2 + (ulong)puVar1[2]);
    }
    if (*puVar1 < 7) {
      local_8 = 0;
    }
    else {
      local_8 = 0;
      if ((ulong)puVar1[3] != 0) {
        local_8 = *(undefined4 *)((long)param_2 + (ulong)puVar1[3]);
      }
    }
  }
  FUN_019d030c(param_1,*(undefined8 *)(param_1 + 8),&local_4,&local_8);
  return param_1;
}


