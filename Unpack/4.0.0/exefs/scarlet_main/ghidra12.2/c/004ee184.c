/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ee184; name: FUN_004ee184
 */


undefined8 FUN_004ee184(undefined8 *param_1,long param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *local_50;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  uVar2 = FUN_00521a38(param_1,*(undefined4 *)(param_2 + 0x44),param_2,&local_50);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(byte *)((long)local_50 + 10);
    *(byte *)((long)local_50 + 10) = bVar1 & 0xf0;
    if ((bVar1 >> 4 & 1) != 0) {
      plVar5 = (long *)*local_50;
      uVar4 = FUN_004a5124(param_2);
      uVar4 = (**(code **)(*param_3 + 0x10))(param_3,uVar4);
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar4);
      return uVar4;
    }
  }
  else {
    puVar3 = *(ulong **)(param_2 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      puStack_40 = PTR_LAB_047cd728;
      local_48 = param_2;
      if (*puVar3 != 0xffffffffffffffff) {
        local_30 = &puStack_40;
        plStack_28 = &local_48;
        local_38 = &local_30;
        std::__call_once(puVar3,&local_38,(_func_void_void_ptr *)&LAB_004ef690);
      }
    }
    *(char *)(local_50 + 1) = (char)*(undefined4 *)(param_2 + 0x38);
    *(undefined1 *)((long)local_50 + 9) = 0;
    *(undefined1 *)((long)local_50 + 0xb) = 0;
    uVar4 = FUN_004a5124(param_2);
    plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar4);
    *(byte *)((long)local_50 + 10) = *(byte *)((long)local_50 + 10) & 0xf;
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,*param_1);
    *local_50 = uVar4;
    *(byte *)((long)local_50 + 10) = *(byte *)((long)local_50 + 10) & 0xf0;
  }
  return *local_50;
}


