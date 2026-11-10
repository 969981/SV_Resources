/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00603934; name: FUN_00603934
 */


byte * FUN_00603934(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  
  puVar7 = PTR_LAB_047cba90;
  puVar6 = PTR_DAT_047cba80;
  puVar5 = PTR_FUN_047cba38;
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 0x28);
LAB_0060398c:
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar18 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar18._0_8_;
        if ((auVar18._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar15 = param_2 + 1;
      bVar8 = *param_2;
      uVar16 = (uint)bVar8;
      if (-1 < (char)bVar8) break;
      uVar16 = (uVar16 + (uint)*pbVar15 * 0x80) - 0x80;
      if ((char)*pbVar15 < '\0') {
        auVar18 = FUN_0052e560(param_2,uVar16);
        pbVar15 = auVar18._0_8_;
        uVar16 = auVar18._8_4_;
        if (pbVar15 != (byte *)0x0) {
          uVar12 = (uint)(auVar18._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00603c40;
        }
        goto LAB_00603d6c;
      }
      pbVar15 = param_2 + 2;
      uVar12 = uVar16 >> 3;
      if (uVar12 != 3) goto LAB_006039b4;
LAB_00603a80:
      if ((uVar16 & 0xff) == 0x1a) {
        param_2 = pbVar15 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x20);
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x1c);
LAB_00603ad4:
            FUN_00532334((long *)(param_1 + 0x10),iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0x20);
            iVar14 = *piVar13;
LAB_00603ae8:
            *piVar13 = iVar14 + 1;
            lVar10 = *(long *)(param_1 + 0x10);
            if (lVar10 == 0) {
              pbVar15 = (byte *)FUN_0049e770(puVar5,0x18);
              if (pbVar15 != (byte *)0x0) goto LAB_00603b2c;
            }
            else {
              if (*(long *)(lVar10 + 0x70) != 0) {
                FUN_00520d08(lVar10,0,0x18);
              }
              pbVar15 = (byte *)FUN_00520544(lVar10,0x18,puVar7);
LAB_00603b2c:
              pbVar15[0] = 0;
              pbVar15[1] = 0;
              pbVar15[2] = 0;
              pbVar15[3] = 0;
              pbVar15[4] = 0;
              pbVar15[5] = 0;
              pbVar15[6] = 0;
              pbVar15[7] = 0;
              pbVar15[8] = 0;
              pbVar15[9] = 0;
              pbVar15[10] = 0;
              pbVar15[0xb] = 0;
              pbVar15[0xc] = 0;
              pbVar15[0xd] = 0;
              pbVar15[0xe] = 0;
              pbVar15[0xf] = 0;
              pbVar15[0x10] = 0;
              pbVar15[0x11] = 0;
              pbVar15[0x12] = 0;
              pbVar15[0x13] = 0;
              pbVar15[0x14] = 0;
              pbVar15[0x15] = 0;
              pbVar15[0x16] = 0;
              pbVar15[0x17] = 0;
            }
            iVar14 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar14 + 1;
            *(byte **)(*(long *)(param_1 + 0x20) + (long)iVar14 * 8 + 8) = pbVar15;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18);
            iVar14 = *piVar13;
            if (iVar14 <= iVar3) {
              if (iVar14 == *(int *)(param_1 + 0x1c)) goto LAB_00603ad4;
              goto LAB_00603ae8;
            }
            *(int *)(param_1 + 0x18) = iVar3 + 1;
            pbVar15 = *(byte **)(piVar13 + (long)iVar3 * 2 + 2);
          }
          param_2 = (byte *)FUN_0052e7f0(pbVar15,param_2 + 1,param_3);
          uVar9 = *(ulong *)(pbVar15 + 8);
          pbVar17 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar17 = pbVar15 + 1;
            uVar9 = (ulong)(*pbVar15 >> 1);
          }
          uVar9 = FUN_0052e6b0(pbVar17,uVar9,0);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          if ((uVar9 & 1) == 0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x1a));
      }
      else {
LAB_00603be4:
        if ((uVar16 == 0) || ((uVar16 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar16 - 1;
          return pbVar15;
        }
        if ((*puVar1 & 1) == 0) {
          lVar10 = FUN_0021d48c(puVar1);
        }
        else {
          lVar10 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar16,lVar10,pbVar15,param_3);
        if (param_2 == (byte *)0x0) goto LAB_00603d6c;
      }
    }
    uVar12 = (uint)(bVar8 >> 3);
joined_r0x00603c40:
    if (uVar12 == 3) goto LAB_00603a80;
LAB_006039b4:
    if (uVar12 == 2) {
      if ((uVar16 & 0xff) != 0x12) goto LAB_00603be4;
      lVar10 = *(long *)(param_1 + 0x30);
      if (lVar10 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar10 = FUN_00615d7c(puVar11);
        *(long *)(param_1 + 0x30) = lVar10;
        bVar8 = *pbVar15;
        if (-1 < (char)bVar8) goto LAB_00603bdc;
LAB_00603c6c:
        auVar19 = FUN_0052e5f0(pbVar15);
        if (auVar19._0_8_ == 0) goto LAB_00603d6c;
      }
      else {
        bVar8 = *pbVar15;
        if ((char)bVar8 < '\0') goto LAB_00603c6c;
LAB_00603bdc:
        auVar19[8] = bVar8;
        auVar19._0_8_ = pbVar15 + 1;
        auVar19._9_3_ = 0;
      }
      uVar16 = auVar19._8_4_ + (auVar19._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar16 & (int)uVar16 >> 0x1f);
      lVar4 = param_3[0xb];
      iVar14 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar16;
      *(int *)(param_3 + 0xb) = (int)lVar4 + -1;
      if ((((int)lVar4 < 1) ||
          (param_2 = (byte *)FUN_0060b000(lVar10,auVar19._0_8_,param_3), param_2 == (byte *)0x0)) ||
         (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
      goto LAB_00603d6c;
      uVar16 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar16);
      *(uint *)((long)param_3 + 0x1c) = uVar16;
      *param_3 = param_3[1] + (long)(int)(uVar16 & (int)uVar16 >> 0x1f);
      goto LAB_0060398c;
    }
    if ((uVar12 != 1) || ((uVar16 & 0xff) != 10)) goto LAB_00603be4;
    puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) == 0) {
      pbVar17 = (byte *)*puVar2;
    }
    else {
      puVar11 = (ulong *)*puVar11;
      pbVar17 = (byte *)*puVar2;
    }
    if (pbVar17 == puVar6) {
      FUN_001fcdc8(puVar2,puVar11,puVar6);
      pbVar17 = (byte *)*puVar2;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar17,pbVar15,param_3);
    uVar9 = *(ulong *)(pbVar17 + 8);
    pbVar15 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar15 = pbVar17 + 1;
      uVar9 = (ulong)(*pbVar17 >> 1);
    }
    bVar8 = FUN_0052e6b0(pbVar15,uVar9,0);
    if ((bVar8 & 1) == 0) {
      iVar14 = 4;
    }
    else {
      iVar14 = (uint)(param_2 == (byte *)0x0) << 2;
    }
    iVar3 = 2;
    if ((bVar8 & param_2 != (byte *)0x0) == 0) {
      iVar3 = iVar14;
    }
    if (iVar3 != 2) {
      if (iVar3 == 4) {
LAB_00603d6c:
        param_2 = (byte *)0x0;
      }
      return param_2;
    }
  } while( true );
}


