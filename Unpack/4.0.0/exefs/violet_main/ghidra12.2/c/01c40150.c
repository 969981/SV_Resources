/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c40150; name: FUN_01c40150
 */


void FUN_01c40150(undefined1 *param_1)

{
  char local_30 [4];
  undefined8 local_2c;
  undefined8 local_8;
  
  FUN_01a2fdf4(local_30);
  if (local_30[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_8 = local_2c;
    FUN_01c41304(param_1 + 8,&local_8);
  }
  return;
}


