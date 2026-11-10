/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4e7e8; name: FUN_01d4e7e8
 */


void FUN_01d4e7e8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  uVar1 = *param_2;
  *param_1 = uVar1;
  switch(uVar1) {
  case 0:
    *puVar2 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    FUN_01d4e890(puVar2,param_2 + 8);
    break;
  case 2:
    goto LAB_01d4e850;
  case 3:
LAB_01d4e850:
    FUN_01d4d9dc(param_1 + 8,param_2 + 8);
    return;
  }
  return;
}


