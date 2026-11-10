/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00617c88; name: FUN_00617c88
 */


char * FUN_00617c88(undefined8 *param_1,char *param_2,ulong *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  long *local_70 [4];
  byte *local_50;
  undefined8 uStack_48;
  
  if (param_2 < (char *)*param_3) {
LAB_00617cb4:
    if (*param_2 == '\n') {
      if (param_2[1] < '\0') {
        auVar18 = FUN_0052e5f0();
        if (auVar18._0_8_ == 0) {
          return (char *)0x0;
        }
      }
      else {
        auVar18[8] = param_2[1];
        auVar18._0_8_ = param_2 + 2;
        auVar18._9_3_ = 0;
      }
      lVar6 = auVar18._0_8_;
      lVar13 = (long)auVar18._8_4_;
      pbVar1 = (byte *)(param_1 + 2);
      if ((long)((param_3[1] - lVar6) + 0x10) < lVar13) {
        param_2 = (char *)FUN_0052ddec(param_3,lVar6,auVar18._8_4_,pbVar1);
      }
      else {
        FUN_0026c6b8(pbVar1,lVar6,lVar13);
        param_2 = (char *)(lVar6 + lVar13);
      }
      if (param_2 == (char *)0x0) {
        return (char *)0x0;
      }
      if ((*pbVar1 & 1) == 0) {
        lVar6 = (long)param_1 + 0x11;
        uVar9 = (ulong)(*pbVar1 >> 1);
      }
      else {
        uVar9 = param_1[3];
        lVar6 = param_1[4];
      }
      uVar9 = FUN_005347a4(lVar6,uVar9,0,"(stripped)");
      if ((uVar9 & 1) == 0) {
        return (char *)0x0;
      }
      if (param_2 < (char *)*param_3) {
LAB_00617d6c:
        if (*param_2 != '\x12') {
LAB_00617f44:
          if (param_2 == (char *)0x0) {
            return (char *)0x0;
          }
          goto LAB_00617f48;
        }
        lVar13 = param_1[1];
        plVar5 = *(long **)(lVar13 + 0x10);
        lVar14 = *plVar5;
        uStack_48 = 0;
        local_50 = pbVar1;
        FUN_00617b04(local_70,plVar5,&local_50);
        lVar6 = local_70[0][1];
        if (lVar6 == 0) {
          lVar6 = FUN_00617974(lVar13,pbVar1);
          *local_70[0] = lVar6;
          local_70[0][1] = lVar6;
        }
        param_1[5] = lVar6 + 0x18;
        if (lVar14 == **(long **)(param_1[1] + 0x10)) goto LAB_00617f48;
        if (param_2[1] < '\0') {
          auVar19 = FUN_0052e5f0();
          if (auVar19._0_8_ == 0) goto LAB_00617eb8;
        }
        else {
          auVar19[8] = param_2[1];
          auVar19._0_8_ = param_2 + 2;
          auVar19._9_3_ = 0;
        }
        uVar10 = auVar19._8_4_ + (auVar19._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
        uVar9 = param_3[0xb];
        iVar4 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar10;
        *(int *)(param_3 + 0xb) = (int)uVar9 + -1;
        if ((((int)uVar9 < 1) ||
            (param_2 = (char *)FUN_004eb174(lVar6 + 0x18,auVar19._0_8_,param_3),
            param_2 == (char *)0x0)) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
LAB_00617eb8:
          FUN_006180c8(param_1[1],pbVar1);
          return (char *)0x0;
        }
        lVar6 = (long)*(int *)((long)param_3 + 0x1c) + ((long)iVar4 - (long)(int)uVar10);
        uVar10 = (uint)lVar6;
        pcVar8 = (char *)(param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f));
        *(uint *)((long)param_3 + 0x1c) = uVar10;
        *param_3 = (ulong)pcVar8;
        if (pcVar8 <= param_2) {
          if ((long)param_2 - param_3[1] == lVar6) {
            return param_2;
          }
          auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
          param_2 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) != 0) {
            return param_2;
          }
          if (param_2 == (char *)0x0) {
            return (char *)0x0;
          }
        }
        lVar6 = FUN_006161b4(*(undefined8 *)*param_1);
        param_1[6] = lVar6;
        lVar13 = param_1[5];
        *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 2;
        puVar11 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
          lVar14 = *(long *)(lVar6 + 0x18);
        }
        else {
          puVar11 = (ulong *)*puVar11;
          lVar14 = *(long *)(lVar6 + 0x18);
        }
        if (lVar14 == 0) {
          lVar14 = FUN_004eb86c(puVar11);
          *(long *)(lVar6 + 0x18) = lVar14;
        }
        if (lVar13 != lVar14) {
          puVar11 = (ulong *)(*(ulong *)(lVar14 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(lVar14 + 8) & 1) == 0) {
            puVar12 = (ulong *)(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
            if ((*(ulong *)(lVar13 + 8) & 1) != 0) goto LAB_00617fe4;
LAB_00617fc0:
            if (puVar11 == puVar12) goto LAB_00617ff4;
          }
          else {
            puVar11 = (ulong *)*puVar11;
            puVar12 = (ulong *)(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
            if ((*(ulong *)(lVar13 + 8) & 1) == 0) goto LAB_00617fc0;
LAB_00617fe4:
            if (puVar11 == (ulong *)*puVar12) {
LAB_00617ff4:
              FUN_004eb784(lVar14,lVar13);
              goto LAB_00617ff8;
            }
          }
          FUN_00506e00();
        }
LAB_00617ff8:
        FUN_006180c8(param_1[1],pbVar1);
        lVar6 = param_1[6];
      }
      else {
        if ((long)param_2 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
          auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
          param_2 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) == 0) goto LAB_00617d6c;
          goto LAB_00617f44;
        }
LAB_00617f48:
        lVar6 = FUN_006161b4(*(undefined8 *)*param_1);
        param_1[6] = lVar6;
      }
      *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 1;
      puVar2 = (undefined8 *)(lVar6 + 0x10);
      puVar11 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
        puVar11 = (ulong *)*puVar11;
      }
      pbVar15 = (byte *)*puVar2;
      if (pbVar15 == PTR_DAT_047cba80) {
        FUN_001fcdc8(puVar2,puVar11,PTR_DAT_047cba80);
        pbVar15 = (byte *)*puVar2;
        bVar3 = *pbVar15;
      }
      else {
        bVar3 = *pbVar15;
      }
      if ((bVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar15 + 0x10));
      }
      uVar16 = param_1[3];
      uVar7 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar15 + 0x10) = param_1[4];
      *(undefined8 *)(pbVar15 + 8) = uVar16;
      *(undefined8 *)pbVar15 = uVar7;
      uVar7 = param_1[6];
      *(undefined2 *)(param_1 + 2) = 0;
      goto LAB_00618068;
    }
  }
  else if ((long)param_2 - param_3[1] != (long)*(int *)((long)param_3 + 0x1c)) {
    auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar17._0_8_;
    if ((auVar17._8_8_ & 1) == 0) goto LAB_00617cb4;
  }
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar7 = FUN_006161b4(*(undefined8 *)*param_1);
  param_1[6] = uVar7;
LAB_00618068:
  pcVar8 = (char *)FUN_00616ac8(uVar7,param_2,param_3);
  if (pcVar8 != (char *)0x0) {
    FUN_00618188(param_1);
  }
  return pcVar8;
}


