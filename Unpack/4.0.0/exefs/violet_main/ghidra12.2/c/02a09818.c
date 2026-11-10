/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a09818; name: FUN_02a09818
 */


void FUN_02a09818(undefined8 param_1,long *param_2)

{
  undefined1 auStack_420 [1024];
  
  FUN_01e74ef0(auStack_420,0x400,*(undefined8 *)(*param_2 + 0x30),*(undefined2 *)(*param_2 + 0x52));
  FUN_01f7b518(param_1,auStack_420);
  return;
}


