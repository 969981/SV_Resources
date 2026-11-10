/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02906664; name: FUN_02906664
 */


int FUN_02906664(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                     *(undefined4 *)(param_1 + 0x98));
  if (((uVar4 & 1) == 0) || (iVar1 = FUN_029149bc(param_1), iVar1 != 0)) {
    iVar1 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar1 = -(uVar3 & 1);
  }
  iVar2 = FUN_029149bc(param_1);
  if (iVar2 == 1) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar2 = iVar1 + 2;
    if ((uVar4 & 1) == 0) {
      iVar2 = iVar1;
    }
    iVar1 = iVar2;
  }
  return iVar1;
}


