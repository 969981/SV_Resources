/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c156b4; name: FUN_01c156b4
 */


uint FUN_01c156b4(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long local_38;
  
  FUN_01c15044(&local_38);
  if (local_38 == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4,*param_5);
    param_2 = (code *)(uVar2 & 0xffffffff);
    uVar3 = 1;
  }
  FUN_01c14e54(&local_38);
  return (uint)param_2 & uVar3;
}


