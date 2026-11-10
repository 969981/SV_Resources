/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d1d058; name: FUN_01d1d058
 */


void FUN_01d1d058(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  FUN_00c4e5a0(auStack_48,0);
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = FUN_00c4e564(plVar1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar2,uVar4);
  }
  else {
    FUN_00c48fe8(plVar1,param_2,uVar2,uVar4);
  }
  FUN_00c4e70c(auStack_48);
  return;
}


