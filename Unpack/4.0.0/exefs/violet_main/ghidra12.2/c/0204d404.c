/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0204d404; name: FUN_0204d404
 */


void FUN_0204d404(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  
  switch(*(undefined4 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xe8))) {
  case 0:
  case 1:
    puVar1 = (undefined1 *)FUN_015a7158();
    break;
  case 2:
    puVar1 = (undefined1 *)FUN_015c0588();
    break;
  default:
    puVar1 = (undefined1 *)FUN_00f6866c();
  }
  *param_1 = *puVar1;
  return;
}


