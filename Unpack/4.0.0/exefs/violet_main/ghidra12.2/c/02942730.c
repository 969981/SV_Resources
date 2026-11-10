/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942730; name: FUN_02942730
 */


undefined8 FUN_02942730(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x30);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0xc), iVar1 != 0)) {
    iVar4 = 0;
    do {
      iVar2 = FUN_029427a0(param_1,iVar4);
      if (iVar2 == param_2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return 0;
}


