/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f1acc; name: FUN_017f1acc
 */


int FUN_017f1acc(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if (uVar2 < 0x3d && (1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = -10;
    if (*(short *)(param_1 + 0xb6) != 5) {
      iVar5 = 0;
    }
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  iVar1 = iVar5 + -10;
  if (iVar4 <= iVar3) {
    iVar1 = iVar5;
  }
  return iVar1;
}


