/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bd5e8; name: FUN_027bd5e8
 */


void FUN_027bd5e8(undefined8 *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0;
  uStack_38 = 0;
  local_30 = param_1[2];
  uStack_28 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_027bf3bc(&local_30);
  FUN_027bf3bc(&local_40);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = *param_1;
  uStack_28 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  FUN_027bf414(&local_30);
  FUN_027bf414(&local_40);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = param_1[4];
  uStack_28 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_027bf46c(&local_30);
  FUN_027bf46c(&local_40);
  return;
}


