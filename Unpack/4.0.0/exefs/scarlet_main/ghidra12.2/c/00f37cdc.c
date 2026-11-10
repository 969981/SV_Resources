/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f37cdc; name: FUN_00f37cdc
 */


void FUN_00f37cdc(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  uVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  if (*(long *)(param_2 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x1d8);
  }
  lVar3 = FUN_00f618d8(param_2);
  local_50 = *(undefined8 *)(lVar3 + 8);
  uStack_48 = *(undefined8 *)(lVar3 + 0x10);
  local_40 = *(undefined8 *)(lVar3 + 0x18);
  plVar1 = *(long **)(lVar3 + 0x20);
  plStack_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_00f37dac(param_1,uVar2,uVar4,&local_50);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  FUN_00f37dac(param_1,uVar2,uVar4,&local_50);
                    /* WARNING: Could not recover jumptable at 0x00f37da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


