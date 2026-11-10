/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018782d4; name: FUN_018782d4
 */


void FUN_018782d4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
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
    local_28 = 0;
    *puVar3 = 0;
    FUN_018780b4(&local_28);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    goto LAB_01878364;
  case 3:
LAB_01878364:
    FUN_01878af4(param_1 + 8,param_2 + 8);
    return;
  default:
    goto switchD_01878318_default;
  }
  *puVar3 = uVar2;
switchD_01878318_default:
  return;
}


