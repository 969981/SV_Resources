/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d8e78; name: FUN_004d8e78
 */


byte * FUN_004d8e78(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar12;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  
  puVar8 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  plVar2 = (long *)(param_1 + 0x30);
LAB_004d8ed8:
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
      bVar5 = *param_2;
      auVar18[8] = bVar5;
      auVar18._0_8_ = param_2 + 1;
      auVar18._9_7_ = 0;
      if ((char)bVar5 < '\0') {
        bVar4 = param_2[1];
        if ((char)bVar4 < '\0') {
          auVar18 = FUN_0052e560(param_2);
          if (auVar18._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar18._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
          auVar18._0_8_ = param_2 + 2;
          auVar18._12_4_ = 0;
        }
      }
      param_2 = auVar18._0_8_;
      uVar14 = (uint)(auVar18._8_8_ >> 3) & 0x1fffffff;
      uVar12 = auVar18._8_4_;
      if (uVar14 != 3) break;
      if ((uVar12 & 0xff) != 0x1a) goto LAB_004d9108;
      lVar11 = *(long *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar11 == 0) {
        puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
        lVar11 = FUN_004e7290(puVar10);
        *(long *)(param_1 + 0x38) = lVar11;
        bVar5 = *param_2;
        if ((char)bVar5 < '\0') goto LAB_004d916c;
LAB_004d8fac:
        auVar20[8] = bVar5;
        auVar20._0_8_ = param_2 + 1;
        auVar20._9_3_ = 0;
      }
      else {
        bVar5 = *param_2;
        if (-1 < (char)bVar5) goto LAB_004d8fac;
LAB_004d916c:
        auVar20 = FUN_0052e5f0(param_2);
        if (auVar20._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      uVar12 = auVar20._8_4_ + (auVar20._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
      uVar7 = param_3[0xb];
      iVar16 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar12;
      *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
      if ((int)uVar7 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_004e0608(lVar11,auVar20._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      if ((int)param_3[10] != 0) {
        return (byte *)0x0;
      }
      uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar12);
      *(uint *)((long)param_3 + 0x1c) = uVar12;
      *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
    }
    if (uVar14 == 2) {
      if ((uVar12 & 0xff) == 0x12) {
        param_2 = param_2 + -1;
        do {
          piVar15 = *(int **)(param_1 + 0x28);
          pbVar3 = param_2 + 1;
          if (piVar15 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x24);
LAB_004d9024:
            FUN_00532334(param_1 + 0x18,iVar16 + 1);
            piVar15 = *(int **)(param_1 + 0x28);
            iVar16 = *piVar15;
LAB_004d9038:
            *piVar15 = iVar16 + 1;
            uVar17 = FUN_004e6af8(*(undefined8 *)(param_1 + 0x18));
            iVar16 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar16 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar16 * 8 + 8) = uVar17;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d8ffc;
LAB_004d9070:
            auVar19[8] = bVar5;
            auVar19._0_8_ = param_2 + 2;
            auVar19._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x20);
            iVar16 = *piVar15;
            if (iVar16 <= iVar6) {
              if (iVar16 == *(int *)(param_1 + 0x24)) goto LAB_004d9024;
              goto LAB_004d9038;
            }
            *(int *)(param_1 + 0x20) = iVar6 + 1;
            uVar17 = *(undefined8 *)(piVar15 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d9070;
LAB_004d8ffc:
            auVar19 = FUN_0052e5f0(pbVar3);
            if (auVar19._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar19._8_4_ + (auVar19._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar16 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004da100(uVar17,auVar19._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x12));
        goto LAB_004d8ed8;
      }
LAB_004d9108:
      if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar12 - 1;
        return param_2;
      }
      if ((*puVar1 & 1) == 0) {
        lVar11 = FUN_00264e54(puVar1);
      }
      else {
        lVar11 = (*puVar1 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar18._8_8_ & 0xffffffff,lVar11,param_2,param_3);
    }
    else {
      if ((uVar14 != 1) || ((uVar12 & 0xff) != 10)) goto LAB_004d9108;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar13 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar9 = (undefined *)*plVar2;
      }
      else {
        puVar13 = (undefined8 *)*puVar13;
        puVar9 = (undefined *)*plVar2;
      }
      if (puVar9 == puVar8) {
        FUN_001fcdc8(plVar2,puVar13,puVar8);
        puVar9 = (undefined *)*plVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar9,param_2,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


