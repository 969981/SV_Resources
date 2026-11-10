/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004816d0; name: FUN_004816d0
 */


undefined8 FUN_004816d0(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = FUN_004807b0();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar5 = *(int *)(lVar2 + 0x240);
    if (*(int *)(lVar2 + 0x244) == iVar5) {
      return 0;
    }
    while( true ) {
      uVar1 = *(uint *)(lVar2 + (long)iVar5 * 4);
      if ((uVar1 & 1) != 0) break;
      iVar4 = iVar5 + -1;
      if (iVar5 < 1) {
        iVar4 = 0xf;
      }
      iVar5 = iVar4;
      if (*(int *)(lVar2 + 0x244) == iVar4) {
        return 0;
      }
    }
    *(uint *)(lVar2 + (long)iVar5 * 4) = uVar1 & 0xfffffffe;
    uVar3 = 1;
  }
  return uVar3;
}


