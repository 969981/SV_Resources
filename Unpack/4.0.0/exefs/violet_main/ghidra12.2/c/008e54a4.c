/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e54a4; name: FUN_008e54a4
 */


long FUN_008e54a4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar4 = iVar2;
  if (iVar2 < 2) {
    iVar4 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  while( true ) {
    iVar1 = 0;
    if (iVar3 + 1 < iVar2) {
      iVar1 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x78) = iVar1;
    if (*(long *)(*(long *)(param_1 + 0xa8) + (long)iVar1 * 0x840 + 0x98) == 0) break;
    iVar4 = iVar4 + -1;
    iVar3 = iVar1;
    if (iVar4 == 0) {
      FUN_008d43e0("There is no available Emitter instance.\n");
      return 0;
    }
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  return *(long *)(param_1 + 0xa8) + (long)iVar1 * 0x840;
}


