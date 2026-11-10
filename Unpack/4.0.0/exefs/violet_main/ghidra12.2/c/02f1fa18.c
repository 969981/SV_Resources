/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1fa18; name: FUN_02f1fa18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1fa18(long param_1,long param_2,long param_3,long param_4,uint param_5,
                 undefined8 *param_6,undefined8 *param_7)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  char cVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [12];
  undefined8 uVar25;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined1 auVar38 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar17 = _UNK_03cabeb8;
  uVar16 = _DAT_03cabeb0;
  if (0 < (int)param_5) {
    lVar18 = *(long *)(param_1 + 0x30);
    uVar11 = *(undefined8 *)(param_2 + 0x90);
    uVar12 = *(undefined8 *)(param_2 + 0x98);
    auVar27._8_8_ = _UNK_03cabeb8;
    auVar27._0_8_ = _DAT_03cabeb0;
    auVar27 = a64_TBL(ZEXT816(0),ZEXT816(0),auVar27);
    uVar21 = 0;
    do {
      iVar3 = *(int *)(param_4 + uVar21 * 4);
      if ((long)uVar21 < (long)(int)(param_5 - 4)) {
        lVar2 = param_3 + (ulong)*(uint *)(param_4 + uVar21 * 4 + 0x10) * 0x80;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        Hint_Prefetch(lVar2 + 0x80,0,0,0);
      }
      lVar2 = param_3 + (long)iVar3 * 0x80;
      lVar19 = lVar18 + (ulong)*(ushort *)(lVar2 + 0x58) * 0x70;
      uVar25 = *(undefined8 *)(lVar2 + 0x60);
      uVar10 = *(undefined8 *)(lVar2 + 0x68);
      fVar23 = *(float *)(lVar19 + 8);
      uVar6 = *(uint *)(lVar19 + 4) | 2;
      lVar19 = *(long *)(param_1 + 0x40);
      fVar24 = (float)uVar11 * fVar23;
      fVar30 = (float)((ulong)uVar11 >> 0x20) * fVar23;
      fVar31 = (float)uVar12 * fVar23;
      fVar23 = (float)((ulong)uVar12 >> 0x20) * fVar23;
      bVar7 = (float)((uint)(ushort)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x30) << 0x10) == 0.0;
      cVar14 = bVar7 * -0x80;
      cVar15 = bVar7 * -0x80;
      iVar8 = (int)cVar14 >> 7;
      bVar32 = (byte)((uint)iVar8 >> 8);
      bVar33 = (byte)((uint)iVar8 >> 0x10);
      bVar34 = cVar14 >> 7;
      iVar9 = (int)cVar15 >> 7;
      bVar35 = (byte)((uint)iVar9 >> 8);
      bVar36 = (byte)((uint)iVar9 >> 0x10);
      bVar37 = cVar15 >> 7;
      fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~bVar34,
                               CONCAT12((byte)((uint)fVar24 >> 0x10) & ~bVar33,
                                        CONCAT11((byte)((uint)fVar24 >> 8) & ~bVar32,
                                                 SUB41(fVar24,0) & ~(byte)iVar8)));
      auVar26._0_8_ =
           CONCAT17((byte)((uint)fVar30 >> 0x18) & ~bVar37,
                    CONCAT16((byte)((uint)fVar30 >> 0x10) & ~bVar36,
                             CONCAT15((byte)((uint)fVar30 >> 8) & ~bVar35,
                                      CONCAT14(SUB41(fVar30,0) & ~(byte)iVar9,fVar24))));
      auVar26[8] = SUB41(fVar31,0) & ~(byte)iVar8;
      auVar26[9] = (byte)((uint)fVar31 >> 8) & ~bVar32;
      auVar26[10] = (byte)((uint)fVar31 >> 0x10) & ~bVar33;
      auVar26[0xb] = (byte)((uint)fVar31 >> 0x18) & ~bVar34;
      auVar38[0xc] = SUB41(fVar23,0) & ~(byte)iVar9;
      auVar38._0_12_ = auVar26;
      auVar38[0xd] = (byte)((uint)fVar23 >> 8) & ~bVar35;
      auVar38[0xe] = (byte)((uint)fVar23 >> 0x10) & ~bVar36;
      auVar38[0xf] = (byte)((uint)fVar23 >> 0x18) & ~bVar37;
      if ((*(uint *)(lVar19 + 0xb58) & uVar6) != 0) {
        lVar20 = 0;
        puVar22 = (undefined8 *)(lVar19 + 0xb68);
        fVar23 = (float)*(undefined8 *)(param_2 + 0x40);
        fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
        auVar28._0_8_ = CONCAT44(fVar30 * (float)((ulong)auVar26._0_8_ >> 0x20),fVar23 * fVar24);
        auVar28._8_4_ = fVar23 * auVar26._8_4_;
        auVar28._12_4_ = fVar30 * auVar38._12_4_;
        uStack_68 = auVar28._8_8_;
        local_70 = auVar28._0_8_;
        do {
          if ((*(uint *)(puVar22 + -1) & uVar6) != 0) {
            (**(code **)(*(long *)*puVar22 + 0xa0))((long *)*puVar22,param_1,iVar3,&local_70);
          }
          lVar20 = lVar20 + 1;
          puVar22 = puVar22 + 2;
        } while (lVar20 < *(int *)(lVar19 + 0xb5c));
        fVar23 = (float)*(undefined8 *)(param_2 + 0x38);
        auVar38._0_4_ = fVar23 * (float)local_70;
        fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
        auVar38._4_4_ = fVar24 * (float)((ulong)local_70 >> 0x20);
        auVar38._8_4_ = fVar23 * (float)uStack_68;
        auVar38._12_4_ = fVar24 * (float)((ulong)uStack_68 >> 0x20);
      }
      auVar29._0_8_ =
           CONCAT44((float)((ulong)uVar25 >> 0x20) + auVar38._4_4_,(float)uVar25 + auVar38._0_4_);
      auVar29._8_4_ = (float)uVar10 + auVar38._8_4_;
      auVar29._12_4_ = (float)((ulong)uVar10 >> 0x20) + auVar38._12_4_;
      auVar13._8_8_ = uVar17;
      auVar13._0_8_ = uVar16;
      uVar10 = *(undefined8 *)(lVar2 + 0x78);
      uVar25 = *(undefined8 *)(lVar2 + 0x70);
      auVar38 = a64_TBL(ZEXT816(0),auVar29,auVar13);
      *(undefined2 *)(param_6 + 3) = *(undefined2 *)(lVar2 + 0x40);
      *(undefined2 *)((long)param_6 + 0x1a) = *(undefined2 *)(lVar2 + 0x42);
      *(undefined2 *)((long)param_6 + 0x1c) = *(undefined2 *)(lVar2 + 0x44);
      uVar4 = *(undefined2 *)(lVar2 + 0x46);
      uVar5 = *(ushort *)(lVar2 + 0x5c);
      param_6[1] = CONCAT17(auVar38[0xf],
                            CONCAT16(auVar38[0xe],
                                     CONCAT15(auVar38[0xd],CONCAT14(auVar38[0xc],(int)uVar10))));
      *param_6 = uVar25;
      *(undefined2 *)((long)param_6 + 0x1e) = uVar4;
      param_6[2] = auVar29._0_8_;
      uVar21 = uVar21 + 1;
      puVar1 = (undefined2 *)((long)param_7 + 0x1e);
      param_6 = param_6 + 4;
      uVar25 = *(undefined8 *)(param_2 + 0x18);
      param_7[2] = 0;
      param_7[1] = (ulong)auVar27._12_4_ << 0x20;
      *param_7 = 0;
      *(ushort *)((long)param_7 + 0x1c) = *(ushort *)(lVar2 + 0x58);
      *(int *)(param_7 + 3) = iVar3;
      param_7 = param_7 + 4;
      *puVar1 = (short)((uint)((float)uVar25 * (float)((uint)uVar5 << 0x10)) >> 0x10);
    } while (uVar21 != param_5);
  }
  return;
}


