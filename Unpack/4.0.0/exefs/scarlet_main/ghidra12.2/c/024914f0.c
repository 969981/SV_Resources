/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024914f0; name: FUN_024914f0
 */


undefined1  [16]
FUN_024914f0(long *param_1,code *param_2,ulong param_3,undefined2 *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    FUN_01667884(&local_40);
  }
  else {
    plVar1 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    puVar2 = (undefined8 *)(*param_2)(plVar1,*param_4,param_5);
    uStack_38 = puVar2[1];
    local_40 = *puVar2;
  }
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = local_40;
  return auVar4;
}


