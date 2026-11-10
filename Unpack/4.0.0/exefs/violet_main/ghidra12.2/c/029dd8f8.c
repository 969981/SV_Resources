/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dd8f8; name: FUN_029dd8f8
 */


undefined1  [16] FUN_029dd8f8(undefined8 param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 *local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 == 1) {
    local_50 = &DAT_ea8325e5dbb45b47;
    local_48 = "Wind";
    local_40 = 4;
  }
  else if (param_2 == 0) {
    local_50 = (undefined1 *)0x898255d4ad0f6542;
    local_48 = "Physics";
    local_40 = 7;
  }
  else {
    if (param_2 != 2) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_50 = *(undefined1 **)PTR_DAT_047d3e30;
      local_48 = *(char **)(PTR_DAT_047d3e30 + 8);
      local_40 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
      plVar1 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      local_38 = plVar1;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        auVar4 = FUN_029dda70(param_1,&local_50,param_3);
        uVar5 = auVar4._8_8_;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        auVar3._8_8_ = uVar5;
        auVar3._0_8_ = auVar4._0_8_;
        return auVar3;
      }
      goto LAB_029dd994;
    }
    local_50 = (undefined1 *)0xaa95b52d79d5cd73;
    local_48 = "WindNoise";
    local_40 = 9;
  }
  local_38 = (long *)0x0;
LAB_029dd994:
  auVar3 = FUN_029dda70(param_1,&local_50,param_3);
  return auVar3;
}


