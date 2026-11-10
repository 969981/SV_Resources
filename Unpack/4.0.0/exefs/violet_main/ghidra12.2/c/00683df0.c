/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00683df0; name: FUN_00683df0
 */


void FUN_00683df0(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long *local_38;
  
  local_38 = (long *)FUN_01cf7e20();
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)param_3 << 1));
    __dest = (void *)((ulong)&local_50 | 1);
    if (param_3 == 0) goto LAB_00683e78;
  }
  else {
    uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*local_38 + 0x10))(local_38,uVar1,1);
    local_50 = uVar1 | 1;
    uStack_48 = param_3;
    local_40 = __dest;
  }
  memcpy(__dest,param_2,param_3);
LAB_00683e78:
  *(undefined1 *)((long)__dest + param_3) = 0;
  if (((long *)param_1[3] == local_38) ||
     (uVar1 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar1 & 1) != 0)) {
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *(undefined2 *)param_1 = 0;
    }
    param_1[2] = (ulong)local_40;
    param_1[1] = uStack_48;
    *param_1 = local_50;
  }
  else {
    FUN_01d0e1a8(param_1,&local_50);
    if ((local_50 & 1) != 0) {
      (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
    }
  }
  return;
}


