/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c9311c; name: FUN_00c9311c
 */


undefined1  [16] FUN_00c9311c(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*param_1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    puVar2 = (undefined8 *)(*param_2)(plVar1,*param_4);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


