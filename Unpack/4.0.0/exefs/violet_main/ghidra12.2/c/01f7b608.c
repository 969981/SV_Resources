/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7b608; name: FUN_01f7b608
 */


void FUN_01f7b608(long param_1,byte *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined8 *)(param_1 + 0x18) = *param_5;
  if ((*param_2 & 1) == 0) {
    uVar2 = (ulong)(*param_2 >> 1);
    if (uVar2 < param_3) {
LAB_01f7b65c:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_2 = param_2 + 1;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < param_3) goto LAB_01f7b65c;
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar1 = uVar2 - param_3;
  if (param_4 <= uVar2 - param_3) {
    uVar1 = param_4;
  }
  FUN_01e9f270(param_1,param_2 + param_3,uVar1);
  return;
}


