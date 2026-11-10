/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b73048; name: FUN_00b73048
 */


void FUN_00b73048(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_00c0987c(param_2,8);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 8;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    }
    FUN_00c0998c(param_2,lVar4);
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return;
    }
    pbVar3 = pbVar3 + 1;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(pbVar3 + 8);
    if (uVar2 == 0) {
      return;
    }
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_00c0d914(pbVar3,uVar2,1,"SaturdayBleCompleteRequestProto.nonce");
  FUN_00c0c288(2,*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}


