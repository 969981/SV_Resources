/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004da100; name: FUN_004da100
 */


byte * FUN_004da100(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong *puVar11;
  uint uVar13;
  long lVar12;
  undefined8 *puVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  puVar9 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  uVar15 = 0;
  plVar2 = (long *)(param_1 + 0x28);
  plVar3 = (long *)(param_1 + 0x20);
  plVar4 = (long *)(param_1 + 0x18);
LAB_004da178:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004da548;
      auVar16 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar16._0_8_;
      if ((auVar16._8_8_ & 1) != 0) goto LAB_004da548;
    }
    bVar7 = *param_2;
    auVar16[8] = bVar7;
    auVar16._0_8_ = param_2 + 1;
    auVar16._9_7_ = 0;
    if ((char)bVar7 < '\0') {
      bVar6 = param_2[1];
      if ((char)bVar6 < '\0') {
        auVar16 = FUN_0052e560(param_2);
        param_2 = (byte *)0x0;
        if (auVar16._0_8_ == 0) goto LAB_004da548;
      }
      else {
        auVar16._8_4_ = (uint)bVar7 + (uint)bVar6 * 0x80 + -0x80;
        auVar16._0_8_ = param_2 + 2;
        auVar16._12_4_ = 0;
      }
    }
    param_2 = auVar16._0_8_;
    uVar13 = auVar16._8_4_;
    switch((uint)(auVar16._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar13 & 0xff) != 10) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar10 = (undefined *)*plVar4;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        puVar10 = (undefined *)*plVar4;
      }
      if (puVar10 == puVar9) {
        FUN_001fcdc8(plVar4,puVar11,puVar9);
        puVar10 = (undefined *)*plVar4;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar10,param_2,param_3);
      goto joined_r0x004da4cc;
    case 2:
      if ((uVar13 & 0xff) == 0x12) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar10 = (undefined *)*plVar3;
        }
        else {
          puVar11 = (ulong *)*puVar11;
          puVar10 = (undefined *)*plVar3;
        }
        if (puVar10 == puVar9) {
          FUN_001fcdc8(plVar3,puVar11,puVar9);
          puVar10 = (undefined *)*plVar3;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar10,param_2,param_3);
        goto joined_r0x004da4cc;
      }
      break;
    case 3:
      if ((uVar13 & 0xff) == 0x1a) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        puVar14 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar10 = (undefined *)*plVar2;
        }
        else {
          puVar14 = (undefined8 *)*puVar14;
          puVar10 = (undefined *)*plVar2;
        }
        if (puVar10 == puVar9) {
          FUN_001fcdc8(plVar2,puVar14,puVar9);
          puVar10 = (undefined *)*plVar2;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar10,param_2,param_3);
        goto joined_r0x004da4cc;
      }
      break;
    case 4:
      if ((uVar13 & 0xff) == 0x22) {
        lVar12 = *(long *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        if (lVar12 == 0) {
          puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar11 = (ulong *)*puVar11;
          }
          lVar12 = FUN_004e73d0(puVar11);
          *(long *)(param_1 + 0x30) = lVar12;
          bVar7 = *param_2;
          if (-1 < (char)bVar7) goto LAB_004da300;
LAB_004da404:
          auVar17 = FUN_0052e5f0(param_2);
          if (auVar17._0_8_ == 0) goto LAB_004da544;
        }
        else {
          bVar7 = *param_2;
          if ((char)bVar7 < '\0') goto LAB_004da404;
LAB_004da300:
          auVar17[8] = bVar7;
          auVar17._0_8_ = param_2 + 1;
          auVar17._9_3_ = 0;
        }
        uVar13 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        lVar8 = param_3[0xb];
        iVar5 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *(int *)(param_3 + 0xb) = (int)lVar8 + -1;
        if ((((int)lVar8 < 1) ||
            (param_2 = (byte *)FUN_004e0f3c(lVar12,auVar17._0_8_,param_3), param_2 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
        goto LAB_004da544;
        uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar5 - uVar13);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        goto LAB_004da178;
      }
      break;
    case 5:
      if ((uVar13 & 0xff) == 0x28) {
        bVar7 = *param_2;
        uVar13 = (uint)bVar7;
        uVar15 = uVar15 | 0x10;
        if ((char)bVar7 < '\0') {
          uVar13 = ((uint)bVar7 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar16 = FUN_0052e420(param_2);
            param_2 = auVar16._0_8_;
            *(bool *)(param_1 + 0x38) = auVar16._8_8_ != 0;
            goto joined_r0x004da4cc;
          }
          lVar12 = 2;
        }
        else {
          lVar12 = 1;
        }
        param_2 = param_2 + lVar12;
        *(bool *)(param_1 + 0x38) = uVar13 != 0;
        goto LAB_004da178;
      }
      break;
    case 6:
      if ((uVar13 & 0xff) == 0x30) {
        bVar7 = *param_2;
        uVar13 = (uint)bVar7;
        uVar15 = uVar15 | 0x20;
        if ((char)bVar7 < '\0') {
          uVar13 = ((uint)bVar7 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar16 = FUN_0052e420(param_2);
            param_2 = auVar16._0_8_;
            *(bool *)(param_1 + 0x39) = auVar16._8_8_ != 0;
            goto joined_r0x004da4cc;
          }
          lVar12 = 2;
        }
        else {
          lVar12 = 1;
        }
        param_2 = param_2 + lVar12;
        *(bool *)(param_1 + 0x39) = uVar13 != 0;
        goto LAB_004da178;
      }
    }
    if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar13 - 1;
      goto LAB_004da548;
    }
    if ((*puVar1 & 1) == 0) {
      lVar12 = FUN_00264e54(puVar1);
    }
    else {
      lVar12 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar16._8_8_ & 0xffffffff,lVar12,param_2,param_3);
joined_r0x004da4cc:
    if (param_2 == (byte *)0x0) {
LAB_004da544:
      param_2 = (byte *)0x0;
LAB_004da548:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar15;
      return param_2;
    }
  } while( true );
}


