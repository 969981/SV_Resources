/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026eb608; name: FUN_026eb608
 */


long FUN_026eb608(long param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 local_24;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar2;
  if (uVar1 < 5) {
    local_4 = 0;
  }
  else {
    local_4 = 0;
    if ((ulong)puVar2[2] != 0) {
      local_4 = *(undefined4 *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (6 < uVar1) {
      local_8 = 0;
      if ((ulong)puVar2[3] != 0) {
        local_8 = *(undefined4 *)((long)param_2 + (ulong)puVar2[3]);
      }
      if (uVar1 < 9) {
        local_24 = 0;
      }
      else {
        local_24 = 0;
        if ((ulong)puVar2[4] != 0) {
          local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar2[4]);
        }
      }
      goto LAB_026eb66c;
    }
  }
  local_24 = 0;
  local_8 = 0;
LAB_026eb66c:
  FUN_026eb6b4(param_1,*(undefined8 *)(param_1 + 8),&local_4,&local_8,&local_24);
  return param_1;
}


