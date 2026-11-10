/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02491494; name: FUN_02491494
 */


undefined1  [16]
FUN_02491494(long *param_1,code *param_2,ulong param_3,undefined2 *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    FUN_01667884(&local_40);
  }
  else {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    puVar2 = (undefined8 *)(*param_2)(plVar1,*param_4,param_5);
    uStack_38 = puVar2[1];
    local_40 = *puVar2;
  }
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = local_40;
  return auVar3;
}


