/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03501418; name: FUN_03501418
 */


long * FUN_03501418(long *param_1,long param_2,byte param_3,long *param_4,byte *param_5)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  
  *param_5 = 0;
  uVar15 = *(uint *)(param_1 + 3);
  uVar16 = (ulong)uVar15;
  bVar3 = false;
  if (*(char *)(param_2 + (ulong)param_3 * 0x30 + 0xbf) == '\0') {
    bVar3 = *(short *)(param_2 + (ulong)param_3 * 0x30 + 0xc4) == 0 &&
            *(short *)(param_2 + 400) == 0;
  }
  if (*(char *)((long)param_1 + 0x24) == '\0') {
    if (*(char *)((long)param_1 + 0x27) == '\0') {
      if (0 < (int)uVar15) {
        bVar5 = false;
        uVar7 = uVar16;
LAB_0350172c:
        uVar15 = *(uint *)(param_4 + 1);
        lVar9 = *param_4;
        lVar6 = lVar9 + (ulong)uVar15 * 0x30;
        uVar8 = uVar7;
        do {
          bVar2 = param_3;
          do {
            bVar12 = bVar2;
            bVar2 = *(byte *)(param_2 + (char)bVar12 + 0x171);
          } while ((int)(char)bVar2 != (uint)bVar12 && (int)(uint)bVar12 <= (int)(char)bVar2);
          uVar16 = (ulong)((int)uVar16 - 1);
          if (*(int *)(*(long *)(param_2 + (ulong)bVar12 * 0x30 + 0xa8) + uVar16 * 0x30 + 0xc) ==
              0x11) {
            lVar10 = lVar9;
            if ((uVar15 != 0) &&
               (lVar11 = *(long *)(*(long *)(*param_1 + uVar16 * 8) + 0x60),
               **(long **)(lVar9 + 0x18) != lVar11)) {
              lVar14 = lVar9;
              lVar13 = (ulong)uVar15 * 0x30;
              do {
                lVar13 = lVar13 + -0x30;
                if (lVar13 == 0) {
                  lVar10 = lVar6;
                  break;
                }
                lVar10 = lVar14 + 0x30;
                puVar18 = (undefined8 *)(lVar14 + 0x48);
                lVar14 = lVar10;
              } while (*(long *)*puVar18 != lVar11);
            }
            if (lVar6 == lVar10) goto LAB_035017ec;
          }
          uVar7 = uVar8 - 1;
          bVar1 = (long)uVar8 < 1;
          uVar8 = uVar7;
          if (uVar7 == 0 || bVar1) goto LAB_035016c4;
        } while( true );
      }
      goto LAB_035016f0;
    }
    uVar16 = (ulong)*(uint *)(param_1 + 1);
    if ((int)*(uint *)(param_1 + 1) < 1) goto LAB_035016f0;
    bVar5 = false;
    uVar7 = uVar16;
    do {
      lVar6 = *param_4;
      uVar16 = (ulong)((int)uVar16 - 1);
      uVar15 = *(uint *)(param_4 + 1);
      lVar9 = lVar6 + (ulong)uVar15 * 0x30;
      if (uVar15 != 0) {
        lVar10 = *(long *)(*(long *)(*param_1 + uVar16 * 8) + 0x60);
        if (**(long **)(lVar6 + 0x18) != lVar10) {
          lVar11 = (ulong)uVar15 * 0x30;
          do {
            lVar11 = lVar11 + -0x30;
            if (lVar11 == 0) {
              lVar6 = lVar9;
              break;
            }
            lVar13 = lVar6 + 0x30;
            puVar18 = (undefined8 *)(lVar6 + 0x48);
            lVar6 = lVar13;
          } while (*(long *)*puVar18 != lVar10);
        }
      }
      if (lVar9 == lVar6) {
        lVar6 = *param_1;
        plVar17 = *(long **)(lVar6 + uVar16 * 8);
        if (plVar17 != (long *)0x0) {
          plVar4 = (long *)plVar17[0xd];
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,PTR_PTR_047e71e0);
            plVar17[0xd] = 0;
          }
          puVar18 = (undefined8 *)plVar17[0xe];
          if (puVar18 != (undefined8 *)0x0) {
            (**(code **)*puVar18)(puVar18);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar18);
            plVar17[0xe] = 0;
          }
          (**(code **)(*plVar17 + 0x28))(plVar17);
          lVar6 = *param_1;
          puVar18 = *(undefined8 **)(lVar6 + uVar16 * 8);
          if (puVar18 != (undefined8 *)0x0) {
            (**(code **)*puVar18)(puVar18);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar18);
            lVar6 = *param_1;
          }
        }
        uVar15 = *(uint *)(param_1 + 1);
        if (1 < uVar15) {
          *(undefined8 *)(lVar6 + uVar16 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar15 * 8 + -8);
          uVar15 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar15 - 1;
        bVar5 = true;
        *(undefined1 *)((long)param_1 + 0x24) = 0;
      }
      uVar8 = uVar7 - 1;
      bVar1 = 0 < (long)uVar7;
      uVar7 = uVar8;
    } while (uVar8 != 0 && bVar1);
