/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e3648; name: FUN_004e3648
 */


byte * FUN_004e3648(long param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  
  puVar8 = PTR_LAB_047cba90;
  puVar7 = PTR_DAT_047cba80;
  puVar6 = PTR_FUN_047cba38;
  plVar1 = (long *)(param_1 + 0x68);
  plVar2 = (long *)(param_1 + 0x60);
LAB_004e36dc:
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
    bVar4 = *param_2;
    auVar17[8] = bVar4;
    auVar17._0_8_ = param_2 + 1;
    auVar17._9_7_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        auVar17 = FUN_0052e560(param_2);
        if (auVar17._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar17._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar17._0_8_ = param_2 + 2;
        auVar17._12_4_ = 0;
      }
    }
    param_2 = auVar17._0_8_;
    uVar12 = auVar17._8_4_;
    switch((uint)(auVar17._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar12 & 0xff) == 10) {
        param_2 = (byte *)FUN_0052e900(param_1 + 0x18,param_2,param_3);
      }
      else {
        if ((uVar12 & 0xff) != 8) goto switchD_004e3740_caseD_5;
        bVar4 = *param_2;
        if ((char)bVar4 < '\0') {
          if ((char)param_2[1] < '\0') {
            auVar18 = FUN_0052e420(param_2);
          }
          else {
            auVar18._8_4_ = (uint)bVar4 + (uint)param_2[1] * 0x80 + -0x80;
            auVar18._0_8_ = param_2 + 2;
          }
        }
        else {
          auVar18[8] = bVar4;
          auVar18._0_8_ = param_2 + 1;
          auVar18._9_3_ = 0;
        }
        param_2 = auVar18._0_8_;
        uVar12 = *(uint *)(param_1 + 0x18);
        if (uVar12 == *(uint *)(param_1 + 0x1c)) {
          FUN_00531134(param_1 + 0x18,uVar12 + 1);
        }
        *(int *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4) = auVar18._8_4_;
        *(uint *)(param_1 + 0x18) = uVar12 + 1;
      }
      break;
    case 2:
      if ((uVar12 & 0xff) == 0x12) {
        param_2 = (byte *)FUN_0052e900(param_1 + 0x30,param_2,param_3);
      }
      else {
        if ((uVar12 & 0xff) != 0x10) goto switchD_004e3740_caseD_5;
        bVar4 = *param_2;
        if ((char)bVar4 < '\0') {
          if ((char)param_2[1] < '\0') {
            auVar19 = FUN_0052e420(param_2);
          }
          else {
            auVar19._8_4_ = (uint)bVar4 + (uint)param_2[1] * 0x80 + -0x80;
            auVar19._0_8_ = param_2 + 2;
          }
        }
        else {
          auVar19[8] = bVar4;
          auVar19._0_8_ = param_2 + 1;
          auVar19._9_3_ = 0;
        }
        param_2 = auVar19._0_8_;
        uVar12 = *(uint *)(param_1 + 0x30);
        if (uVar12 == *(uint *)(param_1 + 0x34)) {
          FUN_00531134(param_1 + 0x30,uVar12 + 1);
        }
        *(int *)(*(long *)(param_1 + 0x38) + (ulong)uVar12 * 4) = auVar19._8_4_;
        *(uint *)(param_1 + 0x30) = uVar12 + 1;
      }
      break;
    case 3:
      if ((uVar12 & 0xff) != 0x1a) goto switchD_004e3740_caseD_5;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar9 = (undefined *)*plVar2;
      }
      else {
        puVar13 = (ulong *)*puVar13;
        puVar9 = (undefined *)*plVar2;
      }
      if (puVar9 == puVar7) {
        FUN_001fcdc8(plVar2,puVar13,puVar7);
        puVar9 = (undefined *)*plVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar9,param_2,param_3);
      break;
    case 4:
      if ((uVar12 & 0xff) != 0x22) goto switchD_004e3740_caseD_5;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar10 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar9 = (undefined *)*plVar1;
      }
      else {
        puVar10 = (undefined8 *)*puVar10;
        puVar9 = (undefined *)*plVar1;
      }
      if (puVar9 == puVar7) {
        FUN_001fcdc8(plVar1,puVar10,puVar7);
        puVar9 = (undefined *)*plVar1;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar9,param_2,param_3);
      break;
    default:
      goto switchD_004e3740_caseD_5;
    case 6:
      if ((uVar12 & 0xff) == 0x32) {
        param_2 = param_2 + -1;
        do {
          piVar14 = *(int **)(param_1 + 0x58);
          if (piVar14 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x54);
LAB_004e3884:
            FUN_00532334((long *)(param_1 + 0x48),iVar16 + 1);
            piVar14 = *(int **)(param_1 + 0x58);
            iVar16 = *piVar14;
LAB_004e3898:
            *piVar14 = iVar16 + 1;
            lVar11 = *(long *)(param_1 + 0x48);
            if (lVar11 == 0) {
              puVar10 = (undefined8 *)FUN_0049e770(puVar6,0x18);
              if (puVar10 != (undefined8 *)0x0) goto LAB_004e38d4;
            }
            else {
              if (*(long *)(lVar11 + 0x70) != 0) {
                FUN_00520d08(lVar11,0,0x18);
              }
              puVar10 = (undefined8 *)FUN_00520544(lVar11,0x18,puVar8);
LAB_004e38d4:
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
            }
            iVar16 = *(int *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = iVar16 + 1;
            *(undefined8 **)(*(long *)(param_1 + 0x58) + (long)iVar16 * 8 + 8) = puVar10;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x50);
            iVar16 = *piVar14;
            if (iVar16 <= iVar5) {
              if (iVar16 == *(int *)(param_1 + 0x54)) goto LAB_004e3884;
              goto LAB_004e3898;
            }
            *(int *)(param_1 + 0x50) = iVar5 + 1;
            puVar10 = *(undefined8 **)(piVar14 + (long)iVar5 * 2 + 2);
          }
          param_2 = (byte *)FUN_0052e7f0(puVar10,param_2 + 1,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x32));
        goto LAB_004e36dc;
      }
switchD_004e3740_caseD_5:
      if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar12 - 1;
        return param_2;
      }
      uVar15 = *(ulong *)(param_1 + 8);
      if ((uVar15 & 1) == 0) {
        lVar11 = FUN_00264e54((ulong *)(param_1 + 8));
      }
      else {
        lVar11 = (uVar15 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar17._8_8_ & 0xffffffff,lVar11,param_2,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


