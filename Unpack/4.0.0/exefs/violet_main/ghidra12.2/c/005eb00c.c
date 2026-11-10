/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005eb00c; name: FUN_005eb00c
 */


void FUN_005eb00c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      lVar1 = lVar1 + -0x88;
      FUN_005d55b8(param_1 + 3,lVar1);
    } while (lVar2 != lVar1);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x005eb08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar1,param_1[2] - lVar1,8);
  return;
}


