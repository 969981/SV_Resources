/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034023a0; name: FUN_034023a0
 */


ulong FUN_034023a0(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  undefined2 uVar6;
  bool bVar7;
  uint uVar8;
  ushort uVar9;
  ulong uVar10;
  uint uVar11;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  plVar3 = (long *)(param_1 + 0xb8);
  do {
    *(undefined8 *)(param_1 + 8) = 0x2e00000000;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((*(byte *)(param_2 + 0x42) >> 2 & 1) == 0) {
      uVar8 = FUN_0340211c(param_1,param_2);
      if (uVar8 != 0x2d) break;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x20);
      uVar8 = FUN_0340211c(param_1,param_2);
      if (uVar8 != 0x2d) break;
      if (iVar1 == 0) {
        uVar9 = *(ushort *)(param_1 + 0xd8);
        if (1 < uVar9) {
          uVar9 = uVar9 - 1;
          *(ushort *)(param_1 + 0xd8) = uVar9;
        }
        *(ushort *)(param_1 + 0xd8) = uVar9;
        lVar4 = 0x8e;
        if (uVar9 != 1) {
          lVar4 = 0x82;
        }
        uVar9 = *(ushort *)(param_1 + lVar4);
        *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
        *(uint *)(param_1 + 0x58) = (uint)*(ushort *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x5c) = (uint)uVar9;
        *(undefined4 *)(param_1 + 0x10) = 3;
      }
    }
    iVar1 = **(ushort **)(param_1 + 0xb8) + 2;
    *(int *)(param_1 + 0x70) = iVar1;
    bVar5 = *(byte *)(param_2 + 0x42);
    if ((bVar5 >> 2 & 1) == 0) {
      *(byte *)(param_1 + 0x74) = bVar5 & 1;
      if (*(char *)(param_1 + 0xda) != '\0') {
        if ((bVar5 & 1) != 0) goto LAB_034024b0;
        bVar7 = false;
        goto LAB_034024bc;
      }
LAB_034024c4:
      *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x20) + iVar1;
    }
    else {
      *(undefined1 *)(param_1 + 0x74) = 1;
      if (*(char *)(param_1 + 0xda) == '\0') goto LAB_034024c4;
LAB_034024b0:
      bVar7 = *(int *)(param_2 + 0x20) == 0;
LAB_034024bc:
      *(bool *)(param_1 + 0x74) = bVar7;
    }
    FUN_034050d0(puVar2,*(undefined2 *)(param_1 + 0x8c),*(ushort **)(param_1 + 0xb8),
                 (undefined8 *)(param_1 + 200),param_1 + 0xd0);
    uVar8 = *(uint *)(param_1 + 0xc);
    if (uVar8 == 2) {
LAB_034024f0:
      if (*(char *)(param_1 + 0xda) != '\0') {
LAB_03402504:
        if (*plVar3 != 0) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
          *(undefined1 *)(param_1 + 0xda) = 0;
          *plVar3 = 0;
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0xda) != '\0') goto LAB_03402504;
      if (*(int *)(param_1 + 0x14) != 0) {
        uVar11 = (*(int *)(param_1 + 0x14) - (uint)*(ushort *)*plVar3) - 2;
        *(ulong *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + (ulong)uVar11;
        *(uint *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) - uVar11;
        *(uint *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + uVar11;
        goto LAB_034024f0;
      }
    }
  } while ((*(int *)(param_1 + 0xc) == 0x2b) || (*(int *)(param_1 + 0xc) == 0x2e));
  uVar10 = 0xd00000000;
  uVar11 = 2;
  if ((uVar8 < 0x2f) && ((1L << ((ulong)uVar8 & 0x3f) & 0x600000020000U) != 0)) {
    uVar6 = *(undefined2 *)puVar2;
    *param_4 = *(undefined8 *)(param_1 + 200);
    *(undefined2 *)(param_4 + 2) = uVar6;
    *(undefined2 *)((long)param_4 + 0x12) = uVar6;
    *(short *)(param_4 + 3) = (short)*puVar2;
    if (uVar8 == 0x2e) {
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar10 = 0;
        uVar11 = 0x2e;
      }
      else {
        bVar7 = *(int *)(param_1 + 0x14) != 0;
        uVar11 = 2;
        if (bVar7) {
          uVar11 = 0x2d;
        }
        uVar10 = 0xd00000000;
        if (bVar7) {
          uVar10 = 0;
        }
      }
    }
    else {
      uVar10 = 0;
      uVar11 = uVar8;
    }
  }
  return uVar10 | uVar11;
}


