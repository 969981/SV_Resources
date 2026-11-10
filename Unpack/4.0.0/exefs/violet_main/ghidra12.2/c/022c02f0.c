/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022c02f0; name: FUN_022c02f0
 */


void FUN_022c02f0(undefined1 *param_1,undefined1 *param_2)

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
    FUN_022c038c(param_1 + 8,param_2 + 8);
    return;
  case 3:
    FUN_022c038c(puVar2,param_2 + 8);
    return;
  default:
    goto switchD_022c0320_default;
  }
  *puVar2 = uVar3;
switchD_022c0320_default:
  return;
}


