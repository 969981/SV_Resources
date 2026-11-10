/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e7448; name: FUN_017e7448
 */


void FUN_017e7448(undefined8 *param_1,char *param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0x3f8000003f800000;
      param_1[3] = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar6 + ((long)param_4 >> 1) + -0x28));
      }
      puVar5 = (undefined8 *)(*param_3)();
      uVar2 = puVar5[3];
      uVar1 = *puVar5;
      uVar3 = puVar5[1];
      param_1[2] = puVar5[2];
      param_1[3] = uVar2;
      *param_1 = uVar1;
      param_1[1] = uVar3;
    }
    return;
  }
  if (cVar4 == '\x03') {
    FUN_017e7a54(param_1,param_2 + 8);
    return;
  }
  if (((cVar4 == '\x01') || (cVar4 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
    }
    puVar5 = (undefined8 *)(*param_3)();
    uVar2 = puVar5[3];
    uVar1 = *puVar5;
    uVar3 = puVar5[1];
    param_1[2] = puVar5[2];
    param_1[3] = uVar2;
    *param_1 = uVar1;
    param_1[1] = uVar3;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x3f8000003f800000;
    param_1[3] = 0;
  }
  return;
}


