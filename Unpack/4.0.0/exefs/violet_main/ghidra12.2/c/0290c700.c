/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290c700; name: FUN_0290c700
 */


void FUN_0290c700(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
  uVar3 = 0x11;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),1);
  uVar1 = 0xb;
  if ((uVar2 & 1) == 0) {
    uVar1 = uVar3;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),3);
  uVar3 = 0xc;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar1;
  }
  FUN_02914fb8(param_1,uVar3);
  return;
}


