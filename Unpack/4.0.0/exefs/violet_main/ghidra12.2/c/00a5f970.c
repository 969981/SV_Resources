/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5f970; name: FUN_00a5f970
 */


int FUN_00a5f970(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < *param_1) {
    if (*param_3 < iVar4) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar2;
    }
    else {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      if (*param_3 < *param_2) {
        uVar1 = *(undefined8 *)param_2;
        uVar2 = *(undefined8 *)(param_2 + 2);
        uVar3 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = uVar3;
        *(undefined8 *)param_3 = uVar1;
        *(undefined8 *)(param_3 + 2) = uVar2;
LAB_00a5fa38:
        iVar4 = 2;
        goto LAB_00a5fa4c;
      }
    }
  }
  else {
    if (iVar4 <= *param_3) {
      iVar4 = 0;
      goto LAB_00a5fa4c;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar2;
    if (*param_2 < *param_1) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      goto LAB_00a5fa38;
    }
  }
  iVar4 = 1;
LAB_00a5fa4c:
  if (*param_4 < *param_3) {
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 2);
    uVar3 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_4 = uVar1;
    *(undefined8 *)(param_4 + 2) = uVar2;
    if (*param_3 < *param_2) {
      uVar1 = *(undefined8 *)param_2;
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar2;
      if (*param_2 < *param_1) {
        uVar1 = *(undefined8 *)param_1;
        uVar2 = *(undefined8 *)(param_1 + 2);
        iVar4 = iVar4 + 3;
        uVar3 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = uVar3;
        *(undefined8 *)param_2 = uVar1;
        *(undefined8 *)(param_2 + 2) = uVar2;
      }
      else {
        iVar4 = iVar4 + 2;
      }
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


