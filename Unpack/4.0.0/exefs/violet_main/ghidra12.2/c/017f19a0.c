/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f19a0; name: FUN_017f19a0
 */


int FUN_017f19a0(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),9);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
    iVar2 = 0;
    if ((uVar1 & 1) == 0) {
      iVar2 = -8;
    }
  }
  else {
    iVar2 = -10;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar1 & 1) != 0) {
    if (*(short *)(param_1 + 0x9e) != 0x97) {
      iVar2 = iVar2 + -10;
    }
  }
  return iVar2;
}


