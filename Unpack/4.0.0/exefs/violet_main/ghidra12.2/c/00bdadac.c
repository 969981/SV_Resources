/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdadac; name: FUN_00bdadac
 */


/* WARNING: Removing unreachable block (ram,0x00bdae34) */

undefined8 FUN_00bdadac(long param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  char *pcVar17;
  int iVar18;
  undefined1 auVar19 [16];
  char local_68 [8];
  
  puVar5 = PTR_DAT_047dabb0;
LAB_00bdae04:
  do {
    pbVar15 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar15) {
      uVar9 = 0;
LAB_00bdae3c:
      iVar7 = FUN_00c096d0(param_2,uVar9);
      bVar6 = iVar7 - 1U < 0x7f;
      *(int *)(param_2 + 4) = iVar7;
      uVar9 = (ulong)CONCAT14(bVar6,iVar7);
      if (bVar6) goto LAB_00bdae60;
      goto switchD_00bdae7c_default;
    }
    bVar4 = *pbVar15;
    uVar9 = (ulong)(uint)bVar4;
    if ((char)bVar4 < '\x01') goto LAB_00bdae3c;
    *(uint *)(param_2 + 4) = (uint)bVar4;
    *param_2 = (ulong)(pbVar15 + 1);
LAB_00bdae60:
    iVar7 = (int)uVar9;
    switch((uint)(uVar9 >> 3) & 0x1fffffff) {
    case 2:
      if (iVar7 == 0x12) {
        uVar9 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        do {
          piVar11 = *(int **)(param_1 + 0x28);
          if (piVar11 == (int *)0x0) {
            iVar7 = *(int *)(param_1 + 0x20);
            iVar18 = *(int *)(param_1 + 0x24);
LAB_00bdaedc:
            if (iVar7 <= iVar18) {
              FUN_00c11f04(param_1 + 0x18,(iVar18 - iVar7) + 1);
              piVar11 = *(int **)(param_1 + 0x28);
            }
            iVar18 = *piVar11;
LAB_00bdaef8:
            *piVar11 = iVar18 + 1;
            uVar16 = FUN_00be214c(*(undefined8 *)(param_1 + 0x18));
            iVar7 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar7 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar7 * 8 + 8) = uVar16;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x20);
            iVar18 = *piVar11;
            if (iVar18 <= iVar7) {
              if (iVar18 == *(int *)(param_1 + 0x24)) goto LAB_00bdaedc;
              goto LAB_00bdaef8;
            }
            *(int *)(param_1 + 0x20) = iVar7 + 1;
            uVar16 = *(undefined8 *)(piVar11 + (long)iVar7 * 2 + 2);
          }
          pbVar15 = (byte *)*param_2;
          if (pbVar15 < (byte *)param_2[1]) {
            uVar9 = (ulong)*pbVar15;
            if ((char)*pbVar15 < '\0') goto LAB_00bdaf4c;
            *param_2 = (ulong)(pbVar15 + 1);
          }
          else {
            uVar9 = 0;
LAB_00bdaf4c:
            uVar9 = FUN_00c0944c(param_2,uVar9);
            if ((long)uVar9 < 0) {
              uVar9 = 0;
            }
          }
          iVar2 = (int)param_2[3];
          iVar1 = (int)param_2[5];
          iVar7 = (iVar2 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar8 = (int)uVar9;
          uVar9 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar9;
          iVar18 = 0x7fffffff;
          if (iVar8 <= 0x7fffffff - iVar7 && -1 < iVar8) {
            iVar18 = iVar7 + iVar8;
          }
          iVar7 = iVar1;
          if (iVar18 <= iVar1) {
            iVar7 = iVar18;
          }
          *(int *)(param_2 + 5) = iVar7;
          iVar18 = (int)param_2[6];
          if (iVar7 <= (int)param_2[6]) {
            iVar18 = iVar7;
          }
          iVar7 = iVar2 - iVar18;
          if (iVar7 == 0 || iVar2 < iVar18) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar7;
            param_2[1] = uVar9 - (long)iVar7;
          }
          uVar9 = FUN_00bd98b4(uVar16,param_2);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          pcVar17 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar7 = (int)param_2[6];
          if (iVar1 <= (int)param_2[6]) {
            iVar7 = iVar1;
          }
          cVar3 = *(char *)((long)param_2 + 0x24);
          *(int *)(param_2 + 5) = iVar1;
          param_2[1] = (ulong)pcVar17;
          iVar18 = (int)param_2[3] - iVar7;
          if (iVar18 == 0 || (int)param_2[3] < iVar7) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar17 = pcVar17 + -(long)iVar18;
            *(int *)((long)param_2 + 0x2c) = iVar18;
            param_2[1] = (ulong)pcVar17;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar12 = (char *)*param_2;
          if (pcVar17 <= pcVar12) {
            *(int *)(param_2 + 7) = (int)param_2[7] + 1;
            goto LAB_00bdae04;
          }
          if (*pcVar12 != '\x12') goto LAB_00bdb0d0;
          *param_2 = (ulong)(pcVar12 + 1);
        } while( true );
      }
    default:
