/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352f160; name: FUN_0352f160
 */


uint FUN_0352f160(long param_1,long *param_2,char *param_3)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int local_38;
  uint local_34;
  
  lVar17 = *param_2;
  if (*(uint *)(lVar17 + 0x30) < 2) {
    *param_3 = '\0';
    lVar14 = param_2[2];
    if (lVar14 != 0) {
      if ((short)*(ushort *)(lVar14 + 10) + 1 != *(int *)(*param_2 + 0x28)) {
        uVar16 = *(ushort *)(lVar14 + 10) + 1;
        *(short *)(lVar14 + 10) = (short)uVar16;
        goto joined_r0x0352f2c8;
      }
      *(undefined2 *)(lVar14 + 10) = 0;
      if ((*(byte *)((long)param_2 + 10) & 1) != 0) {
        if ((*(byte *)((long)param_2 + 10) >> 1 & 1) != 0) goto joined_r0x0352f2d4;
        sVar5 = (short)param_2[1] + -1;
        *(short *)(param_2 + 1) = sVar5;
        if (sVar5 != 0) {
          uVar16 = (uint)*(ushort *)(lVar14 + 10);
          goto joined_r0x0352f2c8;
        }
      }
    }
LAB_0352f2f8:
    *param_3 = '\x01';
  }
  else if (*(uint *)(lVar17 + 0x30) - 2 < 2) {
    *param_3 = '\0';
    lVar14 = param_2[2];
    if (lVar14 != 0) {
      lVar15 = *param_2;
      plVar2 = (long *)(lVar15 + 0x20);
      if (*(short *)(lVar14 + 0x12) == 0) {
        if (((*(byte *)((long)param_2 + 10) & 1) == 0) ||
           (((*(byte *)((long)param_2 + 10) >> 1 & 1) == 0 &&
            (sVar5 = (short)param_2[1] + -1, *(short *)(param_2 + 1) = sVar5, sVar5 == 0))))
        goto LAB_0352f2f8;
        *(short *)(lVar14 + 0x12) = (short)*(undefined4 *)(lVar15 + 0x28);
        uVar16 = *(uint *)(lVar15 + 0x28);
        memset(*(void **)(lVar14 + 0x28),0,(ulong)uVar16 + 7 >> 3);
        iVar10 = *(int *)(lVar14 + 8);
        sVar5 = (short)uVar16;
        *(short *)(lVar14 + 0x10) = sVar5;
        *(int *)(lVar14 + 0xc) = iVar10;
        uVar16 = *(uint *)(lVar14 + 0x20);
        if (uVar16 != 0) {
          puVar12 = *(ushort **)(lVar14 + 0x18);
          lVar11 = (ulong)uVar16 * 2 + -2;
          if (((uint)lVar11 >> 1 & 1) == 0) {
            iVar10 = iVar10 - *(int *)(*(long *)(*plVar2 + (ulong)*puVar12 * 8) + 0x1c);
            *(int *)(lVar14 + 0xc) = iVar10;
            puVar9 = puVar12 + 1;
          }
          else {
            puVar9 = puVar12;
          }
          if (lVar11 != 0) {
            do {
              iVar10 = iVar10 - *(int *)(*(long *)(*plVar2 + (ulong)*puVar9 * 8) + 0x1c);
              *(int *)(lVar14 + 0xc) = iVar10;
              puVar1 = puVar9 + 1;
              puVar9 = puVar9 + 2;
              iVar10 = iVar10 - *(int *)(*(long *)(*plVar2 + (ulong)*puVar1 * 8) + 0x1c);
              *(int *)(lVar14 + 0xc) = iVar10;
            } while (puVar9 != puVar12 + uVar16);
          }
        }
        *(short *)(lVar14 + 0x10) = sVar5 - (short)uVar16;
      }
      if (*(char *)(lVar15 + 0x34) == '\0') {
        uVar3 = *(ushort *)(lVar14 + 0x10);
        if (uVar3 == 0) goto LAB_0352f3dc;
        lVar11 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        *(long *)PTR_DAT_047e7068 = lVar11;
        uVar16 = 0;
        uVar8 = (uint)((ulong)lVar11 >> 0x21);
        if (uVar3 != 0) {
          uVar16 = uVar8 / uVar3;
        }
        uVar6 = 0;
        iVar10 = -1;
        do {
          uVar7 = (uint)uVar6;
          if (*(char *)(lVar15 + 0x35) == '\0') {
            if ((*(short *)(lVar15 + 0x38) == 0) ||
               ((*(byte *)(*(long *)(lVar14 + 0x30) + (uVar6 >> 3 & 0x1fff)) >> (ulong)(uVar7 & 7) &
                1) == 0)) goto LAB_0352f3ac;
          }
          else {
            uVar6 = uVar6 >> 3 & 0x1fff;
            uVar4 = 1 << (ulong)(uVar7 & 7);
            if (((uVar4 & *(byte *)(*(long *)(lVar14 + 0x28) + uVar6)) == 0) &&
               ((uVar4 & *(byte *)(*(long *)(lVar14 + 0x30) + uVar6)) == 0)) {
LAB_0352f3ac:
              iVar10 = iVar10 + 1;
            }
          }
          uVar6 = (ulong)(uVar7 + 1);
        } while (iVar10 < (int)(uVar8 - uVar16 * uVar3));
      }
      else {
        uVar16 = *(uint *)(lVar14 + 0xc);
        if (uVar16 == 0) {
LAB_0352f3dc:
          uVar16 = 0;
          *(undefined2 *)(lVar14 + 0x12) = 0;
          goto joined_r0x0352f2c8;
        }
        lVar11 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        *(long *)PTR_DAT_047e7068 = lVar11;
        uVar8 = 0;
        uVar7 = (uint)((ulong)lVar11 >> 0x21);
        if (uVar16 != 0) {
          uVar8 = uVar7 / uVar16;
        }
        uVar6 = 0;
        iVar10 = -1;
        do {
          if (*(char *)(lVar15 + 0x35) == '\0') {
            if ((*(short *)(lVar15 + 0x38) == 0) ||
               ((*(byte *)(*(long *)(lVar14 + 0x30) + (uVar6 >> 3 & 0x1fff)) >>
                 (ulong)((uint)uVar6 & 7) & 1) == 0)) goto LAB_0352f25c;
          }
          else {
            uVar13 = uVar6 >> 3 & 0x1fff;
            uVar4 = 1 << (ulong)((uint)uVar6 & 7);
            if (((uVar4 & *(byte *)(*(long *)(lVar14 + 0x28) + uVar13)) == 0) &&
               ((uVar4 & *(byte *)(*(long *)(lVar14 + 0x30) + uVar13)) == 0)) {
LAB_0352f25c:
              iVar10 = *(int *)(*(long *)(*plVar2 + uVar6 * 8) + 0x1c) + iVar10;
            }
          }
          uVar6 = uVar6 + 1;
        } while (iVar10 < (int)(uVar7 - uVar8 * uVar16));
      }
      uVar16 = (int)uVar6 - 1;
      FUN_03530080(lVar15,uVar16,plVar2,lVar14);
      goto joined_r0x0352f2c8;
    }
    goto LAB_0352f2f8;
  }
joined_r0x0352f2d4:
  uVar16 = 0;
joined_r0x0352f2c8:
  if ((lVar17 != 0) && (*param_3 == '\0')) {
    local_34 = uVar16 & 0xffff;
    uVar8 = *(uint *)(lVar17 + 0x28);
    local_38 = 0;
    FUN_034b39fc(*(undefined8 *)PTR_DAT_047e6f38,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(lVar17 + 0x10),uVar8,&local_34,&local_38);
    if (uVar8 <= local_34) {
      local_34 = uVar16;
    }
    *param_3 = local_38 != 0;
    uVar16 = local_34;
  }
  return uVar16;
}


