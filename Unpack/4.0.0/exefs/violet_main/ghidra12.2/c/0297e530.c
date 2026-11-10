/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


