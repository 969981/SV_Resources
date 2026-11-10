/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c0a04; name: FUN_034c0a04
 */


void FUN_034c0a04(long param_1,long param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  
  if (*(short *)(param_1 + 0x142) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar12 = *(uint *)(param_2 + 0x24);
  plVar11 = *(long **)(param_1 + 0x110);
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  if (uVar12 <= uVar2) {
    iVar5 = uVar12 + (uVar12 >> 1);
    if (uVar12 == 0) {
      iVar5 = 1;
    }
    uVar12 = iVar5 + uVar12;
    lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                      (0,*(undefined8 *)(param_2 + 0x18),(ulong)uVar12 << 1);
    if (lVar6 == 0) goto LAB_034c0ba8;
    *(long *)(param_2 + 0x18) = lVar6;
    *(uint *)(param_2 + 0x24) = uVar12;
  }
  if (uVar2 < uVar12) {
    uVar12 = *(uint *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = uVar12 + 1;
    if (*(long *)(param_2 + 0x18) != 0) {
      *(short *)(*(long *)(param_2 + 0x18) + (ulong)uVar12 * 2) = (short)param_3;
      uVar9 = (ulong)(param_3 >> 3) & 0x1fff;
      *(byte *)(*(long *)(param_2 + 0x30) + uVar9) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar9) | (byte)(1 << ((ulong)param_3 & 7));
      iVar5 = (**(code **)(*plVar11 + 0x58))(plVar11,param_3);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar5;
      sVar4 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
      uVar1 = *(ushort *)(param_1 + 0x142);
      if ((ushort)(sVar4 - 1U) <= *(ushort *)(param_1 + 0x142)) {
        uVar1 = sVar4 - 1U;
      }
      if (*(uint *)(param_2 + 0x20) <= (uint)uVar1) {
        return;
      }
      uVar9 = (ulong)(**(ushort **)(param_2 + 0x18) >> 3);
      *(byte *)(*(long *)(param_2 + 0x30) + uVar9) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar9) &
           ((byte)(1 << ((ulong)**(ushort **)(param_2 + 0x18) & 7)) ^ 0xff);
      iVar5 = (**(code **)(*plVar11 + 0x58))(plVar11);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar5;
      puVar8 = *(undefined8 **)(param_2 + 0x18);
      uVar12 = *(uint *)(param_2 + 0x20);
      *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
      puVar7 = (undefined8 *)((long)puVar8 + (ulong)uVar12 * 2 + -2);
      if (puVar8 < puVar7) {
        uVar9 = (ulong)uVar12 * 2 - 3;
        uVar12 = ((uint)(uVar9 >> 1) & 0x7fffffff) + 1;
        if ((uVar12 & 3) != 0) {
          lVar6 = -((ulong)uVar12 & 3);
          puVar10 = puVar8;
          do {
            puVar8 = (undefined8 *)((long)puVar10 + 2);
            *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
            bVar3 = lVar6 != -1;
            lVar6 = lVar6 + 1;
            puVar10 = puVar8;
          } while (bVar3);
        }
        if (5 < uVar9) {
          do {
            puVar10 = puVar8 + 1;
            *puVar8 = *(undefined8 *)((long)puVar8 + 2);
            puVar8 = puVar10;
          } while (puVar10 < puVar7);
        }
        uVar12 = *(uint *)(param_2 + 0x20);
      }
      *(uint *)(param_2 + 0x20) = uVar12 - 1;
      return;
    }
  }
LAB_034c0ba8:
  *(undefined2 *)(param_2 + 0x12) = 0;
  return;
}


