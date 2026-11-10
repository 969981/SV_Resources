/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0257f594; name: FUN_0257f594
 */


void FUN_0257f594(undefined1 *param_1,undefined1 *param_2)

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
    FUN_0257653c(&local_28);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    goto LAB_0257f624;
  case 3:
LAB_0257f624:
    FUN_0257e654(param_1 + 8,param_2 + 8);
    return;
  default:
    goto switchD_0257f5d8_default;
  }
  *puVar3 = uVar2;
switchD_0257f5d8_default:
  return;
}


