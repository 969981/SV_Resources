/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e530; name: FUN_0297e530
 */


void FUN_0297e530(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  short sVar2;
  
  uVar1 = (**(code **)(*(long *)*param_3 + 0x220))((long *)*param_3,0x10);
  if ((uVar1 & 1) == 0) {
    sVar2 = *(short *)(param_3 + 1);
    if ((sVar2 == 0x67) || (*(short *)((long)param_3 + 10) == 0x52)) {
      FUN_0297e5ac(param_1,*param_3);
      sVar2 = *(short *)(param_3 + 1);
    }
    if (sVar2 == 0x7f) {
      FUN_0297e604(param_1,*param_3);
      return;
    }
  }
  return;
}


