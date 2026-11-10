/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02970270; name: FUN_02970270
 */


undefined8 FUN_02970270(long param_1,short param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = 399;
  if (0 < (int)uVar2) {
    uVar5 = uVar2 - 1;
  }
  while( true ) {
    if ((uVar5 == uVar2) || (sVar3 = *(short *)(param_1 + (ulong)uVar5 * 0xc + 0x14), sVar3 == 0)) {
      return 0;
    }
    if ((sVar3 == param_2) && (*(int *)(param_1 + (ulong)uVar5 * 0xc + 0xc) == param_3)) break;
    uVar4 = uVar5 - 1;
    bVar1 = 0 < (int)uVar5;
    uVar5 = 399;
    if (bVar1) {
      uVar5 = uVar4;
    }
  }
  return 1;
}


