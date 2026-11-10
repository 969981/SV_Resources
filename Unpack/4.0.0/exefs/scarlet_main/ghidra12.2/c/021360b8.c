/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021360b8; name: FUN_021360b8
 */


void FUN_021360b8(undefined8 *param_1,long param_2)

{
  if ((*(long *)(param_2 + 0x78) == 0) || (*(short *)(*(long *)(param_2 + 0x78) + 0x1a) == 0)) {
    FUN_00ef8710(param_1,0);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ca1a48(param_1);
  return;
}


