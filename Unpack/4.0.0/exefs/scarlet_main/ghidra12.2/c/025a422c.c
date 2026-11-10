/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025a422c; name: FUN_025a422c
 */


undefined1  [16] FUN_025a422c(long *param_1,code *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    FUN_01667884(&local_40);
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    puVar1 = (undefined8 *)(*param_2)();
    uStack_38 = puVar1[1];
    local_40 = *puVar1;
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}


