/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bf9428; name: FUN_01bf9428
 */


void FUN_01bf9428(undefined1 *param_1,undefined1 *param_2)

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
    FUN_00d1b100(puVar2,param_2 + 8);
    break;
  case 2:
    goto LAB_01bf9490;
  case 3:
LAB_01bf9490:
    FUN_01bf8dc8(param_1 + 8,param_2 + 8);
    return;
  }
  return;
}


