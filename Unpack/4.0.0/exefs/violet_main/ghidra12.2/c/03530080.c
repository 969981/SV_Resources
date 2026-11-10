/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03530080; name: FUN_03530080
 */


void FUN_03530080(long param_1,ulong param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar13 = param_2 & 0xffffffff;
  if (*(char *)(param_1 + 0x35) == '\0') {
    lVar6 = *(long *)(param_4 + 0x28);
    if ((*(byte *)(lVar6 + (uVar13 >> 3 & 0x1fff)) >> (ulong)((uint)param_2 & 7) & 1) == 0) {
      uVar14 = uVar13 >> 3 & 0x1fff;
      *(byte *)(lVar6 + uVar14) = *(byte *)(lVar6 + uVar14) | (byte)(1 << (param_2 & 7));
      *(short *)(param_4 + 0x12) = *(short *)(param_4 + 0x12) + -1;
    }
    if (*(short *)(param_1 + 0x38) == 0) {
      return;
    }
    *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + -1;
    uVar2 = *(uint *)(param_4 + 0x20);
    uVar15 = *(uint *)(param_4 + 0x24);
    if (uVar15 <= uVar2) {
      iVar1 = uVar15 + (uVar15 >> 1);
      if (uVar15 == 0) {
        iVar1 = 1;
      }
      uVar15 = iVar1 + uVar15;
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (0,*(undefined8 *)(param_4 + 0x18),(ulong)uVar15 << 1);
      if (lVar6 == 0) goto LAB_0353039c;
      *(long *)(param_4 + 0x18) = lVar6;
      *(uint *)(param_4 + 0x24) = uVar15;
    }
    if (uVar2 < uVar15) {
      uVar15 = *(uint *)(param_4 + 0x20);
      *(uint *)(param_4 + 0x20) = uVar15 + 1;
      if (*(long *)(param_4 + 0x18) != 0) {
        *(short *)(*(long *)(param_4 + 0x18) + (ulong)uVar15 * 2) = (short)param_2;
        uVar13 = uVar13 >> 3 & 0x1fff;
        *(byte *)(*(long *)(param_4 + 0x30) + uVar13) =
             *(byte *)(*(long *)(param_4 + 0x30) + uVar13) | (byte)(1 << (param_2 & 7));
        *(int *)(param_4 + 0xc) =
             *(int *)(param_4 + 0xc) - *(int *)(*(long *)(*param_3 + (param_2 & 0xffff) * 8) + 0x1c)
        ;
        uVar3 = *(ushort *)(param_1 + 0x38);
        if ((ushort)((short)param_3[1] - 1U) <= *(ushort *)(param_1 + 0x38)) {
          uVar3 = (short)param_3[1] - 1;
        }
        if (*(uint *)(param_4 + 0x20) <= (uint)uVar3) {
          return;
        }
        uVar3 = **(ushort **)(param_4 + 0x18);
        *(byte *)(*(long *)(param_4 + 0x30) + (ulong)(uVar3 >> 3)) =
             *(byte *)(*(long *)(param_4 + 0x30) + (ulong)(uVar3 >> 3)) &
             ((byte)(1 << ((ulong)uVar3 & 7)) ^ 0xff);
        iVar1 = *(int *)(*(long *)(*param_3 + (ulong)uVar3 * 8) + 0x1c);
        puVar9 = *(undefined8 **)(param_4 + 0x18);
        uVar15 = *(uint *)(param_4 + 0x20);
        *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + 1;
        *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + iVar1;
        puVar7 = (undefined8 *)((long)puVar9 + (ulong)uVar15 * 2 + -2);
        if (puVar9 < puVar7) {
          uVar13 = (ulong)uVar15 * 2 - 3;
          uVar15 = ((uint)(uVar13 >> 1) & 0x7fffffff) + 1;
          if ((uVar15 & 3) != 0) {
            lVar6 = -((ulong)uVar15 & 3);
            puVar10 = puVar9;
            do {
              puVar9 = (undefined8 *)((long)puVar10 + 2);
              *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
              bVar5 = lVar6 != -1;
              lVar6 = lVar6 + 1;
              puVar10 = puVar9;
            } while (bVar5);
          }
          if (5 < uVar13) {
            do {
              puVar10 = puVar9 + 1;
              *puVar9 = *(undefined8 *)((long)puVar9 + 2);
              puVar9 = puVar10;
            } while (puVar10 < puVar7);
          }
          uVar15 = *(uint *)(param_4 + 0x20);
        }
        *(uint *)(param_4 + 0x20) = uVar15 - 1;
        return;
      }
    }
  }
  else {
    uVar14 = uVar13 >> 3 & 0x1fff;
    uVar3 = *(ushort *)(param_1 + 0x38);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    *(int *)(param_4 + 0xc) =
         *(int *)(param_4 + 0xc) - *(int *)(*(long *)(*param_3 + (param_2 & 0xffff) * 8) + 0x1c);
    *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + -1;
    *(short *)(param_4 + 0x12) = *(short *)(param_4 + 0x12) + -1;
    bVar4 = (byte)(1 << (param_2 & 7));
    *(byte *)(*(long *)(param_4 + 0x28) + uVar14) =
         *(byte *)(*(long *)(param_4 + 0x28) + uVar14) | bVar4;
    uVar2 = *(uint *)(param_4 + 0x20);
    uVar15 = *(uint *)(param_4 + 0x24);
    if (uVar15 <= uVar2) {
      iVar1 = uVar15 + (uVar15 >> 1);
      if (uVar15 == 0) {
        iVar1 = 1;
      }
      uVar15 = iVar1 + uVar15;
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (0,*(undefined8 *)(param_4 + 0x18),(ulong)uVar15 << 1);
      if (lVar6 == 0) goto LAB_0353039c;
      *(long *)(param_4 + 0x18) = lVar6;
      *(uint *)(param_4 + 0x24) = uVar15;
    }
    if (uVar2 < uVar15) {
      uVar15 = *(uint *)(param_4 + 0x20);
      *(uint *)(param_4 + 0x20) = uVar15 + 1;
      if (*(long *)(param_4 + 0x18) != 0) {
        *(short *)(*(long *)(param_4 + 0x18) + (ulong)uVar15 * 2) = (short)uVar13;
        *(byte *)(*(long *)(param_4 + 0x30) + uVar14) =
             *(byte *)(*(long *)(param_4 + 0x30) + uVar14) | bVar4;
        uVar15 = *(uint *)(param_4 + 0x20);
        if ((ushort)((short)param_3[1] - 1U) <= uVar3) {
          uVar3 = (short)param_3[1] - 1;
        }
        if (uVar15 <= uVar3) {
          return;
        }
        puVar11 = *(ushort **)(param_4 + 0x18);
        uVar3 = *puVar11;
        puVar8 = puVar11 + ((ulong)uVar15 - 1);
        if (puVar11 < puVar8) {
          uVar13 = (ulong)uVar15 * 2 - 3;
          uVar15 = ((uint)(uVar13 >> 1) & 0x7fffffff) + 1;
          if ((uVar15 & 3) != 0) {
            lVar6 = -((ulong)uVar15 & 3);
            puVar12 = puVar11;
            do {
              puVar11 = puVar12 + 1;
              *puVar12 = *puVar11;
              bVar5 = lVar6 != -1;
              lVar6 = lVar6 + 1;
              puVar12 = puVar11;
            } while (bVar5);
          }
          if (5 < uVar13) {
            do {
              puVar12 = puVar11 + 4;
              *(undefined8 *)puVar11 = *(undefined8 *)(puVar11 + 1);
              puVar11 = puVar12;
            } while (puVar12 < puVar8);
          }
          uVar15 = *(uint *)(param_4 + 0x20);
        }
        *(uint *)(param_4 + 0x20) = uVar15 - 1;
        uVar13 = (ulong)(uVar3 >> 3);
        *(byte *)(*(long *)(param_4 + 0x30) + uVar13) =
             *(byte *)(*(long *)(param_4 + 0x30) + uVar13) &
             ((byte)(1 << ((ulong)uVar3 & 7)) ^ 0xff);
        if ((*(byte *)(*(long *)(param_4 + 0x28) + uVar13) >> (ulong)(uVar3 & 7) & 1) == 0) {
          *(int *)(param_4 + 0xc) =
               *(int *)(param_4 + 0xc) +
               *(int *)(*(long *)(*param_3 + (ulong)(uint)uVar3 * 8) + 0x1c);
          *(short *)(param_4 + 0x10) = *(short *)(param_4 + 0x10) + 1;
          return;
        }
        return;
      }
    }
  }
LAB_0353039c:
  *(undefined2 *)(param_4 + 0x12) = 0;
  return;
}


