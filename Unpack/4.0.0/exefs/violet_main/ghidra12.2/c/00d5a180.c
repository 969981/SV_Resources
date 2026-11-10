/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5a180; name: FUN_00d5a180
 */


void FUN_00d5a180(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  switch(param_1) {
  case 0:
    param_2 = (undefined8 *)*param_2;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_2 + 2);
    *param_3 = uVar1;
    param_3[1] = uVar2;
    break;
  case 1:
    param_2 = (undefined8 *)*param_2;
    FUN_00d5a218(param_3);
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[6];
    param_3[5] = param_2[5];
    param_3[6] = uVar3;
    param_3[3] = uVar1;
    param_3[4] = uVar2;
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_024a7530();
  }
  return;
}


