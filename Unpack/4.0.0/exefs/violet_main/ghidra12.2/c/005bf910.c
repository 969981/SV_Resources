/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bf910; name: FUN_005bf910
 */


void FUN_005bf910(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = *param_2;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    __src = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005bfa78 to 005bfa7f has its CatchHandler @ 005bfa80 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar3 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_58 = 0;
  local_50 = FUN_01cf7e20();
  uStack_48 = 0;
                    /* try { // try from 005bf9d8 to 005bf9e7 has its CatchHandler @ 005bfa9c */
  local_60 = &local_58;
  FUN_00543620(&local_80,param_2 + 10,&local_60);
  FUN_01cfa44c(&local_60,local_58);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_80;
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  *(undefined8 *)(param_1 + 0xe) = local_78;
  plVar2 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_68;
  if (local_68 == 0) {
    *(long **)(param_1 + 0xc) = plVar2;
  }
  else {
    *(long **)(*plVar2 + 0x10) = plVar2;
    local_68 = 0;
    local_80 = &local_78;
    local_78 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_01cfa44c(&local_80,local_78);
                    /* try { // try from 005bfa58 to 005bfa5f has its CatchHandler @ 005bfa84 */
  FUN_005c1ec4(param_1 + 0x14,param_3);
  return;
}


