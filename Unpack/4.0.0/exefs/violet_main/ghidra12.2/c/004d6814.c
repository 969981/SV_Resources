/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d6814; name: FUN_004d6814
 */


byte * FUN_004d6814(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar13;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  
  puVar8 = PTR_LAB_047cba90;
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 0x60);
LAB_004d6868:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar17._0_8_;
      if ((auVar17._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar5 = *param_2;
    auVar17[8] = bVar5;
    auVar17._0_8_ = param_2 + 1;
    auVar17._9_7_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = param_2[1];
      if ((char)bVar4 < '\0') {
        auVar17 = FUN_0052e560(param_2);
        if (auVar17._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar17._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar17._0_8_ = param_2 + 2;
        auVar17._12_4_ = 0;
      }
    }
    param_2 = auVar17._0_8_;
    uVar13 = auVar17._8_4_;
    switch((uint)(auVar17._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar13 & 0xff) != 10) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar11 = (ulong *)*puVar11;
      }
      puVar9 = (undefined *)*puVar2;
      if (puVar9 == PTR_DAT_047cba80) {
        FUN_001fcdc8(puVar2,puVar11,PTR_DAT_047cba80);
        puVar9 = (undefined *)*puVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar9,param_2,param_3);
      goto joined_r0x004d6934;
    case 2:
      if ((uVar13 & 0xff) == 0x12) {
        param_2 = param_2 + -1;
        do {
          piVar14 = *(int **)(param_1 + 0x28);
          pbVar3 = param_2 + 1;
          if (piVar14 == (int *)0x0) {
            iVar15 = *(int *)(param_1 + 0x24);
LAB_004d69ac:
            FUN_00532334(param_1 + 0x18,iVar15 + 1);
            piVar14 = *(int **)(param_1 + 0x28);
            iVar15 = *piVar14;
LAB_004d69c0:
            *piVar14 = iVar15 + 1;
            uVar16 = FUN_004e6918(*(undefined8 *)(param_1 + 0x18));
            iVar15 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar15 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar15 * 8 + 8) = uVar16;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d6984;
LAB_004d69f8:
            auVar18[8] = bVar5;
            auVar18._0_8_ = param_2 + 2;
            auVar18._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x20);
            iVar15 = *piVar14;
            if (iVar15 <= iVar6) {
              if (iVar15 == *(int *)(param_1 + 0x24)) goto LAB_004d69ac;
              goto LAB_004d69c0;
            }
            *(int *)(param_1 + 0x20) = iVar6 + 1;
            uVar16 = *(undefined8 *)(piVar14 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d69f8;
LAB_004d6984:
            auVar18 = FUN_0052e5f0(pbVar3);
            if (auVar18._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar13 = auVar18._8_4_ + (auVar18._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar15 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar13;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d7f6c(uVar16,auVar18._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar15 - uVar13);
          *(uint *)((long)param_3 + 0x1c) = uVar13;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x12));
        goto LAB_004d6868;
      }
      break;
    case 3:
      if ((uVar13 & 0xff) == 0x1a) {
        lVar12 = *(long *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if (lVar12 == 0) {
          puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar11 = (ulong *)*puVar11;
          }
          lVar12 = FUN_004e7010(puVar11);
          *(long *)(param_1 + 0x68) = lVar12;
          bVar5 = *param_2;
          if (-1 < (char)bVar5) goto LAB_004d6abc;
LAB_004d6d90:
          auVar20 = FUN_0052e5f0(param_2);
          if (auVar20._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          bVar5 = *param_2;
          if ((char)bVar5 < '\0') goto LAB_004d6d90;
LAB_004d6abc:
          auVar20[8] = bVar5;
          auVar20._0_8_ = param_2 + 1;
          auVar20._9_3_ = 0;
        }
        uVar13 = auVar20._8_4_ + (auVar20._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        uVar7 = param_3[0xb];
        iVar15 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
        if ((int)uVar7 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_004df2d4(lVar12,auVar20._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar15 - uVar13);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        goto LAB_004d6868;
      }
      break;
    case 4:
      if ((uVar13 & 0xff) == 0x22) {
        param_2 = param_2 + -1;
        do {
          piVar14 = *(int **)(param_1 + 0x40);
          pbVar3 = param_2 + 1;
          if (piVar14 == (int *)0x0) {
            iVar15 = *(int *)(param_1 + 0x3c);
LAB_004d6b34:
            FUN_00532334(param_1 + 0x30,iVar15 + 1);
            piVar14 = *(int **)(param_1 + 0x40);
            iVar15 = *piVar14;
LAB_004d6b48:
            *piVar14 = iVar15 + 1;
            uVar16 = FUN_004e6820(*(undefined8 *)(param_1 + 0x30));
            iVar15 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar15 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar15 * 8 + 8) = uVar16;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d6b0c;
LAB_004d6b80:
            auVar19[8] = bVar5;
            auVar19._0_8_ = param_2 + 2;
            auVar19._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x38);
            iVar15 = *piVar14;
            if (iVar15 <= iVar6) {
              if (iVar15 == *(int *)(param_1 + 0x3c)) goto LAB_004d6b34;
              goto LAB_004d6b48;
            }
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            uVar16 = *(undefined8 *)(piVar14 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d6b80;
LAB_004d6b0c:
            auVar19 = FUN_0052e5f0(pbVar3);
            if (auVar19._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar13 = auVar19._8_4_ + (auVar19._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar15 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar13;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d5ca8(uVar16,auVar19._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar15 - uVar13);
          *(uint *)((long)param_3 + 0x1c) = uVar13;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x22));
        goto LAB_004d6868;
      }
      break;
    case 5:
      if ((uVar13 & 0xff) == 0x2a) {
        param_2 = param_2 + -1;
        do {
          piVar14 = *(int **)(param_1 + 0x58);
          if (piVar14 == (int *)0x0) {
            iVar15 = *(int *)(param_1 + 0x54);
LAB_004d6c6c:
            FUN_00532334((long *)(param_1 + 0x48),iVar15 + 1);
            piVar14 = *(int **)(param_1 + 0x58);
            iVar15 = *piVar14;
LAB_004d6c80:
            *piVar14 = iVar15 + 1;
            lVar12 = *(long *)(param_1 + 0x48);
            if (lVar12 == 0) {
              puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
              if (puVar10 != (undefined8 *)0x0) goto LAB_004d6cc0;
            }
            else {
              if (*(long *)(lVar12 + 0x70) != 0) {
                FUN_00520d08(lVar12,0,0x18);
              }
              puVar10 = (undefined8 *)FUN_00520544(lVar12,0x18,puVar8);
LAB_004d6cc0:
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
            }
            iVar15 = *(int *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = iVar15 + 1;
            *(undefined8 **)(*(long *)(param_1 + 0x58) + (long)iVar15 * 8 + 8) = puVar10;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x50);
            iVar15 = *piVar14;
            if (iVar15 <= iVar6) {
              if (iVar15 == *(int *)(param_1 + 0x54)) goto LAB_004d6c6c;
              goto LAB_004d6c80;
            }
            *(int *)(param_1 + 0x50) = iVar6 + 1;
            puVar10 = *(undefined8 **)(piVar14 + (long)iVar6 * 2 + 2);
          }
          param_2 = (byte *)FUN_0052e7f0(puVar10,param_2 + 1,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
        goto LAB_004d6868;
      }
    }
    if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar13 - 1;
      return param_2;
    }
    if ((*puVar1 & 1) == 0) {
      lVar12 = FUN_00264e54(puVar1);
    }
    else {
      lVar12 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar17._8_8_ & 0xffffffff,lVar12,param_2,param_3);
joined_r0x004d6934:
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


