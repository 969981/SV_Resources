/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036550c; name: FUN_0036550c
 */


void FUN_0036550c(int *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 9) != '\0') {
    pbVar4 = (byte *)(param_1 + 4);
    if ((*pbVar4 & 1) == 0) {
      if ((*pbVar4 & 0xfe) != 0x2c) goto LAB_0036563c;
      lVar1 = 0x116;
    }
    else {
      if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) != *(long *)(param_1 + 6) + 1U)
      goto LAB_0036563c;
      lVar1 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
    }
    FUN_002cdbb0(pbVar4,lVar1);
LAB_0036563c:
    FUN_002cdcec(pbVar4,0x20);
    return;
  }
  uVar5 = param_1[1] * *param_1;
  if (0x3f < uVar5) {
    pbVar4 = (byte *)(param_1 + 4);
    do {
      if ((*pbVar4 & 1) == 0) {
        uVar2 = 0x16 - (ulong)(*pbVar4 >> 1);
        lVar1 = 0x16;
        if (uVar2 < 0x40) {
LAB_00365578:
          FUN_002cdbb0(pbVar4,((ulong)(0x13f - (int)uVar2) & 0xffffff00) + lVar1);
        }
      }
      else {
        uVar2 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + ~*(ulong *)(param_1 + 6);
        if (uVar2 < 0x40) {
          lVar1 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1;
          goto LAB_00365578;
        }
      }
      FUN_0021d540(pbVar4,&DAT_03cd76a2,0x40);
      uVar5 = uVar5 - 0x40;
    } while (0x3f < uVar5);
  }
  if (uVar5 == 0) {
    return;
  }
  uVar2 = (ulong)uVar5;
  pbVar4 = (byte *)(param_1 + 4);
  if ((*pbVar4 & 1) == 0) {
    lVar1 = 0x16;
    uVar3 = 0x16 - (ulong)(*pbVar4 >> 1);
    if (uVar2 <= uVar3) goto LAB_0036568c;
  }
  else {
    uVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + ~*(ulong *)(param_1 + 6);
    if (uVar2 <= uVar3) goto LAB_0036568c;
    lVar1 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1;
  }
  FUN_002cdbb0(pbVar4,((ulong)((uVar5 - (int)uVar3) + 0xff) & 0xffffff00) + lVar1);
LAB_0036568c:
  FUN_0021d540(pbVar4,(long)&DAT_03cd76e2 - uVar2,uVar2);
  return;
}


