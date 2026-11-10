/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e7890; name: FUN_008e7890
 */


undefined8 FUN_008e7890(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2;
  if (*param_1 < fVar3) {
    if (fVar3 < *param_3) {
      return 0;
    }
    if ((fVar3 <= *param_3) && ((int)param_2[1] <= (int)param_3[1])) {
      return 0;
    }
  }
  else {
    if (*param_1 <= fVar3) {
      fVar4 = *param_3;
      bVar1 = (int)param_2[1] < (int)param_1[1];
      if (fVar3 < fVar4) {
        if ((int)param_1[1] <= (int)param_2[1]) {
          return 0;
        }
        goto LAB_008e7940;
      }
    }
    else {
      fVar4 = *param_3;
      if (fVar3 < fVar4) goto LAB_008e7940;
      bVar1 = true;
    }
    if (fVar3 <= fVar4) {
      if (bVar1) {
        if ((int)param_2[1] <= (int)param_3[1]) {
LAB_008e7940:
          uVar2 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar2;
          if ((*param_3 <= (float)uVar2) &&
             ((*param_3 < (float)uVar2 || ((int)param_3[1] < (int)((ulong)uVar2 >> 0x20))))) {
            *(undefined8 *)param_2 = *(undefined8 *)param_3;
            *(undefined8 *)param_3 = uVar2;
            return 2;
          }
          return 1;
        }
        goto LAB_008e7928;
      }
      if ((int)param_2[1] <= (int)param_3[1]) {
        return 0;
      }
    }
    else if (bVar1) {
LAB_008e7928:
      uVar2 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar2;
      return 1;
    }
  }
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar2;
  if (*param_1 < *param_2) {
    return 1;
  }
  if ((*param_1 <= *param_2) && ((int)param_1[1] <= (int)param_2[1])) {
    return 1;
  }
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar2;
  return 2;
}


