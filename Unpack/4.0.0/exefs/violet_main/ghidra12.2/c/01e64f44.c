/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e64f44; name: FUN_01e64f44
 */


long FUN_01e64f44(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x914);
  iVar5 = -0x7b;
  if (iVar2 != (short)iVar2) {
    iVar5 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar2 != (char)iVar2) {
    iVar1 = iVar5;
  }
  if (iVar2 + 0x40U < 0xc0) {
    iVar1 = iVar2;
  }
  lVar3 = FUN_0111b030(iVar1);
  iVar5 = (int)*(char *)(param_1 + 0x918);
  if (iVar5 < 0) {
    iVar5 = -0x80;
  }
  lVar4 = FUN_0111b030(iVar5);
  return lVar3 + lVar4 + 0x91e;
}


