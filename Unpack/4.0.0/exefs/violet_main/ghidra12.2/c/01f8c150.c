/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8c150; name: FUN_01f8c150
 */


undefined1  [16] FUN_01f8c150(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    auVar2 = FUN_01f92c08(param_1 + 0x18);
  }
  else if (iVar1 == 1) {
    auVar2 = FUN_01f93290(param_1 + 0xc);
  }
  else if (iVar1 == 0) {
    auVar2 = *(undefined1 (*) [16])(param_1 + 8);
  }
  else {
    auVar2 = ZEXT816(0);
  }
  return auVar2;
}


