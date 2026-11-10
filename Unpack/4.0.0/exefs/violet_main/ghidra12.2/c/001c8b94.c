/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8b94; name: FUN_001c8b94
 */


void FUN_001c8b94(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (0 < (int)param_1[4]) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_001cb68c(lVar1 + lVar2,param_1);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x20;
      lVar1 = *param_1;
    } while (lVar3 < (int)param_1[4]);
  }
  FUN_001ec308();
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


