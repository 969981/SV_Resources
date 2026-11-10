/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089df70; name: FUN_0089df70
 */


void FUN_0089df70(long *param_1)

{
  long lVar1;
  
  if (0 < (int)param_1[10]) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[9] + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[10]);
  }
  return;
}


