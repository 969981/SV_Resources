/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300ed80; name: FUN_0300ed80
 */


void FUN_0300ed80(long param_1,long param_2,undefined4 param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte local_70;
  undefined4 local_6c;
  
  lVar9 = *(long *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0x2c);
  if (*(int *)(param_2 + 0x28) == 0) {
    return;
  }
  uVar4 = *(uint *)(lVar9 + 8);
  uVar1 = uVar2 + 1;
  if ((~uVar4 & 0xffffff) == 0) {
    uVar10 = 0;
    if (uVar1 < 2) {
      uVar2 = 0;
    }
    do {
      if (uVar2 == uVar10) {
        return;
      }
      uVar10 = uVar10 + 1;
      uVar4 = *(uint *)(lVar9 + (uVar10 & 0xffffffff) * 0x10 + 8);
    } while ((~uVar4 & 0xffffff) == 0);
    if ((int)uVar10 == -1) {
      return;
    }
  }
  else {
    uVar10 = 0;
  }
  bVar3 = (byte)param_5;
  do {
    lVar8 = *(long *)(*(long *)(param_2 + 8) + (ulong)(uVar4 & 0xffffff) * 0x10);
    uVar5 = (ulong)*(uint *)(lVar8 + 0x148) & 0xffffff;
    if ((((((uint)uVar5 != 0xffffff) && ((uint)uVar5 < *(uint *)(*(long *)(lVar8 + 0x138) + 0x40)))
         && (lVar6 = *(long *)(*(long *)(lVar8 + 0x138) + 0x38),
            (*(byte *)(lVar6 + uVar5 * 0xc0 + 0x54) & 3) != 0)) &&
        ((*(uint *)(lVar6 + uVar5 * 0xc0 + 0x50) == *(uint *)(lVar8 + 0x148) &&
         ((*(byte *)(lVar6 + uVar5 * 0xc0 + 0x88) & 1) != 0)))) &&
       (iVar12 = *(int *)(lVar8 + 0x15d4), iVar12 != 0)) {
      uStack_78 = param_4[1];
      uStack_80 = *param_4;
      fVar17 = (float)((ulong)uStack_78 >> 0x20);
      uStack_88 = CONCAT44(fVar17,fVar17);
      local_90 = param_4[2];
      fVar14 = (float)uStack_80;
      fVar15 = (float)((ulong)uStack_80 >> 0x20);
      fVar16 = (float)uStack_78;
      fVar11 = (float)local_90;
      fVar13 = (float)((ulong)local_90 >> 0x20);
      local_70 = bVar3;
      local_6c = param_3;
      if ((param_5 >> 2 & 1) == 0) {
        iVar18 = -(uint)((float)*(undefined8 *)(lVar8 + 0x1600) <= fVar14);
        iVar19 = -(uint)((float)((ulong)*(undefined8 *)(lVar8 + 0x1600) >> 0x20) <= fVar15);
        iVar20 = -(uint)((float)*(undefined8 *)(lVar8 + 0x1608) <= fVar16);
        iVar21 = -(uint)(fVar11 <= (float)*(undefined8 *)(lVar8 + 0x1610));
        iVar22 = -(uint)(fVar13 <= (float)((ulong)*(undefined8 *)(lVar8 + 0x1610) >> 0x20));
        iVar23 = -(uint)(fVar17 <= (float)*(undefined8 *)(lVar8 + 0x1618));
        if ((CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
                      (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                      (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                      CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                               (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                               (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                               CONCAT11((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar19 >> 8) &
                                        (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar18 >> 8) &
                                        (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar20 >> 8),
                                        (byte)iVar22 & (byte)iVar19 & (byte)iVar21 & (byte)iVar18 &
                                        (byte)iVar23 & (byte)iVar20))) != 0 && 0 < iVar12) &&
           (((param_5 >> 2 & 1) == 0 || (*(char *)(lVar8 + 0x15de) != '\0')))) {
          lVar6 = lVar6 + uVar5 * 0xc0;
          iVar12 = -(uint)(fVar11 <= (float)*(undefined8 *)(lVar6 + 0x60));
          iVar18 = -(uint)(fVar13 <= (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20));
          iVar19 = -(uint)(fVar17 <= (float)*(undefined8 *)(lVar6 + 0x68));
          iVar20 = -(uint)((float)*(undefined8 *)(lVar6 + 0x70) <= fVar14);
          iVar21 = -(uint)((float)((ulong)*(undefined8 *)(lVar6 + 0x70) >> 0x20) <= fVar15);
          iVar22 = -(uint)((float)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 0x20) <= fVar16);
          if (CONCAT13((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                       (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar12 >> 0x18) &
                       (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                       CONCAT12((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                                (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar12 >> 0x10) &
                                (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                                CONCAT11((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar18 >> 8) &
                                         (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar12 >> 8) &
                                         (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar19 >> 8),
                                         (byte)iVar21 & (byte)iVar18 & (byte)iVar20 & (byte)iVar12 &
                                         (byte)iVar22 & (byte)iVar19))) != 0) {
            *(undefined1 *)(lVar8 + 0x16f0) = 1;
            local_70 = bVar3 | 8;
          }
          if ((param_5 >> 2 & 1) != 0) goto LAB_0300f040;
LAB_0300ef60:
          FUN_03009350(lVar8 + 0x16d0,&local_90);
        }
      }
      else {
        lVar7 = *(long *)(param_1 + 0x38) + uVar5 * 0xc0;
        fVar24 = *(float *)(*(long *)(lVar8 + 0x18) + 0x28);
        fVar24 = fVar24 + fVar24;
        iVar21 = -(uint)((float)*(undefined8 *)(lVar7 + 0x70) - fVar24 <= fVar14);
        iVar22 = -(uint)((float)((ulong)*(undefined8 *)(lVar7 + 0x70) >> 0x20) - fVar24 <= fVar15);
        iVar23 = -(uint)((float)((ulong)*(undefined8 *)(lVar7 + 0x68) >> 0x20) - fVar24 <= fVar16);
        iVar18 = -(uint)(fVar11 <= (float)*(undefined8 *)(lVar7 + 0x60) + fVar24);
        iVar19 = -(uint)(fVar13 <= (float)((ulong)*(undefined8 *)(lVar7 + 0x60) >> 0x20) + fVar24);
        iVar20 = -(uint)(fVar17 <= (float)*(undefined8 *)(lVar7 + 0x68) + fVar24);
        if ((CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                      (byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar21 >> 0x18) &
                      (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                      CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                               (byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar21 >> 0x10) &
                               (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                               CONCAT11((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar22 >> 8) &
                                        (byte)((uint)iVar18 >> 8) & (byte)((uint)iVar21 >> 8) &
                                        (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar23 >> 8),
                                        (byte)iVar19 & (byte)iVar22 & (byte)iVar18 & (byte)iVar21 &
                                        (byte)iVar20 & (byte)iVar23))) != 0 && 0 < iVar12) &&
           (((param_5 >> 2 & 1) == 0 || (*(char *)(lVar8 + 0x15de) != '\0')))) {
          lVar6 = lVar6 + uVar5 * 0xc0;
          iVar12 = -(uint)(fVar11 <= (float)*(undefined8 *)(lVar6 + 0x60));
          iVar18 = -(uint)(fVar13 <= (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20));
          iVar19 = -(uint)(fVar17 <= (float)*(undefined8 *)(lVar6 + 0x68));
          iVar20 = -(uint)((float)*(undefined8 *)(lVar6 + 0x70) <= fVar14);
          iVar21 = -(uint)((float)((ulong)*(undefined8 *)(lVar6 + 0x70) >> 0x20) <= fVar15);
          iVar22 = -(uint)((float)((ulong)*(undefined8 *)(lVar6 + 0x68) >> 0x20) <= fVar16);
          if (CONCAT13((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                       (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar12 >> 0x18) &
                       (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                       CONCAT12((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                                (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar12 >> 0x10) &
                                (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                                CONCAT11((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar18 >> 8) &
                                         (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar12 >> 8) &
                                         (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar19 >> 8),
                                         (byte)iVar21 & (byte)iVar18 & (byte)iVar20 & (byte)iVar12 &
                                         (byte)iVar22 & (byte)iVar19))) != 0) {
            *(undefined1 *)(lVar8 + 0x16f0) = 1;
            local_70 = bVar3 | 8;
          }
          if ((param_5 >> 2 & 1) == 0) goto LAB_0300ef60;
LAB_0300f040:
          iVar12 = *(int *)(lVar8 + 0x16e8);
          lVar6 = (long)iVar12;
          if ((int)(*(uint *)(lVar8 + 0x16ec) & 0x7fffffff) <= iVar12) {
            FUN_0300a094(lVar8 + 0x16e0,PTR_PTR_047d1a50,lVar6 + 1);
            iVar12 = *(int *)(lVar8 + 0x16e8);
          }
          memcpy((void *)(*(long *)(lVar8 + 0x16e0) + (long)iVar12 * 0x30),&local_90,0x30);
          *(int *)(lVar8 + 0x16e8) = (int)(lVar6 + 1);
        }
      }
    }
    do {
      uVar2 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar2;
      if (uVar1 <= uVar2) {
        return;
      }
      uVar4 = *(uint *)(lVar9 + (ulong)uVar2 * 0x10 + 8);
    } while ((~uVar4 & 0xffffff) == 0);
  } while( true );
}


