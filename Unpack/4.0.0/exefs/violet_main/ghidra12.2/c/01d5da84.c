/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5da84; name: FUN_01d5da84
 */


void FUN_01d5da84(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined8 local_30;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)FUN_017c262c(param_2);
  local_38 = *puVar1;
  local_34 = *(undefined2 *)(puVar1 + 1);
  local_32 = *(undefined1 *)((long)puVar1 + 6);
  local_30 = *(undefined8 *)(puVar1 + 2);
  local_28 = puVar1[4];
  FUN_01d5e99c(param_1,&local_38);
  return;
}


