/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f5d1c; name: FUN_004f5d1c
 */


undefined1  [16] FUN_004f5d1c(long param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined8 extraout_var_00;
  undefined8 uVar6;
  undefined1 auVar4 [16];
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar1 = *(ulong **)(param_3 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_047cd728;
    local_50 = param_3;
    if (*puVar1 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    lVar2 = FUN_004f07f0(param_1,param_2,param_3);
    uVar3 = *(undefined4 *)(*(long *)(lVar2 + 8) + (long)param_4 * 4);
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    FUN_0052242c(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44),param_4)
    ;
    uVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_00;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}


