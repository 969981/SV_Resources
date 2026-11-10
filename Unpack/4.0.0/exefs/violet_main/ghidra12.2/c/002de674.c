/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002de674; name: FUN_002de674
 */


undefined8 FUN_002de674(long param_1,int param_2,undefined2 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x20);
  if ((((pbVar3 != (byte *)0x0) && (pbVar4 = *(byte **)(pbVar3 + 0x10), pbVar4 != (byte *)0x0)) &&
      (bVar2 = *pbVar3, bVar2 - 3 < 2)) &&
     ((*pbVar4 - 3 < 2 && (((*(ushort *)(pbVar4 + 2) ^ *(ushort *)(pbVar3 + 2)) & 1) == 0)))) {
    if (*pbVar4 == 3) {
      uVar1 = *(undefined4 *)(pbVar4 + 0x18);
      *pbVar4 = 4;
      pbVar4[0x18] = 0;
      pbVar4[0x19] = 0;
      pbVar4[0x1a] = 0;
      pbVar4[0x1b] = 0;
      pbVar4[0x20] = 0;
      pbVar4[0x21] = 0;
      pbVar4[0x22] = 0;
      pbVar4[0x23] = 0;
      pbVar4[0x24] = 0;
      pbVar4[0x25] = 0;
      pbVar4[0x26] = 0;
      pbVar4[0x27] = 0;
      FUN_002e4cd4(pbVar4,uVar1);
      bVar2 = *pbVar3;
    }
    if (bVar2 == 3) {
      FUN_002e4cd4(pbVar4);
    }
    else {
      if (0 < *(int *)(pbVar3 + 0x18)) {
        lVar5 = 0;
        do {
          FUN_002e4cd4(pbVar4,*(undefined4 *)(*(long *)(pbVar3 + 0x20) + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(pbVar3 + 0x18));
      }
      lVar5 = *(long *)(pbVar3 + 0x20);
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      if (lVar5 != 0) {
        FUN_0049e800(lVar5);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar5);
      }
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 0;
      pbVar3[0x25] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
    }
    if (-1 < param_2) {
      *pbVar3 = 3;
      *(int *)(pbVar3 + 0x18) = param_2;
      *(undefined2 *)(pbVar3 + 2) = param_3;
      return 1;
    }
    *(byte **)(param_1 + 0x20) = pbVar4;
    FUN_002e4804(pbVar3);
  }
  return 0;
}


