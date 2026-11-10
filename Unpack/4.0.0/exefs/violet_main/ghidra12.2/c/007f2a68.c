/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f2a68; name: FUN_007f2a68
 */


int FUN_007f2a68(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    while (lVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3), lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = (uint)*(ushort *)(lVar1 + 0x1a) + iVar2;
      if (iVar3 == 0x18) {
        return iVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x18);
  return iVar2;
}


