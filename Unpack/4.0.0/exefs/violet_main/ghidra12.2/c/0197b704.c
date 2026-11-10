/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197b704; name: FUN_0197b704
 */


void FUN_0197b704(undefined1 *param_1,undefined1 *param_2)

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
    FUN_0247619c(puVar2,param_2 + 8);
    break;
  case 2:
    goto LAB_0197b748;
  case 3:
LAB_0197b748:
    FUN_00f4a23c(param_1 + 8,param_2 + 8);
    return;
  }
  return;
}


