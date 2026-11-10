/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e388; name: FUN_0297e388
 */


void FUN_0297e388(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_3;
  uVar2 = FUN_01246e90();
  FUN_0293544c(uVar2,plVar3);
  sVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3);
  if (sVar1 == 0x7f) {
    FUN_02988968(param_1,plVar3);
    return;
  }
  return;
}


