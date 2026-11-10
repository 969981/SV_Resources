/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001620a0; name: FUN_001620a0
 */


undefined8 FUN_001620a0(undefined8 *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x51) < 2) {
    if (*(int *)(param_1 + 0x51) == 0) {
      lVar5 = 0;
      *(undefined4 *)(param_1 + 0x52) = 0;
    }
    else {
      lVar5 = (long)*(int *)(param_1 + 0x52);
    }
    *(undefined4 *)(param_1[0x55] + lVar5 * 4) = 0;
  }
  else {
    if (*(int *)((long)param_1 + 0x29c) == 0) {
      return 0;
    }
    if (0x1e < *(int *)((long)param_1 + 0x29c)) {
      return 0;
    }
    *param_1 = 0;
    uVar3 = *(uint *)((long)param_1 + 0x284);
    lVar5 = param_1[0x54];
    param_1[*(int *)(param_1 + 0x53)] = 0;
    if (*(int *)(param_1 + 0x53) < *(int *)((long)param_1 + 0x29c)) {
      uVar7 = 0;
      lVar6 = (long)*(int *)(param_1 + 0x53);
      do {
        lVar8 = lVar6 + 1;
        uVar7 = (ulong)(uint)((*(int *)((long)param_1 + lVar6 * 4 + 0x200) + (int)uVar7) * 2);
        param_1[lVar6 + 1] = uVar7;
        lVar6 = lVar8;
      } while (lVar8 < *(int *)((long)param_1 + 0x29c));
    }
    if (0 < (int)uVar3) {
      lVar6 = param_1[0x55];
      if (uVar3 == 1) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          pbVar1 = (byte *)(lVar5 + lVar8);
          bVar4 = *pbVar1;
          puVar2 = (undefined4 *)(lVar6 + lVar8 * 4);
          lVar8 = lVar8 + 2;
          *puVar2 = (int)param_1[bVar4];
          param_1[bVar4] = param_1[bVar4] + 1;
          bVar4 = pbVar1[1];
          puVar2[1] = (int)param_1[bVar4];
          param_1[bVar4] = param_1[bVar4] + 1;
        } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar8);
        if ((uVar3 & 1) == 0) {
          return 1;
        }
      }
      bVar4 = *(byte *)(lVar5 + lVar8);
      *(int *)(lVar6 + lVar8 * 4) = (int)param_1[bVar4];
      param_1[bVar4] = param_1[bVar4] + 1;
    }
  }
  return 1;
}


