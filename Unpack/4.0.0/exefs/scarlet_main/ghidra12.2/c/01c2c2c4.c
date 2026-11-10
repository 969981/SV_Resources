/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2c2c4; name: FUN_01c2c2c4
 */


undefined8 FUN_01c2c2c4(long *param_1,code *param_2,ulong param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4);
  }
  return uVar2;
}


