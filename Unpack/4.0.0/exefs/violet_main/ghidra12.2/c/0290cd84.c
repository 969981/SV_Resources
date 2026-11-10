/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290cd84; name: FUN_0290cd84
 */


int FUN_0290cd84(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  if ((uVar2 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar3 = -2;
    if ((uVar2 & 1) == 0) {
      iVar3 = 0;
    }
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
  if ((uVar2 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar3 = iVar3 - (uVar1 & 1);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6);
  if ((uVar2 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar3 = iVar3 - (uVar1 & 1);
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f);
  return iVar3 + (uVar1 & 1);
}


