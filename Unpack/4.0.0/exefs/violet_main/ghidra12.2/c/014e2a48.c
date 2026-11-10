/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e2a48; name: FUN_014e2a48
 */


undefined8 FUN_014e2a48(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_8;
  
  iVar1 = 0;
  if (param_1 != 3) {
    iVar1 = param_1;
  }
  local_8 = 0;
  FUN_014e2aa0(iVar1,param_2,&local_8,(ulong)&local_8 | 4);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    local_8 = CONCAT44(local_8._4_4_ + 1,(undefined4)local_8);
  }
  return local_8;
}


