/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cc4ba8; name: FUN_01cc4ba8
 */


void FUN_01cc4ba8(undefined1 *param_1,undefined1 *param_2)

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
    FUN_01cc3fa0(&local_28);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    goto LAB_01cc4c38;
  case 3:
LAB_01cc4c38:
    FUN_01cc4750(param_1 + 8,param_2 + 8);
    return;
  default:
    goto switchD_01cc4bec_default;
  }
  *puVar3 = uVar2;
switchD_01cc4bec_default:
  return;
}


