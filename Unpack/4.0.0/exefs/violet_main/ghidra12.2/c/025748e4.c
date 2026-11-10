/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025748e4; name: FUN_025748e4
 */


void FUN_025748e4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  puVar3 = (undefined8 *)(param_1 + 8);
  *puVar3 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    uVar2 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    FUN_025732c4(puVar3,0);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    goto LAB_02574968;
  case 3:
LAB_02574968:
    FUN_02573900(param_1 + 8,param_2 + 8);
    return;
  default:
    goto switchD_02574924_default;
  }
  *puVar3 = uVar2;
switchD_02574924_default:
  return;
}


