/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ddfb4; name: FUN_029ddfb4
 */


undefined1  [16] FUN_029ddfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  iVar1 = (int)param_2;
  if (iVar1 == 1) {
    local_40 = &DAT_ea8325e5dbb45b47;
    pcStack_38 = "Wind";
    local_30 = 4;
  }
  else if (iVar1 == 0) {
    local_40 = (undefined1 *)0x898255d4ad0f6542;
    pcStack_38 = "Physics";
    local_30 = 7;
  }
  else {
    if (iVar1 != 2) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), param_2 = extraout_x1, iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
        param_2 = extraout_x1_00;
      }
      local_40 = *(undefined1 **)PTR_DAT_047d3e30;
      pcStack_38 = *(char **)(PTR_DAT_047d3e30 + 8);
      local_30 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
      local_28 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))(local_28,param_2,param_3);
      }
      goto LAB_029de044;
    }
    local_40 = (undefined1 *)0xaa95b52d79d5cd73;
    pcStack_38 = "WindNoise";
    local_30 = 9;
  }
  local_28 = (long *)0x0;
LAB_029de044:
  auVar2 = FUN_029de110(param_1,&local_40,param_3);
  uVar3 = auVar2._8_8_;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  auVar2._8_8_ = uVar3;
  return auVar2;
}


