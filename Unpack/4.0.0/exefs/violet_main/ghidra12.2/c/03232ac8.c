/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03232ac8; name: FUN_03232ac8
 */


uint FUN_03232ac8(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  if (*param_1 != 0) {
    if (0 < param_1[0x126]) {
      uVar11 = 0;
      iVar6 = 0;
      uVar10 = 0;
      puVar14 = *(undefined8 **)(param_1 + 0x124);
      uVar13 = 0;
      do {
        uVar5 = (int)((ulong)*puVar14 >> 0x20) - (int)*puVar14;
        uVar8 = uVar5;
        iVar9 = (int)uVar11;
        if ((int)uVar5 <= (int)uVar13) {
          uVar8 = uVar13;
          iVar9 = iVar6;
        }
        iVar6 = iVar9;
        uVar11 = uVar11 + 1;
        uVar10 = (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) + uVar10;
        puVar14 = puVar14 + 8;
        uVar13 = uVar8;
      } while ((uint)param_1[0x126] != uVar11);
      if (0xf < (int)uVar8) {
        plVar1 = *(undefined8 **)(param_1 + 0x124) + (long)iVar6 * 8;
        uVar13 = uVar8 >> 1;
        if (uVar10 >> 3 <= uVar8 >> 1) {
          uVar13 = uVar10 >> 3;
        }
        if ((int)uVar13 <= (int)param_3) {
          uVar13 = param_3;
        }
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + (ulong)uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar5 = (uint)lVar12;
        uVar8 = (uint)((ulong)lVar12 >> 0x20);
        uVar10 = uVar8 - uVar5;
        if (uVar13 + uVar5 <= uVar8) {
          uVar10 = uVar13;
          uVar8 = uVar13 + uVar5;
        }
        if (uVar5 < uVar8) {
          if ((int)param_3 < (int)uVar10) {
            uVar11 = -(ulong)(param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)param_2 << 6;
            *(ulong *)(*(long *)(param_1 + 0x124) + uVar11) = CONCAT44(uVar8,uVar5 + param_3);
            *(uint *)(*(long *)(param_1 + 0x10) + uVar11) = param_2;
          }
          *param_4 = uVar5;
          return uVar10;
        }
        goto LAB_03232b2c;
      }
    }
    *param_1 = 0;
  }
LAB_03232b2c:
  if ((param_1[1] == 0) && (iVar6 = param_1[0x12], 1 < iVar6)) {
    iVar7 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x40);
    iVar9 = 1;
    do {
      iVar2 = 0;
      if (iVar6 <= iVar7 + 1) {
        iVar2 = iVar6;
      }
      iVar7 = (iVar7 + 1) - iVar2;
      plVar1 = (long *)(*(long *)(param_1 + 0x124) + (long)iVar7 * 0x40);
      if ((uint)*plVar1 < (uint)((ulong)*plVar1 >> 0x20)) {
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + (int)param_3;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar10 = (uint)lVar12;
        uVar13 = (uint)((ulong)lVar12 >> 0x20);
        if (uVar10 < uVar13) {
          *(int *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x40) = iVar7;
          *param_4 = uVar10;
          return uVar13 - uVar10;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar6);
  }
  return 0;
}


