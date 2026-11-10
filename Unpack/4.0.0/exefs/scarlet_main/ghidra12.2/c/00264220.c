/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00264220; name: FUN_00264220
 */


/* WARNING: Removing unreachable block (ram,0x00264544) */

byte * FUN_00264220(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  puVar6 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  puVar2 = (ulong *)(param_1 + 8);
LAB_00264278:
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar16 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar16._0_8_;
        if ((auVar16._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar13 = param_2 + 1;
      bVar7 = *param_2;
      auVar5[8] = bVar7;
      auVar5._0_8_ = pbVar13;
      auVar5._9_7_ = 0;
      auVar16[8] = bVar7;
      auVar16._0_8_ = pbVar13;
      auVar16._9_7_ = 0;
      if (-1 < (char)bVar7) break;
      uVar10 = ((uint)bVar7 + (uint)*pbVar13 * 0x80) - 0x80;
      if ((char)*pbVar13 < '\0') {
        auVar16 = FUN_0052e560(param_2);
        if (auVar16._0_8_ != 0) {
          uVar10 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
          auVar5 = auVar16;
          goto joined_r0x00264560;
        }
        goto LAB_002645d0;
      }
      auVar5._8_4_ = uVar10;
      auVar5._0_8_ = param_2 + 2;
      auVar5._12_4_ = 0;
      auVar16._8_4_ = uVar10;
      auVar16._0_8_ = param_2 + 2;
      auVar16._12_4_ = 0;
      uVar10 = uVar10 >> 3;
      if (uVar10 != 3) goto LAB_002642a0;
LAB_00264310:
      auVar16 = auVar5;
      if ((auVar16._8_4_ & 0xff) == 0x1a) {
        param_2 = (byte *)(auVar16._0_8_ + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x20);
          pbVar13 = param_2 + 1;
          if (piVar11 == (int *)0x0) {
            iVar12 = *(int *)(param_1 + 0x1c);
LAB_00264380:
            FUN_00532334(param_1 + 0x10,iVar12 + 1);
            piVar11 = *(int **)(param_1 + 0x20);
            iVar12 = *piVar11;
LAB_00264394:
            *piVar11 = iVar12 + 1;
            uVar14 = FUN_0049f2bc(*(undefined8 *)(param_1 + 0x10));
            iVar12 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar12 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar12 * 8 + 8) = uVar14;
            bVar7 = *pbVar13;
            if ((char)bVar7 < '\0') goto LAB_00264358;
LAB_002643cc:
            auVar17[8] = bVar7;
            auVar17._0_8_ = param_2 + 2;
            auVar17._9_3_ = 0;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x18);
            iVar12 = *piVar11;
            if (iVar12 <= iVar4) {
              if (iVar12 == *(int *)(param_1 + 0x1c)) goto LAB_00264380;
              goto LAB_00264394;
            }
            *(int *)(param_1 + 0x18) = iVar4 + 1;
            uVar14 = *(undefined8 *)(piVar11 + (long)iVar4 * 2 + 2);
            bVar7 = *pbVar13;
            if (-1 < (char)bVar7) goto LAB_002643cc;
LAB_00264358:
            auVar17 = FUN_0052e5f0(pbVar13);
            if (auVar17._0_8_ == 0) goto LAB_002645d0;
          }
          uVar10 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
          uVar3 = param_3[0xb];
          iVar12 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar10;
          *(int *)(param_3 + 0xb) = (int)uVar3 + -1;
          if ((((int)uVar3 < 1) ||
              (param_2 = (byte *)FUN_0049ea7c(uVar14,auVar17._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_002645d0;
          uVar10 = *(int *)((long)param_3 + 0x1c) + (iVar12 - uVar10);
          *(uint *)((long)param_3 + 0x1c) = uVar10;
          pbVar13 = (byte *)(param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f));
          *param_3 = (ulong)pbVar13;
        } while ((param_2 < pbVar13) && (*param_2 == 0x1a));
      }
      else {
LAB_002644fc:
        uVar10 = auVar16._8_4_;
        if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar10 - 1;
          return auVar16._0_8_;
        }
        if ((*puVar2 & 1) == 0) {
          lVar8 = FUN_00264e54(puVar2);
        }
        else {
          lVar8 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_00515960(auVar16._8_8_ & 0xffffffff,lVar8,auVar16._0_8_,param_3);
        if (param_2 == (byte *)0x0) goto LAB_002645d0;
      }
    }
    uVar10 = (uint)(bVar7 >> 3);
joined_r0x00264560:
    if (uVar10 == 3) goto LAB_00264310;
LAB_002642a0:
    pbVar13 = auVar16._0_8_;
    if (uVar10 != 2) {
      if ((uVar10 != 1) || ((auVar16._8_4_ & 0xff) != 8)) goto LAB_002644fc;
      param_2 = pbVar13 + 1;
      uVar10 = (uint)*pbVar13;
      if ((char)*pbVar13 < '\0') {
        uVar10 = (uVar10 + (uint)*param_2 * 0x80) - 0x80;
        if ((char)*param_2 < '\0') {
          auVar17 = FUN_0052e420(pbVar13);
          param_2 = auVar17._0_8_;
          *(int *)(param_1 + 0x30) = auVar17._8_4_;
          if (param_2 == (byte *)0x0) goto LAB_002645d0;
          goto LAB_00264278;
        }
        param_2 = pbVar13 + 2;
      }
      *(uint *)(param_1 + 0x30) = uVar10;
      goto LAB_00264278;
    }
    if ((auVar16._8_4_ & 0xff) != 0x12) goto LAB_002644fc;
    puVar9 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
    if ((*puVar2 & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 == puVar6) {
      FUN_001fcdc8(puVar1,puVar9,puVar6);
      pbVar15 = (byte *)*puVar1;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar15,pbVar13,param_3);
    uVar3 = *(ulong *)(pbVar15 + 8);
    pbVar13 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar13 = pbVar15 + 1;
      uVar3 = (ulong)(*pbVar15 >> 1);
    }
    bVar7 = FUN_0052e6b0(pbVar13,uVar3,"google.rpc.Status.message");
    if ((bVar7 & 1) == 0) {
      iVar12 = 4;
    }
    else {
      iVar12 = (uint)(param_2 == (byte *)0x0) << 2;
    }
    iVar4 = 2;
    if ((bVar7 & param_2 != (byte *)0x0) == 0) {
      iVar4 = iVar12;
    }
    if (iVar4 != 2) {
      if (iVar4 == 4) {
LAB_002645d0:
        param_2 = (byte *)0x0;
      }
      return param_2;
    }
  } while( true );
}


