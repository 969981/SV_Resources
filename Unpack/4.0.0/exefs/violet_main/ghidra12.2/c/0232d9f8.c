/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0232d9f8; name: FUN_0232d9f8
 */


void FUN_0232d9f8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    uVar3 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    *puVar2 = 0;
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
    FUN_00e7e7c8(param_1 + 8,param_2 + 8);
    return;
  case 3:
    FUN_00e7e7c8(puVar2,param_2 + 8);
    return;
  default:
    goto switchD_0232da28_default;
  }
  *puVar2 = uVar3;
switchD_0232da28_default:
  return;
}


