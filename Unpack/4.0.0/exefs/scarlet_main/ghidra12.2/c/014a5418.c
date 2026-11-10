/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a5418; name: FUN_014a5418
 */


void FUN_014a5418(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  FUN_014a5680(param_3);
  plVar3 = *(long **)(param_2 + 0x6cd0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  plVar4 = (long *)*param_1;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 6;
  }
  local_50 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 7;
  }
  lStack_48 = *plVar1;
  if (plVar4 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = plVar4[8];
  }
  local_38 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_38 = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
    lVar2 = FUN_00c8c7b4(plVar3[0x2e],&local_50);
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014a5540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3);
  return;
}


