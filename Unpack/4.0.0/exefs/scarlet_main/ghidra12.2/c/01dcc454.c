/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcc454; name: FUN_01dcc454
 */


void FUN_01dcc454(long *param_1,undefined8 *param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    local_50 = *param_2;
    uStack_48 = param_2[1];
    local_40 = param_2[2];
    plVar1 = (long *)param_2[3];
    plStack_38 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    lVar2 = FUN_00c8c7b4(*(undefined8 *)(lVar2 + 0x170),&local_50);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x59) = param_3;
    }
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01dcc4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  return;
}


