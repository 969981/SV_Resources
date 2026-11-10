/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02923478; name: FUN_02923478
 */


void FUN_02923478(undefined8 param_1,byte *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  
  *param_3 = 0;
  if (param_4 < 2) {
    *param_2 = param_4;
    bVar1 = 1;
  }
  else {
    if (param_4 == 5) {
      *param_2 = 0;
    }
    else if (param_4 == 4) {
      *param_2 = 1;
    }
    else {
      if (param_4 != 3) {
        bVar1 = 0;
        goto LAB_029234a8;
      }
      *param_2 = 0;
      bVar1 = *param_3;
      *param_3 = bVar1 + 1;
      param_2[(byte)(bVar1 + 1)] = 1;
    }
    bVar1 = *param_3 + 1;
  }
LAB_029234a8:
  *param_3 = bVar1;
  return;
}


