/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a6c60; name: FUN_024a6c60
 */


ulong FUN_024a6c60(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar1 = uVar2 ^ (int)uVar2 >> 0x1f;
  switch(uVar1) {
  case 0:
  case 1:
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x024a6cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x18))();
    return uVar4;
  default:
    FUN_024a6cf0(uVar2,uVar1,param_2);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x24a6cec);
    (*pcVar3)();
  }
  if (*(long *)(param_1 + 4) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (ulong)(*(int *)(*(long *)(param_1 + 4) + 8) == 0);
  }
  return uVar4;
}


