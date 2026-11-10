/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368450; name: FUN_00368450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00368450(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _UNK_03cab378;
  lVar1 = _DAT_03cab370;
  param_1[4] = 0;
  *param_1 = (long)(param_1 + 5);
  param_1[1] = (long)(param_1 + 5);
  param_1[3] = lVar2;
  param_1[2] = lVar1;
  return;
}


