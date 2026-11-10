/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00126c60; name: FUN_00126c60
 */


undefined4 FUN_00126c60(long param_1,code *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_188;
  __jmp_buf_tag _Stack_180;
  undefined4 local_48;
  
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  local_48 = 0;
  local_188 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 **)(param_1 + 0x58) = &local_188;
  iVar2 = _setjmp(&_Stack_180);
  if (iVar2 == 0) {
    (*param_2)(param_1,param_3);
  }
  *(undefined8 *)(param_1 + 0x58) = local_188;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  return local_48;
}


