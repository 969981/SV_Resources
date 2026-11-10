/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e8470; name: FUN_008e8470
 */


undefined8 FUN_008e8470(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2;
  if (fVar3 < *param_1) {
    if (*param_3 < fVar3) {
      return 0;
    }
    if ((*param_3 == fVar3) && ((int)param_2[1] <= (int)param_3[1])) {
      return 0;
    }
  }
  else {
    if (fVar3 <= *param_1) {
      fVar4 = *param_3;
      bVar1 = (int)param_2[1] < (int)param_1[1];
      if (fVar4 < fVar3) {
        if ((int)param_1[1] <= (int)param_2[1]) {
          return 0;
        }
        goto LAB_008e8520;
      }
    }
    else {
      fVar4 = *param_3;
      if (fVar4 < fVar3) goto LAB_008e8520;
      bVar1 = true;
    }
    if (fVar4 <= fVar3) {
      if (bVar1) {
        if ((int)param_2[1] <= (int)param_3[1]) {
LAB_008e8520:
          uVar2 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar2;
          if (((float)uVar2 <= *param_3) &&
             ((*param_3 != (float)uVar2 || ((int)param_3[1] < (int)((ulong)uVar2 >> 0x20))))) {
            *(undefined8 *)param_2 = *(undefined8 *)param_3;
            *(undefined8 *)param_3 = uVar2;
            return 2;
          }
          return 1;
        }
        goto LAB_008e8508;
      }
      if ((int)param_2[1] <= (int)param_3[1]) {
        return 0;
      }
    }
    else if (bVar1) {
LAB_008e8508:
      uVar2 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar2;
      return 1;
    }
  }
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar2;
  if (*param_2 < *param_1) {
    return 1;
  }
  if ((*param_2 <= *param_1) && ((int)param_1[1] <= (int)param_2[1])) {
    return 1;
  }
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar2;
  return 2;
}


