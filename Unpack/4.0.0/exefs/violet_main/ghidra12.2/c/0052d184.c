/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d184; name: FUN_0052d184
 */


void FUN_0052d184(long param_1,int param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  pbVar1 = *(byte **)(param_1 + 8);
  uVar2 = (ulong)param_2;
  if ((*pbVar1 & 1) == 0) {
    uVar4 = (ulong)(*pbVar1 >> 1);
    lVar3 = uVar4 - uVar2;
    if (uVar2 <= uVar4) {
      pbVar1[lVar3 + 1] = 0;
      *pbVar1 = (byte)((int)lVar3 << 1);
      return;
    }
  }
  else {
    uVar4 = *(ulong *)(pbVar1 + 8);
    lVar3 = uVar4 - uVar2;
    if (uVar2 <= uVar4) {
      *(undefined1 *)(*(long *)(pbVar1 + 0x10) + lVar3) = 0;
      *(long *)(pbVar1 + 8) = lVar3;
      return;
    }
  }
  FUN_002ce498(pbVar1,lVar3 - uVar4,0);
  return;
}


