/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f1328; name: FUN_007f1328
 */


void FUN_007f1328(undefined8 param_1,long *param_2,undefined8 *param_3,void *param_4,int *param_5,
                 uint param_6)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  short sVar11;
  ushort uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ushort *puVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  uint *local_90;
  long *local_88;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  
  puVar4 = PTR_DAT_047d0860;
  if ((param_4 == (void *)0x0) || (param_5 == (int *)0x0)) {
    local_78[0] = 0x10407;
  }
  else if (param_2[0xd] == 0) {
    local_78[0] = 0x10408;
  }
  else {
    if (*(short *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
      plVar17 = (long *)0x0;
      uVar18 = 0;
      uVar19 = 0xffffffffffffffff;
      do {
        plVar5 = (long *)(**(code **)(*param_2 + 0x40))(param_2,uVar18);
        if (plVar5 != (long *)0x0) {
          uVar12 = *(ushort *)((long)plVar5 + 0x1a);
          if (uVar12 != 0) {
            uVar8 = 0;
            lVar10 = plVar5[1];
            do {
              uVar6 = *(int *)((long)plVar5 + 0x14) + (uint)uVar8;
              uVar7 = 0;
              if (*(ushort *)(plVar5 + 2) <= uVar6) {
                uVar7 = (uint)*(ushort *)(plVar5 + 2);
              }
              uVar13 = (ulong)(uVar6 - uVar7);
              if (*(char *)(lVar10 + uVar13 * 0x5b8) == '\0') break;
              if (*(char *)(lVar10 + uVar13 * 0x5b8 + 1) != '\0') {
                uVar13 = *(ulong *)(lVar10 + uVar13 * 0x5b8 + 0x5b0);
                if (uVar19 <= uVar13) {
                  uVar13 = uVar19;
                  plVar5 = plVar17;
                }
                plVar17 = plVar5;
                uVar19 = uVar13;
                break;
              }
              if (uVar8 < uVar12) {
                uVar8 = uVar8 + 1;
              }
            } while (uVar8 < uVar12);
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ushort *)(*(long *)puVar4 + 0x50));
      if (plVar17 != (long *)0x0) {
        uVar12 = *(ushort *)((long)plVar17 + 0x1a);
        if (uVar12 != 0) {
          uVar8 = 0;
          do {
            uVar18 = *(int *)((long)plVar17 + 0x14) + (uint)uVar8;
            uVar6 = 0;
            if (*(ushort *)(plVar17 + 2) <= uVar18) {
              uVar6 = (uint)*(ushort *)(plVar17 + 2);
            }
            uVar19 = (ulong)(uVar18 - uVar6);
            if (*(char *)(plVar17[1] + uVar19 * 0x5b8) == '\0') break;
            if (*(char *)(plVar17[1] + uVar19 * 0x5b8 + 1) != '\0') {
              uVar8 = uVar8 + 1;
              if (param_3 == (undefined8 *)0x0) goto LAB_007f15c4;
              goto LAB_007f1498;
            }
            if (uVar8 < uVar12) {
              uVar8 = uVar8 + 1;
            }
          } while (uVar8 < uVar12);
        }
        uVar8 = 0;
        if (param_3 == (undefined8 *)0x0) {
LAB_007f15c4:
          *param_5 = 0;
          lVar10 = plVar17[1];
          uVar18 = 0;
          if ((uint)*(ushort *)(plVar17 + 2) <= *(uint *)((long)plVar17 + 0x14)) {
            uVar18 = (uint)*(ushort *)(plVar17 + 2);
          }
          uVar19 = (ulong)(*(uint *)((long)plVar17 + 0x14) - uVar18);
          puVar16 = (ushort *)(lVar10 + uVar19 * 0x5b8 + 4);
          uVar12 = *puVar16;
          if (uVar12 <= param_6) {
            uVar9 = 0;
            do {
              lVar10 = lVar10 + uVar19 * 0x5b8;
              memcpy(param_4,(void *)(lVar10 + 6),(ulong)uVar12);
              uVar12 = *puVar16;
              iVar1 = *param_5 + (uint)uVar12;
              *param_5 = iVar1;
              if (*(char *)(lVar10 + 1) != '\0') goto LAB_007f1698;
              if (uVar9 < *(ushort *)((long)plVar17 + 0x1a)) {
                uVar9 = uVar9 + 1;
              }
              uVar18 = *(int *)((long)plVar17 + 0x14) + (uint)uVar9;
              uVar6 = 0;
              if (*(ushort *)(plVar17 + 2) <= uVar18) {
                uVar6 = (uint)*(ushort *)(plVar17 + 2);
              }
              uVar19 = (ulong)(uVar18 - uVar6);
              lVar10 = plVar17[1];
              param_4 = (void *)((long)param_4 + (ulong)uVar12);
              puVar16 = (ushort *)(lVar10 + uVar19 * 0x5b8 + 4);
              uVar12 = *puVar16;
            } while (iVar1 + (uint)uVar12 <= param_6);
          }
        }
        else {
LAB_007f1498:
          *param_3 = 0;
          *param_5 = 0;
          lVar10 = plVar17[1];
          uVar18 = 0;
          if ((uint)*(ushort *)(plVar17 + 2) <= *(uint *)((long)plVar17 + 0x14)) {
            uVar18 = (uint)*(ushort *)(plVar17 + 2);
          }
          uVar19 = (ulong)(*(uint *)((long)plVar17 + 0x14) - uVar18);
          lVar15 = lVar10 + uVar19 * 0x5b8;
          *param_3 = *(undefined8 *)(lVar15 + 0x5a8);
          puVar16 = (ushort *)(lVar15 + 4);
          uVar12 = *puVar16;
          if (uVar12 <= param_6) {
            uVar9 = 0;
            do {
              lVar10 = lVar10 + uVar19 * 0x5b8;
              memcpy(param_4,(void *)(lVar10 + 6),(ulong)uVar12);
              uVar12 = *puVar16;
              iVar1 = *param_5 + (uint)uVar12;
              *param_5 = iVar1;
              if (*(char *)(lVar10 + 1) != '\0') goto LAB_007f1698;
              param_4 = (void *)((long)param_4 + (ulong)uVar12);
              if (uVar9 < *(ushort *)((long)plVar17 + 0x1a)) {
                uVar9 = uVar9 + 1;
              }
              uVar18 = *(int *)((long)plVar17 + 0x14) + (uint)uVar9;
              uVar6 = 0;
              if (*(ushort *)(plVar17 + 2) <= uVar18) {
                uVar6 = (uint)*(ushort *)(plVar17 + 2);
              }
              uVar19 = (ulong)(uVar18 - uVar6);
              lVar10 = plVar17[1];
              lVar15 = lVar10 + uVar19 * 0x5b8;
              *param_3 = *(undefined8 *)(lVar15 + 0x5a8);
              puVar16 = (ushort *)(lVar15 + 4);
              uVar12 = *puVar16;
            } while (iVar1 + (uint)uVar12 <= param_6);
          }
        }
        local_78[0] = 0x10404;
        local_68[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
        goto LAB_007f1594;
      }
    }
    local_78[0] = 0x2c09;
  }
  goto LAB_007f1578;
LAB_007f1698:
  local_88 = plVar17 + 1;
  local_90 = (uint *)((long)plVar17 + 0x14);
  uVar12 = *(ushort *)(plVar17 + 2);
  uVar18 = *(uint *)((long)plVar17 + 0x14);
  do {
    do {
      uVar18 = uVar12 + uVar18 + (uint)uVar8;
      do {
        uVar18 = uVar18 - uVar12;
        uVar6 = (uint)uVar12;
      } while (uVar6 <= uVar18);
      uVar9 = *(ushort *)((long)plVar17 + 0x1a);
      if (uVar9 != 0) {
        uVar9 = uVar9 - uVar8;
        *(ushort *)((long)plVar17 + 0x1a) = uVar9;
      }
      uVar3 = *(ushort *)((long)plVar17 + 0x1c);
      if (uVar3 < uVar8) {
        sVar11 = 0;
        *(uint *)((long)plVar17 + 0x14) = uVar18;
        *(undefined2 *)((long)plVar17 + 0x1c) = 0;
        *(ushort *)(plVar17 + 3) = (uVar8 - uVar3) + (short)plVar17[3];
        goto LAB_007f1738;
      }
      sVar11 = uVar3 - uVar8;
      *(short *)((long)plVar17 + 0x1c) = sVar11;
      if (sVar11 == 0) goto LAB_007f170c;
      uVar8 = 1;
    } while (uVar9 == 0);
    uVar8 = 1;
  } while ((*local_88 == 0) || (uVar8 = 1, *(char *)(*local_88 + (ulong)uVar18 * 0x5b8) == '\0'));
LAB_007f170c:
  *local_90 = uVar18;
LAB_007f1738:
  uVar7 = (uint)uVar12;
  if (-1 < (int)plVar17[4]) {
    uVar12 = *(ushort *)(plVar17 + 3);
    iVar1 = (int)plVar17[4] - (uint)uVar12;
    if (0 < iVar1) {
      iVar14 = 0;
      uVar8 = uVar9;
LAB_007f177c:
      do {
        if ((uVar8 != 0) && (*local_88 != 0)) {
          uVar2 = 0;
          if (uVar6 <= uVar18) {
            uVar2 = uVar7;
          }
          if (*(char *)(*local_88 + (ulong)(uVar18 - uVar2) * 0x5b8) != '\0') break;
        }
        do {
          uVar18 = uVar7 + 1 + uVar18;
          do {
            uVar18 = uVar18 - uVar6;
          } while (uVar6 <= uVar18);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar9 = uVar8 - 1;
            *(ushort *)((long)plVar17 + 0x1a) = uVar9;
            uVar8 = uVar9;
          }
          if (sVar11 == 0) {
            uVar12 = uVar12 + 1;
            sVar11 = 0;
            *(uint *)((long)plVar17 + 0x14) = uVar18;
            *(undefined2 *)((long)plVar17 + 0x1c) = 0;
            *(ushort *)(plVar17 + 3) = uVar12;
            iVar14 = iVar14 + 1;
            if (iVar14 != iVar1) goto LAB_007f177c;
            goto LAB_007f1820;
          }
          sVar11 = sVar11 + -1;
          *(short *)((long)plVar17 + 0x1c) = sVar11;
        } while ((sVar11 != 0) &&
                (((uVar8 == 0 || (*local_88 == 0)) ||
                 (*(char *)(*local_88 + (ulong)uVar18 * 0x5b8) == '\0'))));
        *local_90 = uVar18;
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar1);
    }
  }
LAB_007f1820:
  if (*(long *)(param_2[8] + (ulong)*(byte *)((long)plVar17 + 0x24) * 8) == 0) {
    if (uVar9 != 0) {
      uVar12 = 0;
      do {
        uVar6 = 0;
        if (uVar7 <= uVar18 + uVar12) {
          uVar6 = uVar7;
        }
        uVar19 = (ulong)((uVar18 + uVar12) - uVar6);
        if (*(char *)(*local_88 + uVar19 * 0x5b8) == '\0') break;
        if (*(char *)(*local_88 + uVar19 * 0x5b8 + 1) != '\0') goto LAB_007f188c;
        if (uVar12 < uVar9) {
          uVar12 = uVar12 + 1;
        }
      } while (uVar12 < uVar9);
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
LAB_007f188c:
  local_78[0] = 0;
LAB_007f1578:
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
LAB_007f1594:
  FUN_00cbd7c0(param_1,local_78);
  return;
}


