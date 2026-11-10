/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195a5d0; name: FUN_0195a5d0
 */


void FUN_0195a5d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  char local_310 [8];
  void *local_308;
  size_t local_300;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  char local_2b8 [24];
  long *local_2a0;
  undefined4 local_294;
  undefined4 local_290 [118];
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char local_98 [66];
  undefined2 local_56;
  undefined2 local_54;
  
  FUN_0195a874(local_2b8,param_3);
  FUN_0195a950(local_98,local_2b8);
  if (local_2a0 != (long *)0x0) {
    (**(code **)(*local_2a0 + 0x20))();
  }
  if (local_98[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    auVar3 = FUN_0195a820();
    FUN_0195aa40(&local_b8,*(undefined8 *)(param_2 + 8));
    plVar1 = local_b8;
    local_b8[9] = -1;
    FUN_0195a8bc(local_2b8,local_b8,auVar3._0_8_,auVar3._8_8_ & 0xffffffff);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_56);
    (**(code **)(*plVar1 + 0x10))(local_2b8,plVar1,local_54);
    FUN_0195a830(local_2b8,param_3);
    if ((local_2b8[0] != '\0') &&
       ((**(code **)(*plVar1 + 0x80))(local_310,plVar1,(ulong)local_2b8 | 4,local_290[0]),
       local_2b8[0] != '\0')) {
      local_2b8[0] = '\0';
    }
    memset(local_2b8,0,0x200);
    local_2c0 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_0195a830(local_310,param_3);
    if (local_310[0] == '\0') {
      local_294 = 0;
    }
    else {
      memcpy(&local_2e0,(void *)((ulong)local_310 | 4),0x24);
      local_310[0] = '\0';
      local_294 = local_2e8;
    }
    memcpy(local_2b8,&local_2e0,0x24);
    if ((((*(char *)(param_2 + 0x58) == '\0') &&
         ((*(long *)(param_2 + 0x40) == 0 || (*(short *)(*(long *)(param_2 + 0x40) + 0x1a) == 0))))
        || (*(long **)(param_2 + 0x50) == (long *)0x0)) ||
       ((**(code **)(**(long **)(param_2 + 0x50) + 8))(local_310), local_310[0] == '\0')) {
      uVar2 = 0x28;
    }
    else {
      if ((local_300 == 0) || (uVar2 = local_300 + 0x28, 0x200 < uVar2)) {
        uVar2 = 0x28;
      }
      else {
        memcpy(local_290,local_308,local_300);
      }
      local_310[0] = '\0';
    }
    (**(code **)(*local_b8 + 0x28))(local_310,local_b8,local_2b8,uVar2 & 0xffffffff);
    *param_1 = local_b8;
    param_1[1] = local_b0;
    param_1[2] = uStack_a8;
    param_1[3] = local_a0;
  }
  return;
}


