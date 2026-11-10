/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e79f0; name: FUN_008e79f0
 */


int FUN_008e79f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_008e7890();
  iVar2 = iVar1;
  if ((*param_4 <= *param_3) && ((*param_4 < *param_3 || ((int)param_4[1] < (int)param_3[1])))) {
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar3;
    iVar2 = iVar1 + 1;
    if ((*param_3 <= *param_2) && ((*param_3 < *param_2 || ((int)param_3[1] < (int)param_2[1])))) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      iVar2 = iVar1 + 2;
      if ((*param_2 <= *param_1) && ((*param_2 < *param_1 || ((int)param_2[1] < (int)param_1[1]))))
      {
        uVar3 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar3;
        iVar2 = iVar1 + 3;
      }
    }
  }
  if ((*param_4 < *param_5) || ((*param_4 <= *param_5 && ((int)param_4[1] <= (int)param_5[1])))) {
    iVar1 = iVar2;
  }
  else {
    uVar3 = *(undefined8 *)param_4;
    iVar1 = iVar2 + 1;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar3;
    if ((*param_4 <= *param_3) && ((*param_4 < *param_3 || ((int)param_4[1] < (int)param_3[1])))) {
      uVar3 = *(undefined8 *)param_3;
      iVar1 = iVar2 + 2;
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)param_4 = uVar3;
      if ((*param_3 <= *param_2) && ((*param_3 < *param_2 || ((int)param_3[1] < (int)param_2[1]))))
      {
        uVar3 = *(undefined8 *)param_2;
        iVar1 = iVar2 + 3;
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar3;
        if ((*param_2 <= *param_1) && ((*param_2 < *param_1 || ((int)param_2[1] < (int)param_1[1])))
           ) {
          uVar3 = *(undefined8 *)param_1;
          iVar1 = iVar2 + 4;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}


