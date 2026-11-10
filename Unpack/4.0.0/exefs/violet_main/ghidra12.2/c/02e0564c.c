/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e0564c; name: FUN_02e0564c
 */


int FUN_02e0564c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(ushort *)(param_1 + 0xaa) - 0x39 < 2) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (iVar1 < 0x47) {
      iVar1 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar1 = 2;
      if ((uVar3 & 1) == 0) {
        iVar1 = 0;
      }
    }
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar4 = iVar1;
    if (iVar2 < 7) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
      iVar4 = iVar1 + 3;
      if ((uVar3 & 1) == 0) {
        iVar4 = iVar1;
      }
    }
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar1 = iVar4;
    if (8 < iVar2) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar1 = iVar4 + -2;
      if ((uVar3 & 1) == 0) {
        iVar1 = iVar4;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


