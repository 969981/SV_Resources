/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050adb4; name: FUN_0050adb4
 */


void FUN_0050adb4(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  void *__src;
  ulong *puVar2;
  void *__dest;
  undefined8 extraout_x1;
  ulong uVar3;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_60;
  undefined *puStack_58;
  undefined **local_50;
  long *plStack_48;
  undefined ***local_38;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  puVar2 = *(ulong **)(param_3 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
    local_50 = &puStack_58;
    plStack_48 = &local_60;
    local_38 = &local_50;
    std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_005114c0);
  }
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_3 + 0x38) * 4)) {
  case 1:
    FUN_004f4e44(extraout_x1,param_2,param_3,(int)*param_1);
    break;
  case 2:
    FUN_004f51bc(extraout_x1,param_2,param_3,*param_1);
    break;
  case 3:
    FUN_004f5534(extraout_x1,param_2,param_3,(int)*param_1);
    break;
  case 4:
    FUN_004f58ac(extraout_x1,param_2,param_3,*param_1);
    break;
  case 7:
    FUN_004f6324(extraout_x1,param_2,param_3,(byte)*param_1);
    break;
  case 9:
    if ((*param_1 & 1) == 0) {
      uStack_78 = param_1[1];
      local_80 = *param_1;
      local_70 = (void *)param_1[2];
    }
    else {
      uVar1 = param_1[1];
      __src = (void *)param_1[2];
      if (uVar1 < 0x17) {
        __dest = (void *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
        local_80 = uVar3 | 1;
        uStack_78 = uVar1;
        local_70 = __dest;
      }
      memcpy(__dest,__src,uVar1 + 1);
    }
                    /* try { // try from 0050af4c to 0050af5f has its CatchHandler @ 0050af98 */
    FUN_004f3c00(extraout_x1,param_2,param_3,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
  }
  return;
}


