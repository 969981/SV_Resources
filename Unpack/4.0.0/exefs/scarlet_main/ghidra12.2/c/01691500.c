/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01691500; name: FUN_01691500
 */


void FUN_01691500(undefined8 param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_70[0] = *param_2;
  local_68 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)(param_2 + 0x10);
  local_58 = *(undefined8 *)(param_2 + 0x18);
  plVar1 = *(long **)(param_2 + 0x20);
  plStack_50 = plVar1;
  if (plVar1 == (long *)0x0) {
    uStack_38 = *(undefined8 *)(param_2 + 0x38);
    local_40 = *(undefined8 *)(param_2 + 0x30);
    FUN_016915b0(param_1,local_70);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  uStack_38 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(undefined8 *)(param_2 + 0x30);
  FUN_016915b0(param_1,local_70);
                    /* WARNING: Could not recover jumptable at 0x016915ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


