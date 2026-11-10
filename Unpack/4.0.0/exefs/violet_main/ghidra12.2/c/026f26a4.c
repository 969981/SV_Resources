/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f26a4; name: FUN_026f26a4
 */


void FUN_026f26a4(long param_1,undefined2 param_2)

{
  undefined2 local_1c [2];
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    local_1c[0] = param_2;
    FUN_01ec55ec(auStack_18,local_1c,*(long *)(param_1 + 0x68) + 8);
  }
  return;
}


