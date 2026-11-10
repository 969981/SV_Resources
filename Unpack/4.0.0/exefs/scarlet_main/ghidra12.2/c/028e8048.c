/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e8048; name: FUN_028e8048
 */


undefined8
FUN_028e8048(undefined8 param_1,undefined8 *param_2,long *param_3,undefined1 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_1c [4];
  long local_18;
  
  local_18 = 0;
  if (*param_3 != 0) {
    local_18 = *param_3 + 0x20;
  }
  local_1c[0] = *param_4;
  uStack_28 = *param_5;
  local_30 = *param_6;
  (*(code *)*param_2)(param_2 + 4,&local_18,local_1c,&uStack_28,&local_30);
  return 1;
}


