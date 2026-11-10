/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec58a0; name: FUN_01ec58a0
 */


bool FUN_01ec58a0(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int local_18 [2];
  
  cVar1 = *(char *)(*param_1 + param_1[2]);
  param_1[2] = param_1[2] + 1;
  if (cVar1 == -0x47) {
    FUN_01ec5f84(local_18,param_2,param_1);
    bVar2 = local_18[0] == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