LAB_035016c4:
    if (!bVar5) goto LAB_035016f0;
LAB_035016c8:
    if ((int)param_1[1] != 0) goto LAB_035016f0;
    *param_5 = *(byte *)((long)param_1 + 0x27) ^ 1;
  }
  else if ((*(short *)(param_2 + 400) < 1) && (*(short *)((long)param_1 + 0x2c) == 0)) {
    if (0 < (int)uVar15) {
      uVar7 = uVar16;
      do {
        bVar2 = param_3;
        do {
          bVar12 = bVar2;
          bVar2 = *(byte *)(param_2 + (char)bVar12 + 0x171);
        } while ((int)(char)bVar2 != (uint)bVar12 && (int)(uint)bVar12 <= (int)(char)bVar2);
        uVar8 = uVar7 - 1 & 0xffffffff;
        if (*(int *)(*(long *)(param_2 + (ulong)bVar12 * 0x30 + 0xa8) + uVar8 * 0x30 + 0xc) == 0x11)
        {
          lVar6 = param_1[2];
          if (1 < (uint)uVar16) {
            FUN_03504a74(lVar6 + uVar8 * 0x30,lVar6 + uVar16 * 0x30 + -0x30);
            uVar16 = (ulong)*(uint *)(param_1 + 3);
            lVar6 = param_1[2];
          }
          FUN_0350499c(lVar6 + uVar16 * 0x30 + -0x30);
          uVar15 = (int)param_1[3] - 1;
          uVar16 = (ulong)uVar15;
          *(uint *)(param_1 + 3) = uVar15;
        }
        uVar15 = (uint)uVar16;
        bVar5 = 1 < (long)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar5);
    }
    if ((int)param_4[1] != 0 || uVar15 != 0) goto LAB_035016f0;
  }
  else if ((int)param_4[1] != 0) goto LAB_035016f0;
  FUN_03501938(param_1);
LAB_035016f0:
  plVar17 = param_1 + 2;
  if (!bVar3) {
    plVar17 = param_4;
  }
  return plVar17;
LAB_035017ec:
  lVar6 = *param_1;
  plVar17 = *(long **)(lVar6 + uVar16 * 8);
  if (plVar17 != (long *)0x0) {
    plVar4 = (long *)plVar17[0xd];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,PTR_PTR_047e71e0);
      plVar17[0xd] = 0;
    }
    puVar18 = (undefined8 *)plVar17[0xe];
    if (puVar18 != (undefined8 *)0x0) {
      (**(code **)*puVar18)(puVar18);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar18);
      plVar17[0xe] = 0;
    }
    (**(code **)(*plVar17 + 0x28))(plVar17);
    lVar6 = *param_1;
    puVar18 = *(undefined8 **)(lVar6 + uVar16 * 8);
    if (puVar18 != (undefined8 *)0x0) {
      (**(code **)*puVar18)(puVar18);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar18);
      lVar6 = *param_1;
    }
  }
  uVar15 = *(uint *)(param_1 + 1);
  if (1 < uVar15) {
    *(undefined8 *)(lVar6 + uVar16 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar15 * 8 + -8);
    uVar15 = *(uint *)(param_1 + 1);
  }
  lVar6 = param_1[2];
  *(uint *)(param_1 + 1) = uVar15 - 1;
  uVar7 = (ulong)*(uint *)(param_1 + 3);
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  if (1 < *(uint *)(param_1 + 3)) {
    FUN_03504a74(lVar6 + uVar16 * 0x30,lVar6 + uVar7 * 0x30 + -0x30);
    uVar7 = (ulong)*(uint *)(param_1 + 3);
    lVar6 = param_1[2];
  }
  FUN_0350499c(lVar6 + uVar7 * 0x30 + -0x30);
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  bVar5 = true;
  uVar7 = uVar8 - 1;
  if (uVar7 == 0 || (long)uVar8 < 1) goto LAB_035016c8;
  goto LAB_0350172c;
}


