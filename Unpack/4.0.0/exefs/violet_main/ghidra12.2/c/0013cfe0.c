/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013cfe0; name: FUN_0013cfe0
 */


void FUN_0013cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0013d560(param_2,param_3);
  if (*(char *)(puVar1 + 1) == ' ') {
    FUN_0013cb10(param_1,param_2,param_3,param_4);
    return;
  }
  *puVar1 = *param_4;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_4 + 1);
  return;
}


