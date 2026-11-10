/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb0a40; name: FUN_00cb0a40
 */


void FUN_00cb0a40(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  puVar9 = PTR_DAT_047d19f0;
  if (*(char *)(param_1 + 0x100) == '\x02') {
    FUN_016c5c2c();
    return;
  }
  if (0 < (int)param_3) {
    uVar13 = 0;
    plVar1 = (long *)(param_1 + 200);
    do {
      puVar2 = (undefined8 *)
               (param_1 + 0x48 +
               (ulong)*(ushort *)(param_2 + uVar13 * 2) * 0x40 + *(long *)(param_1 + 0x48));
      uStack_60 = puVar2[2];
      uStack_58 = puVar2[3] & 0xffffffff;
      fVar15 = (float)*puVar2;
      fVar19 = (float)((ulong)*puVar2 >> 0x20);
      fVar24 = fVar19 + fVar19;
      fVar21 = (float)puVar2[1];
      fVar25 = fVar21 + fVar21;
      fVar23 = (float)((ulong)puVar2[1] >> 0x20);
      fVar26 = (fVar15 + fVar15) * fVar15;
      fVar16 = (fVar15 + fVar15) * fVar23;
      fVar21 = 1.0 - fVar21 * fVar25;
      fVar32 = fVar25 * fVar19 - fVar16;
      fVar17 = fVar25 * fVar15 + fVar24 * fVar23;
      uStack_78 = CONCAT44(fVar17,fVar25 * fVar19 + fVar16);
      uStack_88 = CONCAT44(fVar32,fVar25 * fVar15 - fVar24 * fVar23);
      local_70 = CONCAT44(fVar32,fVar17);
      local_90 = CONCAT44(fVar24 * fVar15 + fVar25 * fVar23,fVar21 - fVar24 * fVar19);
      uStack_80 = CONCAT44(fVar21 - fVar26,fVar24 * fVar15 - fVar25 * fVar23);
      uStack_68 = (ulong)(uint)((1.0 - fVar26) - fVar24 * fVar19);
      lVar12 = puVar2[6];
      lVar11 = 0;
      if (lVar12 != 0) {
        lVar11 = lVar12 + (long)(puVar2 + 6);
      }
      if ((*(byte *)((long)puVar2 + 0x1e) >> 3 & 1) == 0) {
        (**(code **)(*(long *)puVar9 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0x18))
                  (lVar11,&local_90,local_c0);
      }
      else {
        local_a0 = puVar2[4];
        uStack_98 = CONCAT44(0x3f800000,(int)puVar2[5]);
        FUN_02f07fe8(lVar11,&local_90,&local_a0,(*(byte *)((long)puVar2 + 0x1e) >> 5 ^ 0xff) & 1,
                     local_c0);
      }
      lVar11 = 0;
      if (*plVar1 != 0) {
        lVar11 = *plVar1 + (long)plVar1;
      }
      puVar2 = (undefined8 *)(lVar11 + (ulong)*(ushort *)((long)puVar2 + 0x1c) * 0x20);
      uVar14 = *(uint *)((long)puVar2 + 0xc);
      puVar2[1] = CONCAT44(uVar14,(int)local_c0[1]);
      *puVar2 = local_c0[0];
      puVar2[3] = CONCAT44(*(undefined4 *)((long)puVar2 + 0x1c),(int)uStack_a8);
      puVar2[2] = local_b0;
      uVar10 = (ulong)(ushort)uVar14;
      if ((uVar14 & 0xffff) != 0) {
        lVar11 = *plVar1;
        do {
          lVar12 = 0;
          if (lVar11 != 0) {
            lVar12 = lVar11 + (long)plVar1;
          }
          puVar2 = (undefined8 *)(lVar12 + (uVar10 & 0xffff) * 0x20);
          pauVar3 = (undefined1 (*) [16])(lVar12 + (ulong)*(ushort *)((long)puVar2 + 0x1c) * 0x20);
          pauVar4 = (undefined1 (*) [16])(lVar12 + (ulong)*(ushort *)((long)puVar2 + 0x1e) * 0x20);
          auVar27._0_12_ = SUB1612(pauVar3[1],0);
          auVar27._12_4_ = 0;
          uVar8 = *(undefined8 *)(pauVar4[1] + 8);
          auVar30 = NEON_fmin(*pauVar3,*pauVar4,4);
          auVar28[9] = (char)((ulong)uVar8 >> 8);
          auVar28._0_9_ = *(unkbyte9 *)pauVar4[1];
          auVar28[10] = (char)((ulong)uVar8 >> 0x10);
          auVar28[0xb] = (char)((ulong)uVar8 >> 0x18);
          auVar28._12_4_ = 0;
          auVar28 = NEON_fmax(auVar27,auVar28,4);
          iVar5 = -(uint)((float)*puVar2 == auVar30._0_4_);
          iVar6 = -(uint)((float)((ulong)*puVar2 >> 0x20) == auVar30._4_4_);
          iVar7 = -(uint)((float)puVar2[1] == auVar30._8_4_);
          auVar31._0_12_ = auVar30._0_12_;
          auVar31._12_4_ = (int)((ulong)puVar2[1] >> 0x20);
          iVar18 = -(uint)((float)puVar2[2] == auVar28._0_4_);
          iVar20 = -(uint)((float)((ulong)puVar2[2] >> 0x20) == auVar28._4_4_);
          iVar22 = -(uint)((float)puVar2[3] == auVar28._8_4_);
          auVar29._0_12_ = auVar28._0_12_;
          auVar29._12_4_ = (int)((ulong)puVar2[3] >> 0x20);
          puVar2[1] = auVar31._8_8_;
          *puVar2 = auVar30._0_8_;
          puVar2[3] = auVar29._8_8_;
          puVar2[2] = auVar28._0_8_;
          if (CONCAT13((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar6 >> 0x18) &
                       (byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar5 >> 0x18) &
                       (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar7 >> 0x18),
                       CONCAT12((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar6 >> 0x10) &
                                (byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar5 >> 0x10) &
                                (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar7 >> 0x10),
                                CONCAT11((byte)((uint)iVar20 >> 8) & (byte)((uint)iVar6 >> 8) &
                                         (byte)((uint)iVar18 >> 8) & (byte)((uint)iVar5 >> 8) &
                                         (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar7 >> 8),
                                         (byte)iVar20 & (byte)iVar6 & (byte)iVar18 & (byte)iVar5 &
                                         (byte)iVar22 & (byte)iVar7))) != 0) break;
          lVar11 = *plVar1;
          lVar12 = 0;
          if (lVar11 != 0) {
            lVar12 = lVar11 + (long)plVar1;
          }
          uVar14 = *(uint *)(lVar12 + (uVar10 & 0xffff) * 0x20 + 0xc);
          uVar10 = (ulong)uVar14;
        } while ((uVar14 & 0xffff) != 0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_3);
  }
  return;
}


