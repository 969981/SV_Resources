/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b60c; name: FUN_0291b60c
 */


undefined4 FUN_0291b60c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
  plVar2 = (long *)FUN_01021c74(param_1);
  uVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (long *)FUN_01021c74(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x55);
    uVar1 = 0x14;
    if ((uVar3 & 1) == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


