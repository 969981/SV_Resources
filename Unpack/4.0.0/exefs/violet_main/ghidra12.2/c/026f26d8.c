/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f26d8; name: FUN_026f26d8
 */


void FUN_026f26d8(long param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    local_1c = param_2;
    FUN_01e62d14(auStack_18,&local_1c,*(long *)(param_1 + 0x68) + 8);
  }
  return;
}


