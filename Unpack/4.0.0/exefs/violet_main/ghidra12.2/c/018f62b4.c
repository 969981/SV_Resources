/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f62b4; name: FUN_018f62b4
 */


void FUN_018f62b4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  if (*(char *)param_1[2] == '\0') {
    param_3 = *(undefined8 *)(*param_1 + 0x118);
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1 + 0xa0;
  }
  uVar1 = FUN_018f6308(param_2,param_3,lVar2,param_1[1]);
  *(undefined2 *)param_1[3] = uVar1;
  return;
}


