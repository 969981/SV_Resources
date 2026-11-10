/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b96a8; name: FUN_022b96a8
 */


void FUN_022b96a8(undefined4 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_3 == 1) {
    local_40 = &DAT_ea8325e5dbb45b47;
    pcStack_38 = "Wind";
    local_30 = 4;
  }
  else if (param_3 == 0) {
    local_40 = (undefined1 *)0x898255d4ad0f6542;
    pcStack_38 = "Physics";
    local_30 = 7;
  }
  else {
    if (param_3 != 2) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_40 = *(undefined1 **)PTR_DAT_047d3e30;
      pcStack_38 = *(char **)(PTR_DAT_047d3e30 + 8);
      local_30 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
      local_28 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))(local_28);
      }
      goto LAB_022b973c;
    }
    local_40 = (undefined1 *)0xaa95b52d79d5cd73;
    pcStack_38 = "WindNoise";
    local_30 = 9;
  }
  local_28 = (long *)0x0;
LAB_022b973c:
  puVar2 = (undefined4 *)FUN_00c42268(param_2 + 0xf8,&local_40);
  *puVar2 = param_1;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


