/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181cac8; name: FUN_0181cac8
 */


void FUN_0181cac8(undefined2 *param_1,undefined1 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_3;
  switch(param_2) {
  case 0:
    *param_1 = param_3;
    return;
  case 1:
    *(undefined1 *)(param_1 + 1) = uVar1;
    return;
  case 2:
    *(undefined1 *)((long)param_1 + 3) = uVar1;
    return;
  case 3:
    *(undefined1 *)(param_1 + 2) = uVar1;
    return;
  case 4:
    *(undefined1 *)((long)param_1 + 5) = uVar1;
    return;
  case 5:
    *(undefined1 *)(param_1 + 3) = uVar1;
  }
  return;
}


