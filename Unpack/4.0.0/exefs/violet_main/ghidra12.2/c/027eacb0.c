/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027eacb0; name: thunk_FUN_027eacb4
 */


void thunk_FUN_027eacb4(long *param_1)

{
  long lVar1;
  undefined1 auStack_8 [8];
  
  lVar1 = *param_1;
  FUN_027e9b74(auStack_8,param_1 + 1);
  FUN_027e9c04(lVar1 + 0x50,auStack_8);
  FUN_027e9c40(auStack_8);
  return;
}


