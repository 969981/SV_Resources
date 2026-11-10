/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7b218; name: FUN_01e7b218
 */


void FUN_01e7b218(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  char local_28 [4];
  uint local_24;
  
  FUN_01e7b310(local_28);
  if (local_28[0] != '\0') {
    if ((local_24 & 0x3fffff) == 0x47a) {
      local_48 = 0x9989d15fdf6c9546;
      pcStack_40 = "NoDataRaid";
      local_38 = 10;
      local_30 = (long *)0x0;
      FUN_01987400(param_1,&local_48,&DAT_03d5b6e8);
      if (local_30 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_30 + 0x20))();
      return;
    }
    local_28[0] = '\0';
  }
  local_68 = 0x95d9eaf3d9ff81d1;
  pcStack_60 = "error";
  local_58 = 5;
  local_50 = (long *)0x0;
  FUN_01e7b418(param_1,&local_68,param_2);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


