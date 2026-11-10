/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347eeb8; name: FUN_0347eeb8
 */


int FUN_0347eeb8(long param_1,long *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  int *piVar16;
  ushort *puVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ushort *puVar21;
  byte *pbVar22;
  long lVar23;
  undefined4 *puVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  void *pvVar29;
  uint *puVar30;
  void *__dest;
  uint uVar31;
  void *pvVar32;
  uint uVar33;
  
  lVar15 = *param_2;
  *param_2 = lVar15 + 4;
  iVar11 = *(int *)(lVar15 + 4);
  *param_2 = lVar15 + 8;
  uVar33 = *(uint *)(lVar15 + 8);
  lVar15 = lVar15 + 0xc;
  *param_2 = lVar15;
  if (iVar11 == -1) {
    iVar10 = 1;
  }
  else {
    piVar16 = *(int **)PTR_DAT_047e6f70;
    uVar27 = *(uint *)(PTR_DAT_047e6f70 + 8);
    if ((uVar27 == 0) || (*piVar16 == iVar11)) {
      piVar25 = piVar16;
    }
    else {
      lVar23 = (ulong)uVar27 * 0x20;
      piVar26 = piVar16;
      do {
        lVar23 = lVar23 + -0x20;
        if (lVar23 == 0) goto LAB_0347efe4;
        piVar25 = piVar26 + 8;
        piVar1 = piVar26 + 8;
        piVar26 = piVar25;
      } while (*piVar1 != iVar11);
    }
    if (((piVar25 == piVar16 + (ulong)uVar27 * 8) || (*(code **)(piVar25 + 4) == (code *)0x0)) ||
       (plVar12 = (long *)(**(code **)(piVar25 + 4))(PTR_PTR_047e6fa8), plVar12 == (long *)0x0)) {
LAB_0347efe4:
      *(int *)(param_1 + 0x30) = iVar11;
      iVar10 = 1;
    }
    else {
      iVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_PTR_047e6fa8,lVar15,(ulong)uVar33);
      if (iVar10 == 1) {
        plVar13 = *(long **)(param_1 + 0x38);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x28))(plVar13,PTR_PTR_047e6fa8);
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        iVar10 = 1;
        *(int *)(param_1 + 0x30) = iVar11;
        *(long **)(param_1 + 0x38) = plVar12;
      }
      else {
        (**(code **)(*plVar12 + 0x28))(plVar12,PTR_PTR_047e6fa8);
      }
    }
    lVar15 = *param_2;
  }
  *param_2 = lVar15 + (ulong)uVar33;
  *param_3 = *param_3 - uVar33;
  if (iVar10 != 1) {
    return iVar10;
  }
  puVar17 = (ushort *)((byte *)*param_2 + 1);
  bVar4 = *(byte *)*param_2;
  *param_2 = (long)puVar17;
  if (bVar4 == 0) {
LAB_0347f0f8:
    uVar6 = *puVar17;
    if (uVar6 != 0) {
      lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(uint)uVar6 * 0x28);
      *(long *)(param_1 + 0x50) = lVar15;
      if (lVar15 == 0) goto LAB_0347f5c8;
      *(uint *)(param_1 + 0x5c) = (uint)uVar6;
      puVar17 = (ushort *)*param_2;
    }
    puVar21 = puVar17 + 1;
    uVar6 = *puVar17;
    *param_2 = (long)puVar21;
    if (uVar6 != 0) {
      uVar33 = 0;
      do {
        uVar2 = *(undefined4 *)puVar21;
        *param_2 = (long)(puVar21 + 2);
        uVar7 = puVar21[2];
        *param_2 = (long)((long)puVar21 + 5);
        bVar4 = *(byte *)((long)puVar21 + 5);
        *param_2 = (long)(puVar21 + 3);
        uVar8 = puVar21[3];
        pbVar19 = (byte *)((long)puVar21 + 7);
        *param_2 = (long)pbVar19;
        uVar27 = (byte)uVar8 & 0x7f;
        pbVar22 = pbVar19;
        if ((char)(byte)uVar8 < '\0') {
          do {
            pbVar19 = pbVar22 + 1;
            bVar5 = *pbVar22;
            uVar27 = bVar5 & 0x7f | uVar27 << 7;
            *param_2 = (long)pbVar19;
            pbVar22 = pbVar19;
          } while ((char)bVar5 < '\0');
        }
        iVar11 = *(int *)pbVar19;
        *param_2 = (long)(pbVar19 + 4);
        bVar5 = pbVar19[4];
        *param_2 = (long)(pbVar19 + 5);
        uVar8 = *(ushort *)(pbVar19 + 5);
        uVar18 = (ulong)uVar8;
        *param_2 = (long)(pbVar19 + 7);
        pvVar14 = *(void **)(param_1 + 0x50);
        uVar31 = *(uint *)(param_1 + 0x58);
        if (uVar31 != 0) {
          pvVar29 = pvVar14;
          do {
            if (((uint)*(ushort *)((long)pvVar29 + 6) == (uVar27 & 0xffff)) &&
               (*(int *)((long)pvVar29 + 8) == iVar11)) {
              if (*(long *)((long)pvVar29 + 0x10) != 0) {
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                *(undefined8 *)((long)pvVar29 + 0x10) = 0;
              }
              *(undefined8 *)((long)pvVar29 + 0x18) = 0;
              pvVar14 = *(void **)(param_1 + 0x50);
              uVar31 = *(uint *)(param_1 + 0x58);
              pvVar32 = (void *)((long)pvVar14 + (ulong)uVar31 * 0x28 + -0x28);
              __dest = pvVar29;
              if (pvVar29 < pvVar32) {
                do {
                  pvVar14 = (void *)((long)__dest + 0x28);
                  memcpy(__dest,pvVar14,0x28);
                  __dest = pvVar14;
                } while (pvVar14 < pvVar32);
                uVar31 = *(uint *)(param_1 + 0x58);
                pvVar14 = *(void **)(param_1 + 0x50);
              }
              uVar31 = uVar31 - 1;
              *(uint *)(param_1 + 0x58) = uVar31;
            }
            else {
              pvVar29 = (void *)((long)pvVar29 + 0x28);
            }
          } while ((void *)((long)pvVar14 + (ulong)uVar31 * 0x28) != pvVar29);
        }
        uVar28 = *(uint *)(param_1 + 0x5c);
        if (uVar28 <= uVar31) {
          iVar10 = uVar28 + (uVar28 >> 1);
          if (uVar28 == 0) {
            iVar10 = 1;
          }
          uVar28 = iVar10 + uVar28;
          pvVar14 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,pvVar14,(ulong)uVar28 * 0x28);
          if (pvVar14 == (void *)0x0) goto LAB_0347f5c8;
          *(void **)(param_1 + 0x50) = pvVar14;
          *(uint *)(param_1 + 0x5c) = uVar28;
        }
        if (uVar28 <= uVar31) goto LAB_0347f5c8;
        uVar20 = (ulong)*(uint *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) + 1;
        if (pvVar14 == (void *)0x0) goto LAB_0347f5c8;
        puVar24 = (undefined4 *)((long)pvVar14 + uVar20 * 0x28);
        plVar12 = (long *)(puVar24 + 4);
        *plVar12 = 0;
        puVar24[8] = 1;
        *puVar24 = uVar2;
        *(byte *)(puVar24 + 1) = (byte)uVar7;
        *(undefined8 *)(puVar24 + 6) = 0;
        puVar24[2] = iVar11;
        *(short *)((long)puVar24 + 6) = (short)uVar27;
        *(byte *)((long)puVar24 + 5) = bVar4;
        if (uVar8 != 0) {
          puVar30 = (uint *)((long)pvVar14 + uVar20 * 0x28 + 0x1c);
          *puVar30 = 0;
          puVar24[8] = 1;
          piVar16 = (int *)((long)pvVar14 + uVar20 * 0x28 + 0x18);
          *piVar16 = (int)(uVar18 + 2);
          lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(uVar18 + 2) * 0x14);
          *plVar12 = lVar15;
          if (lVar15 == 0) {
            *piVar16 = 0;
            goto LAB_0347f5c8;
          }
          *puVar30 = (uint)bVar5;
          memcpy((void *)(lVar15 + 0xc),pbVar19 + 7,uVar18 * 0xc);
          *(undefined4 *)(*plVar12 + 8) = 9;
          *(undefined4 *)*plVar12 = 0xff7fffff;
          *(undefined4 *)(*plVar12 + 4) = *(undefined4 *)(*plVar12 + 0x10);
          *(undefined4 *)(*plVar12 + (ulong)(*piVar16 - 1) * 0xc + 8) = 9;
          *(undefined4 *)(*plVar12 + (ulong)(*piVar16 - 1) * 0xc) = 0x7f7fffff;
          *(undefined4 *)(*plVar12 + (ulong)(*piVar16 - 1) * 0xc + 4) =
               *(undefined4 *)(*plVar12 + (ulong)(*piVar16 - 2) * 0xc + 4);
          FUN_0346cdac(plVar12);
        }
        if (*(uint *)(param_1 + 0x68) != 0) {
          pbVar19 = (byte *)(*(long *)(param_1 + 0x60) + 2);
          lVar15 = (ulong)*(uint *)(param_1 + 0x68) << 3;
          do {
            if (uVar27 == *(ushort *)(pbVar19 + -2)) {
              *pbVar19 = bVar4;
              break;
            }
            pbVar19 = pbVar19 + 8;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
        *param_2 = *param_2 + uVar18 * 0xc;
        *param_3 = *param_3 + (uint)uVar8 * -0xc;
        uVar33 = uVar33 + 1;
        if (uVar33 == uVar6) break;
        puVar21 = (ushort *)*param_2;
      } while( true );
    }
    iVar11 = (**(code **)(*(long *)(param_1 + 0x18) + 0x70))
                       ((long *)(param_1 + 0x18),param_2,param_3);
    if (iVar11 != 1) {
      return iVar11;
    }
    uVar6 = *(ushort *)*param_2;
    *param_2 = (long)((ushort *)*param_2 + 1);
    puVar9 = PTR_DAT_047e2fd0;
    if (uVar6 != 0) {
      lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar6 << 3);
      *(long *)(param_1 + 0x60) = lVar15;
      if (lVar15 == 0) goto LAB_0347f5c8;
      uVar33 = 0;
      *(uint *)(param_1 + 0x6c) = (uint)uVar6;
      do {
        pbVar22 = (byte *)*param_2 + 1;
        bVar4 = *(byte *)*param_2;
        uVar27 = bVar4 & 0x7f;
        *param_2 = (long)pbVar22;
        pbVar19 = pbVar22;
        if ((char)bVar4 < '\0') {
          do {
            pbVar22 = pbVar19 + 1;
            bVar4 = *pbVar19;
            uVar27 = bVar4 & 0x7f | uVar27 << 7;
            *param_2 = (long)pbVar22;
            pbVar19 = pbVar22;
          } while ((char)bVar4 < '\0');
        }
        bVar4 = *pbVar22;
        *param_2 = (long)(pbVar22 + 1);
        uVar3 = *(uint *)(pbVar22 + 1);
        *param_2 = (long)(pbVar22 + 5);
        uVar28 = *(uint *)(param_1 + 0x68);
        uVar31 = *(uint *)(param_1 + 0x6c);
        if (uVar28 < uVar31) {
LAB_0347f564:
          if (uVar28 < uVar31) {
            uVar31 = *(uint *)(param_1 + 0x68);
            *(uint *)(param_1 + 0x68) = uVar31 + 1;
            if (*(long *)(param_1 + 0x60) != 0) {
              puVar30 = (uint *)(*(long *)(param_1 + 0x60) + (ulong)uVar31 * 8);
              *puVar30 = uVar27 & 0xffff | (uint)bVar4 << 0x10;
              puVar30[1] = uVar3;
            }
          }
        }
        else {
          iVar11 = uVar31 + (uVar31 >> 1);
          if (uVar31 == 0) {
            iVar11 = 1;
          }
          uVar31 = iVar11 + uVar31;
          lVar15 = (**(code **)(puVar9 + 0x20))
                             (0,*(undefined8 *)(param_1 + 0x60),(ulong)uVar31 << 3);
          if (lVar15 != 0) {
            *(long *)(param_1 + 0x60) = lVar15;
            *(uint *)(param_1 + 0x6c) = uVar31;
            goto LAB_0347f564;
          }
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar6);
    }
    iVar11 = 1;
  }
  else {
    uVar33 = *(uint *)(param_1 + 0x48);
    uVar27 = (uint)bVar4;
    if ((bVar4 <= uVar33 && uVar33 != uVar27) || (uVar27 <= *(uint *)(param_1 + 0x4c))) {
LAB_0347f064:
      *(uint *)(param_1 + 0x48) = uVar27;
      if (bVar4 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar15 = *param_2;
          *param_2 = lVar15 + 1;
          uVar2 = *(undefined4 *)(lVar15 + 1);
          *param_2 = lVar15 + 5;
          *(undefined4 *)(*(long *)(param_1 + 0x40) + uVar18 * 4) = uVar2;
          lVar15 = *param_2;
          *param_2 = lVar15 + 1;
          uVar2 = *(undefined4 *)(lVar15 + 1);
          *param_2 = lVar15 + 5;
          lVar15 = uVar18 * 4;
          uVar18 = uVar18 + 2;
          *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar15 + 4) = uVar2;
        } while (((ulong)bVar4 & 0xfe) != uVar18);
      }
      if ((bVar4 & 1) != 0) {
        lVar15 = *param_2;
        *param_2 = lVar15 + 1;
        uVar2 = *(undefined4 *)(lVar15 + 1);
        *param_2 = lVar15 + 5;
        *(undefined4 *)(*(long *)(param_1 + 0x40) + uVar18 * 4) = uVar2;
      }
      puVar17 = (ushort *)*param_2;
      goto LAB_0347f0f8;
    }
    uVar33 = *(uint *)(param_1 + 0x4c) + (bVar4 - uVar33);
    lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                       (0,*(undefined8 *)(param_1 + 0x40),(ulong)uVar33 << 2);
    if (lVar15 != 0) {
      *(long *)(param_1 + 0x40) = lVar15;
      *(uint *)(param_1 + 0x4c) = uVar33;
      goto LAB_0347f064;
    }
LAB_0347f5c8:
    iVar11 = 0x34;
  }
  return iVar11;
}


