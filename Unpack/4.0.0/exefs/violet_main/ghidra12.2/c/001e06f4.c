/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e06f4; name: FUN_001e06f4
 */


undefined8 * FUN_001e06f4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
LAB_001e078c:
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_001e05e8(param_1,param_2);
    lVar2 = puVar1[4];
    if (param_1 == lVar2) {
      if (*(int *)(puVar1 + 5) == (int)param_2) {
        param_4[4] = 0xffffffffffffffff;
        param_4[5] = 0xffffffffffffffff;
        param_4[2] = puVar1;
        param_4[3] = puVar1[3];
        *(undefined8 **)(puVar1[3] + 0x10) = param_4;
        goto LAB_001e07ac;
      }
    }
    else if (puVar1 == (undefined8 *)0x0) goto LAB_001e078c;
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && ((int)param_2 < *(int *)(puVar1 + 5))))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
      *puVar1 = 0;
    }
    else {
      uVar3 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar3;
      puVar1[1] = 0;
    }
  }
  param_4[4] = param_1;
  param_4[5] = param_2;
  param_4[2] = param_4;
  puVar1 = param_4;
LAB_001e07ac:
  puVar1[3] = param_4;
  return puVar1;
}


