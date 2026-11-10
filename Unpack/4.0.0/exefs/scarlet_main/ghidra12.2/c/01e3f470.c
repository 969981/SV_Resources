/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3f470; name: FUN_01e3f470
 */


void FUN_01e3f470(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_2 != 0) {
    local_30 = *param_1;
    if ((param_3 & 1) == 0) {
      local_28 = *(undefined4 *)(param_1 + 1);
      FUN_01e3fb00(&local_30);
    }
    else {
      local_18 = *(undefined4 *)(param_1 + 1);
      local_20 = local_30;
      FUN_01e3fa40(&local_20);
    }
  }
  return;
}


