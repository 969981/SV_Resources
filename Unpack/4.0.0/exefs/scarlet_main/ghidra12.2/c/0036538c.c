/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036538c; name: FUN_0036538c
 */


void FUN_0036538c(int *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((char)param_1[2] == '\0') {
      pbVar5 = (byte *)(param_1 + 4);
      if ((*pbVar5 & 1) == 0) {
        if ((*pbVar5 & 0xfe) == 0x2c) {
          lVar3 = 0x116;
LAB_00365420:
          FUN_002cdbb0(pbVar5,lVar3);
        }
      }
      else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
        lVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
        goto LAB_00365420;
      }
      FUN_002cdcec(pbVar5,0x2c);
      if (*param_1 != 0) {
        bVar2 = *pbVar5;
        if ((bVar2 & 1) == 0) goto LAB_003653d4;
LAB_00365444:
        if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) == *(long *)(param_1 + 6) + 1U) {
          lVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
LAB_0036545c:
          FUN_002cdbb0(param_1 + 4,lVar3);
        }
        goto LAB_00365464;
      }
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      if ((*param_1 != 0) && (param_1[1] != 0)) {
        bVar2 = *(byte *)(param_1 + 4);
        if ((bVar2 & 1) != 0) goto LAB_00365444;
LAB_003653d4:
        if ((bVar2 & 0xfe) == 0x2c) {
          lVar3 = 0x116;
          goto LAB_0036545c;
        }
LAB_00365464:
        FUN_002cdcec(param_1 + 4,10);
      }
    }
  }
  FUN_0036550c(param_1);
  bVar2 = *param_2;
  pbVar5 = *(byte **)(param_2 + 0x10);
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  pbVar6 = (byte *)(param_1 + 4);
  if ((*pbVar6 & 1) == 0) {
    lVar3 = 0x16;
    uVar4 = 0x16 - (ulong)(*pbVar6 >> 1);
    if (uVar1 <= uVar4) goto LAB_003654e0;
  }
  else {
    uVar4 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + ~*(ulong *)(param_1 + 6);
    if (uVar1 <= uVar4) goto LAB_003654e0;
    lVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1;
  }
  FUN_002cdbb0(pbVar6,((ulong)(((int)uVar1 - (int)uVar4) + 0xff) & 0xffffff00) + lVar3);
LAB_003654e0:
  if ((bVar2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  FUN_0021d540(pbVar6,pbVar5,uVar1);
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


