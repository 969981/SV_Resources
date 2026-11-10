/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819e6c; name: FUN_00819e6c
 */


void FUN_00819e6c(long param_1,long *param_2)

{
  short sVar1;
  ushort uVar2;
  
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_1);
  uVar2 = *(ushort *)(*param_2 + 10);
  sVar1 = 0;
  if ((uVar2 & 3) != 0) {
    sVar1 = 4 - (uVar2 & 3);
  }
  *(ushort *)(param_1 + 10) = uVar2 + *(short *)(param_1 + 10) + sVar1 + 4;
  FUN_00819ed4(param_1 + 0x28,param_2);
  return;
}