switchD_00bdae7c_default:
      if (((uint)uVar9 == 0) || (((uint)uVar9 & 7) == 4)) {
        return 1;
      }
      uVar13 = *(ulong *)(param_1 + 8);
      if ((uVar13 & 1) == 0) {
        uVar13 = FUN_00b7714c((ulong *)(param_1 + 8));
      }
      else {
        uVar13 = uVar13 & 0xfffffffffffffffe;
      }
      uVar9 = FUN_00c01b50(param_2,uVar9 & 0xffffffff,uVar13);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      break;
    case 3:
      if (iVar7 != 0x1a) goto switchD_00bdae7c_default;
      goto LAB_00bdb0f0;
    case 4:
      if (iVar7 != 0x20) goto switchD_00bdae7c_default;
      pbVar15 = (byte *)*param_2;
      pbVar14 = (byte *)param_2[1];
      goto LAB_00bdb14c;
    case 5:
      if (iVar7 != 0x28) goto switchD_00bdae7c_default;
      pbVar15 = (byte *)*param_2;
      pbVar14 = (byte *)param_2[1];
      goto LAB_00bdb1b0;
    case 6:
      if (iVar7 != 0x31) goto switchD_00bdae7c_default;
      pcVar17 = (char *)*param_2;
      pcVar12 = (char *)param_2[1];
      goto LAB_00bdb20c;
    case 7:
      if (iVar7 != 0x3a) goto switchD_00bdae7c_default;
      goto LAB_00bdb250;
    case 8:
      if (iVar7 != 0x42) goto switchD_00bdae7c_default;
      goto LAB_00bdb2ac;
    }
  } while( true );
