/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193f0ac; name: FUN_0193f0ac
 */


void FUN_0193f0ac(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  plVar1 = (long *)FUN_014813f4(param_1,*param_3);
  uVar2 = (**(code **)(*plVar1 + 0x200))();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_01243584(param_1);
    FUN_0167fbc0(uVar3,plVar1,param_3[1]);
    uVar3 = FUN_01243584(param_1);
    FUN_0193f12c(uVar3,plVar1,param_3[1],param_3 + 2);
    *param_2 = 1;
  }
  return;
}


