/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d9f68; name: FUN_002d9f68
 */


ulong FUN_002d9f68(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = (uint)(param_3 >> 0x20);
  iVar3 = (int)param_3;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar1 = (uint)param_2;
  uVar5 = 0;
  if ((uVar1 != 0) && (iVar3 != 0)) {
    lVar7 = *(long *)(param_1 + 0x58);
    uVar6 = (ulong)uVar2;
    uVar5 = (ulong)uVar4;
    if ((uVar2 != uVar1 * 2) ||
       ((*(uint *)(lVar7 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                           (param_2 & 0xffffffff) << 3)) & 0xfffffff7) != 6)) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        if (uVar2 != 0) {
          do {
            while ((uVar6 & 1) != 0) {
              lVar8 = lVar7 + (uVar6 >> 1) * 8;
              uVar2 = *(uint *)(lVar8 + 4);
              uVar6 = (ulong)uVar2;
              *(int *)(lVar8 + 4) = iVar3;
              if (uVar2 == 0) goto LAB_002da0a4;
            }
            lVar8 = (uVar6 >> 1) * 8;
            uVar2 = *(uint *)(lVar7 + lVar8);
            uVar6 = (ulong)(uVar2 >> 4);
            *(uint *)(lVar7 + lVar8) = uVar2 & 8 | iVar3 << 4 | uVar2 & 7;
          } while (uVar2 >> 4 != 0);
        }
LAB_002da0a4:
        return CONCAT44(uVar4,uVar1);
      }
      if (uVar4 != 0) {
        do {
          while ((uVar5 & 1) == 0) {
            lVar8 = (uVar5 >> 1) * 8;
            uVar4 = *(uint *)(lVar7 + lVar8);
            uVar5 = (ulong)(uVar4 >> 4);
            *(uint *)(lVar7 + lVar8) = uVar4 & 8 | uVar1 << 4 | uVar4 & 7;
            if (uVar4 >> 4 == 0) goto LAB_002da04c;
          }
          lVar8 = lVar7 + (uVar5 >> 1) * 8;
          uVar4 = *(uint *)(lVar8 + 4);
          uVar5 = (ulong)uVar4;
          *(uint *)(lVar8 + 4) = uVar1;
        } while (uVar4 != 0);
      }
LAB_002da04c:
      return CONCAT44(uVar2,iVar3);
    }
    if (uVar2 != 0) {
      do {
        while ((uVar6 & 1) == 0) {
          lVar8 = (uVar6 >> 1) * 8;
          uVar1 = *(uint *)(lVar7 + lVar8);
          uVar6 = (ulong)(uVar1 >> 4);
          *(uint *)(lVar7 + lVar8) = uVar1 & 8 | iVar3 << 4 | uVar1 & 7;
          if (uVar1 >> 4 == 0) goto LAB_002d9fe8;
        }
        lVar8 = lVar7 + (uVar6 >> 1) * 8;
        uVar1 = *(uint *)(lVar8 + 4);
        uVar6 = (ulong)uVar1;
        *(int *)(lVar8 + 4) = iVar3;
      } while (uVar1 != 0);
    }
LAB_002d9fe8:
    uVar5 = param_3;
  }
  return uVar5 & 0xffffffff;
}


