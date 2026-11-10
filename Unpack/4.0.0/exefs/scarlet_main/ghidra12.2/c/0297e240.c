/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e240; name: FUN_0297e240
 */


void FUN_0297e240(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  uVar3 = (**(code **)(*(long *)*param_3 + 0x200))();
  if ((uVar3 & 1) == 0) {
    uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar2 = (**(code **)(*(long *)*param_3 + 0xf0))();
    uVar4 = FUN_01246e90(param_1);
    uVar3 = FUN_0293b434(uVar4,uVar1,uVar2,*(undefined1 *)(param_3 + 1));
    if ((uVar3 & 1) == 0) {
      *param_2 = 1;
      if (*(char *)((long)param_3 + 9) != '\0') {
        uVar4 = FUN_01246e90(param_1);
        FUN_0293b83c(uVar4,uVar1,uVar2,*(undefined1 *)(param_3 + 1));
        return;
      }
    }
  }
  else {
    *param_2 = 1;
  }
  return;
}


