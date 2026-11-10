/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021360ec; name: FUN_021360ec
 */


void FUN_021360ec(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + 0x78);
  if ((*plVar1 == 0) || (*(short *)(*plVar1 + 0x1a) == 0)) {
    FUN_00ef8710(param_1,0);
    return;
  }
  (*(code *)*param_3)(param_3 + 4,plVar1);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ca1a48(param_1,plVar1);
  return;
}


