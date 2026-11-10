/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003649fc; name: FUN_003649fc
 */


void FUN_003649fc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0;
  uStack_44 = 0;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
                    /* try { // try from 00364a24 to 00364a2f has its CatchHandler @ 00364a54 */
  local_48 = param_3;
  FUN_00364a78(&local_48,param_2);
  param_1[2] = local_28;
  param_1[1] = uStack_30;
  *param_1 = local_38;
  return;
}


