/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da4118; name: FUN_00da4118
 */


void FUN_00da4118(undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined8 *)0x0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 0xc0) != '\0') {
      if ((param_4 == -1) || (param_4 == -3)) {
        *param_3 = 0;
        local_28[0] = 0;
        goto LAB_00da418c;
      }
      if (*(long **)(param_2 + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00da417c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x60) + 0x88))(param_1);
        return;
      }
    }
    local_28[0] = 0x10408;
  }
LAB_00da418c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


