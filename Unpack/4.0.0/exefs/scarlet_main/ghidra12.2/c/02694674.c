/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02694674; name: FUN_02694674
 */


uint FUN_02694674(undefined8 param_1,code *param_2,ulong param_3,char *param_4)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long local_18;
  
  FUN_02692f24(&local_18);
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4 != '\0');
    param_2 = (code *)(uVar2 & 0xffffffff);
    uVar3 = 1;
  }
  FUN_02692cc8(&local_18);
  return (uint)param_2 & uVar3;
}


