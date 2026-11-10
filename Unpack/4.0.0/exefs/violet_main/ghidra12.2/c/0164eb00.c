/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164eb00; name: FUN_0164eb00
 */


void FUN_0164eb00(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = (long)param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,param_2 * 0x844,4);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*param_4 + 0xe8))();
    }
  }
  lVar2 = lVar1 + param_3 * 0x844;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x844;
  return;
}


