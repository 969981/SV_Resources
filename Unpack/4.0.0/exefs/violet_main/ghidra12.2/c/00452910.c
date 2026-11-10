/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


