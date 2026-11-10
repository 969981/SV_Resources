/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c04cd8; name: FUN_01c04cd8
 */


undefined4 FUN_01c04cd8(char *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


