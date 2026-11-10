/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfa1ac; name: FUN_01dfa1ac
 */


void FUN_01dfa1ac(long param_1,undefined1 param_2)

{
  undefined1 local_1c [4];
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    local_1c[0] = param_2;
    FUN_019236f4(auStack_18,local_1c,*(long *)(param_1 + 0x68) + 8);
  }
  return;
}


