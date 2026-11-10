/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f29b4; name: FUN_008f29b4
 */


bool FUN_008f29b4(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_008f2a90();
  *param_1 = lVar1;
  lVar1 = FUN_008f2aa0();
  param_1[1] = lVar1;
  lVar1 = FUN_008f2ab0();
  param_1[2] = lVar1;
  lVar1 = FUN_008f2ac0();
  param_1[3] = lVar1;
  lVar1 = FUN_008f2ad0();
  param_1[4] = lVar1;
  lVar1 = FUN_008f2ae0();
  param_1[5] = lVar1;
  lVar1 = FUN_008f2af0();
  param_1[6] = lVar1;
  lVar1 = FUN_008f2b00();
  param_1[7] = lVar1;
  if ((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
     (((param_1[3] == 0 || (param_1[4] == 0)) || (param_1[5] == 0)))) {
    return false;
  }
  return lVar1 != 0 && param_1[6] != 0;
}


