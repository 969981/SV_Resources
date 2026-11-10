/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4a6c; name: FUN_006c4a6c
 */


uint FUN_006c4a6c(long *param_1)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  
  FUN_006c48a4(auStack_30);
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  FUN_006c4990(auStack_30);
  return uVar1 & 1;
}


