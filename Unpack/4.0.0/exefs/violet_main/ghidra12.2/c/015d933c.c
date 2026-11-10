/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d933c; name: FUN_015d933c
 */


void FUN_015d933c(long param_1,long param_2,byte param_3,long *param_4,char param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  undefined1 *puVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  double dVar24;
  int local_88 [6];
  
  if (param_3 != 0) {
    uVar20 = 0;
    uVar23 = (ulong)param_3;
    do {
      local_88[uVar20] = 0;
      plVar21 = *(long **)(*(long *)(param_1 + 0x208) + (ulong)*(byte *)(param_2 + uVar20) * 8);
      uVar10 = (**(code **)(*plVar21 + 0x200))(plVar21);
      if ((uVar10 & 1) == 0) {
        FUN_015d96e8(*(undefined8 *)(param_1 + 0x48));
        uVar11 = FUN_014bb634(*(undefined8 *)(param_1 + 0x50));
        uVar7 = (**(code **)(*plVar21 + 0x98))(plVar21);
        uVar4 = FUN_011e2194(uVar11,uVar7);
        uVar11 = FUN_015d96e0(*(undefined8 *)(param_1 + 0x50));
        uVar5 = FUN_015d9708(uVar11,*(undefined1 *)(param_1 + 0x11c));
        if (uVar5 == (uVar4 & 0xff)) {
          iVar19 = -1;
          goto LAB_015d9514;
        }
        if (param_4 == (long *)0x0) {
LAB_015d9528:
          iVar19 = 0;
        }
        else {
          bVar3 = (**(code **)(*plVar21 + 0x708))(plVar21);
          if (bVar3 == 0) goto LAB_015d9528;
          iVar19 = 0;
          uVar22 = 0;
          do {
            sVar6 = (**(code **)(*plVar21 + 0x690))(plVar21,uVar22);
            if (sVar6 != 0) {
              uVar7 = (**(code **)(*plVar21 + 0x730))(plVar21,uVar22);
              uVar10 = FUN_015d973c();
              if ((uVar10 & 1) != 0) {
                uVar8 = FUN_015d9898(uVar7);
                uVar5 = FUN_015d9950(uVar7);
                uVar4 = 0x3c;
                if (9 < uVar5) {
                  uVar4 = uVar5;
                }
                uVar11 = FUN_015d96d8(*(undefined8 *)(param_1 + 0x50));
                uVar7 = (**(code **)(*param_4 + 0x2f8))(param_4);
                uVar7 = FUN_015d9aac(uVar11,uVar8,uVar7);
                iVar9 = FUN_015d9800(uVar4,uVar7);
                if (iVar19 < iVar9) {
                  local_88[uVar20] = iVar9;
                  iVar19 = iVar9;
                }
              }
            }
            uVar22 = uVar22 + 1;
          } while (bVar3 != uVar22);
        }
        if (((param_5 != '\n') && (uVar10 = FUN_015d9a08(param_1), (uVar10 & 1) != 0)) &&
           (iVar9 = (**(code **)(*plVar21 + 0x658))(plVar21), iVar9 < 0x42ab9)) {
          uVar22 = 0x64000U - iVar9 & 0xfff;
          dVar24 = 0.0;
          if (uVar22 != 0) {
            dVar24 = (double)uVar22 * 0.000244140625;
          }
          local_88[uVar20] =
               iVar19 + (int)(dVar24 + (double)((int)(0x64000U - iVar9) >> 0xc) + 2000.0);
        }
      }
      else {
        iVar19 = -2;
LAB_015d9514:
        local_88[uVar20] = iVar19;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar23);
    lVar12 = uVar23 - 3;
    puVar13 = (undefined1 *)(param_2 + 3);
    piVar14 = local_88 + 3;
    lVar15 = 1;
    uVar20 = 0;
    do {
      uVar10 = uVar20 + 1;
      if (uVar10 < uVar23) {
        iVar19 = local_88[uVar20];
        if (iVar19 < local_88[lVar15]) {
          local_88[uVar20] = local_88[lVar15];
          local_88[lVar15] = iVar19;
          uVar2 = *(undefined1 *)(param_2 + uVar20);
          *(undefined1 *)(param_2 + uVar20) = *(undefined1 *)(param_2 + lVar15);
          *(undefined1 *)(param_2 + lVar15) = uVar2;
        }
        uVar1 = lVar15 + 1;
        if (uVar1 != uVar23) {
          iVar19 = local_88[uVar20];
          if (iVar19 < local_88[uVar1]) {
            local_88[uVar20] = local_88[uVar1];
            local_88[uVar1] = iVar19;
            uVar2 = *(undefined1 *)(param_2 + uVar20);
            *(undefined1 *)(param_2 + uVar20) = *(undefined1 *)(param_2 + uVar1);
            *(undefined1 *)(param_2 + uVar1) = uVar2;
          }
          if (lVar15 + 2U != uVar23) {
            piVar16 = piVar14;
            puVar17 = puVar13;
            lVar18 = lVar12;
            do {
              iVar19 = local_88[uVar20];
              if (iVar19 < *piVar16) {
                local_88[uVar20] = *piVar16;
                *piVar16 = iVar19;
                uVar2 = *(undefined1 *)(param_2 + uVar20);
                *(undefined1 *)(param_2 + uVar20) = *puVar17;
                *puVar17 = uVar2;
              }
              lVar18 = lVar18 + -1;
              puVar17 = puVar17 + 1;
              piVar16 = piVar16 + 1;
            } while (lVar18 != 0);
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar12 = lVar12 + -1;
      puVar13 = puVar13 + 1;
      piVar14 = piVar14 + 1;
      uVar20 = uVar10;
    } while (uVar10 != uVar23);
  }
  return;
}


