/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02104ce4; name: FUN_02104ce4
 */


int FUN_02104ce4(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  uVar3 = FUN_01a375b0(param_1 + 0x3c8);
  uVar3 = uVar3 & 0xff;
  iVar2 = uVar3 - *(uint *)(param_1 + 0x58);
  if ((uVar3 < *(uint *)(param_1 + 0x58) || iVar2 == 0) || uVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2 + iVar1;
}