LAB_00bdb0d0:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if (*pcVar12 == '\x1a') {
    *param_2 = (ulong)(pcVar12 + 1);
LAB_00bdb0f0:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 == *(long *)puVar5) {
      FUN_00b6eb88((long *)(param_1 + 0x30),*(long *)puVar5);
      lVar10 = *(long *)(param_1 + 0x30);
    }
    uVar9 = FUN_00c0d824(param_2,lVar10);
    if ((uVar9 & 1) != 0) {
      pbVar15 = (byte *)*param_2;
      pbVar14 = (byte *)param_2[1];
      if ((pbVar14 <= pbVar15) || (*pbVar15 != 0x20)) goto LAB_00bdae04;
      pbVar15 = pbVar15 + 1;
      *param_2 = (ulong)pbVar15;
LAB_00bdb14c:
      if ((pbVar15 < pbVar14) && (-1 < (char)*pbVar15)) {
        *(ulong *)(param_1 + 0x38) = (ulong)*pbVar15;
        *param_2 = *param_2 + 1;
      }
      else {
        auVar19 = FUN_00c09268(param_2);
        *(long *)(param_1 + 0x38) = auVar19._0_8_;
        if ((auVar19._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      pbVar15 = (byte *)*param_2;
      pbVar14 = (byte *)param_2[1];
      if ((pbVar14 <= pbVar15) || (*pbVar15 != 0x28)) goto LAB_00bdae04;
      pbVar15 = pbVar15 + 1;
      *param_2 = (ulong)pbVar15;
LAB_00bdb1b0:
      if ((pbVar15 < pbVar14) && (-1 < (char)*pbVar15)) {
        uVar9 = (ulong)*pbVar15;
        *param_2 = (ulong)(pbVar15 + 1);
      }
      else {
        auVar19 = FUN_00c09268(param_2);
        uVar9 = auVar19._0_8_;
        if ((auVar19._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(ulong *)(param_1 + 0x40) = uVar9;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      pcVar17 = (char *)*param_2;
      pcVar12 = (char *)param_2[1];
      if ((pcVar12 <= pcVar17) || (*pcVar17 != '1')) goto LAB_00bdae04;
      pcVar17 = pcVar17 + 1;
      *param_2 = (ulong)pcVar17;
LAB_00bdb20c:
      if ((int)pcVar12 - (int)pcVar17 < 8) {
        lVar10 = (long)pcVar12 - (long)pcVar17;
        if ((uint)lVar10 < 8) {
          iVar7 = 8;
          pcVar12 = local_68;
          do {
            iVar18 = (int)lVar10;
            memcpy(pcVar12,pcVar17,(long)iVar18);
            *param_2 = *param_2 + (long)iVar18;
            uVar9 = FUN_00c08eb0(param_2);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            iVar7 = iVar7 - iVar18;
            pcVar17 = (char *)*param_2;
            lVar10 = param_2[1] - (long)pcVar17;
            pcVar12 = pcVar12 + iVar18;
          } while ((int)lVar10 < iVar7);
          memcpy(pcVar12,pcVar17,(long)iVar7);
          pcVar12 = (char *)(*param_2 + (long)iVar7);
          pcVar17 = local_68;
        }
        else {
          pcVar12 = pcVar17 + 8;
        }
        *param_2 = (ulong)pcVar12;
        uVar16 = *(undefined8 *)pcVar17;
      }
      else {
        uVar16 = *(undefined8 *)pcVar17;
        *param_2 = (ulong)(pcVar17 + 8);
      }
      *(undefined8 *)(param_1 + 0x48) = uVar16;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      pcVar17 = (char *)*param_2;
      if (((char *)param_2[1] <= pcVar17) || (*pcVar17 != ':')) goto LAB_00bdae04;
      *param_2 = (ulong)(pcVar17 + 1);
LAB_00bdb250:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 == *(long *)puVar5) {
        FUN_00b6eb88((long *)(param_1 + 0x50),*(long *)puVar5);
        lVar10 = *(long *)(param_1 + 0x50);
      }
      uVar9 = FUN_00c0d824(param_2,lVar10);
      if ((uVar9 & 1) != 0) {
        pcVar17 = (char *)*param_2;
        if (((char *)param_2[1] <= pcVar17) || (*pcVar17 != 'B')) goto LAB_00bdae04;
        *param_2 = (ulong)(pcVar17 + 1);
LAB_00bdb2ac:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
        lVar10 = *(long *)(param_1 + 0x58);
        if (lVar10 == *(long *)puVar5) {
          FUN_00b6eb88((long *)(param_1 + 0x58),*(long *)puVar5);
          lVar10 = *(long *)(param_1 + 0x58);
        }
        uVar9 = FUN_00c0d824(param_2,lVar10);
        if ((uVar9 & 1) != 0) {
          if ((*param_2 == param_2[1]) &&
             ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
            *(undefined4 *)(param_2 + 4) = 0;
            *(undefined1 *)((long)param_2 + 0x24) = 1;
            return 1;
          }
          goto LAB_00bdae04;
        }
      }
    }
    return 0;
  }
  goto LAB_00bdae04;
}


