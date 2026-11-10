/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d3d10; name: FUN_002d3d10
 */


int FUN_002d3d10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (*(code *)*param_5)(param_2,param_1);
  uVar2 = (*(code *)*param_5)(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = 0;
      goto LAB_002d3df4;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_5)(param_2,param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      goto LAB_002d3de0;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_5)(param_3,param_2);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
LAB_002d3de0:
        iVar4 = 2;
        goto LAB_002d3df4;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  iVar4 = 1;
LAB_002d3df4:
  uVar1 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar1 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
      iVar4 = iVar4 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar1 & 1) == 0) {
        iVar4 = iVar4 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar4 = iVar4 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar4;
}


