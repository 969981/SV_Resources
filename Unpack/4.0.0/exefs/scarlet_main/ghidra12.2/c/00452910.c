/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00452910; name: FUN_00452910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00452910(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[7] = 1;
  uVar2 = _UNK_03caad28;
  uVar1 = _DAT_03caad20;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 5) = uVar2;
  *(undefined8 *)(param_1 + 3) = uVar1;
  return 1;
}


