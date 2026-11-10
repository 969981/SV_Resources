/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e9f8; name: FUN_01f6e9f8
 */


void FUN_01f6e9f8(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (long)param_3 - (long)param_2;
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar3 < 0x17) {
    puVar1 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar3 << 1);
  }
  else {
    uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar2);
    param_1[1] = uVar3;
    param_1[2] = (ulong)puVar1;
    *param_1 = uVar2 | 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *puVar1 = 0;
  return;
}


