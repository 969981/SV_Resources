/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdf9b4; name: FUN_00bdf9b4
 */


/* WARNING: Removing unreachable block (ram,0x00bdfa2c) */

undefined8 FUN_00bdf9b4(long param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  
  puVar5 = PTR_DAT_047dabb0;
  piVar1 = (int *)(param_1 + 0x18);
LAB_00bdf9fc:
  while (pbVar13 = (byte *)*param_2, (byte *)param_2[1] <= pbVar13) {
    uVar9 = 0;
LAB_00bdfa34:
    iVar7 = FUN_00c096d0(param_2,uVar9);
    bVar6 = iVar7 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar7;
    uVar9 = (ulong)CONCAT14(bVar6,iVar7);
    if (bVar6) goto LAB_00bdfa58;
switchD_00bdfa74_default:
    if (((uint)uVar9 == 0) || (((uint)uVar9 & 7) == 4)) {
      return 1;
    }
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar12 = uVar12 & 0xfffffffffffffffe;
    }
    uVar9 = FUN_00c01b50(param_2,uVar9 & 0xffffffff,uVar12);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  bVar4 = *pbVar13;
  uVar9 = (ulong)(uint)bVar4;
  if ((char)bVar4 < '\x01') goto LAB_00bdfa34;
  *(uint *)(param_2 + 4) = (uint)bVar4;
  *param_2 = (ulong)(pbVar13 + 1);
LAB_00bdfa58:
  iVar7 = (int)uVar9;
  switch((uint)(uVar9 >> 3) & 0x1fffffff) {
  case 1:
    if (iVar7 == 8) {
      uVar9 = FUN_00bdd41c(10,param_2,piVar1);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      pbVar15 = (byte *)param_2[1];
    }
    else {
      if (iVar7 != 10) goto switchD_00bdfa74_default;
      pbVar13 = (byte *)*param_2;
      pbVar14 = (byte *)param_2[1];
      if ((pbVar13 < pbVar14) && (-1 < (char)*pbVar13)) {
        uVar8 = (uint)*pbVar13;
        pbVar13 = pbVar13 + 1;
        *param_2 = (ulong)pbVar13;
      }
      else {
        uVar8 = FUN_00c0954c(param_2);
        if ((int)uVar8 < 0) {
          return 0;
        }
        pbVar13 = (byte *)*param_2;
        pbVar14 = (byte *)param_2[1];
      }
      iVar11 = (int)param_2[3];
      iVar3 = (int)param_2[5];
      pbVar15 = pbVar14 + *(int *)((long)param_2 + 0x2c);
      param_2[1] = (ulong)pbVar15;
      iVar17 = (int)param_2[6];
      iVar7 = (iVar11 - *(int *)((long)param_2 + 0x2c)) + ((int)pbVar13 - (int)pbVar14);
      iVar2 = 0x7fffffff;
      if ((int)uVar8 <= 0x7fffffff - iVar7) {
        iVar2 = iVar7 + uVar8;
      }
      iVar7 = iVar3;
      if (iVar2 <= iVar3) {
        iVar7 = iVar2;
      }
      iVar2 = iVar17;
      if (iVar7 <= iVar17) {
        iVar2 = iVar7;
      }
      iVar16 = iVar11 - iVar2;
      *(int *)(param_2 + 5) = iVar7;
      if (iVar16 == 0 || iVar11 < iVar2) {
        iVar16 = 0;
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pbVar15 = pbVar15 + -(long)iVar16;
        *(int *)((long)param_2 + 0x2c) = iVar16;
        param_2[1] = (ulong)pbVar15;
      }
      if ((iVar7 != 0x7fffffff) && (0 < (iVar7 - iVar11) + iVar16 + ((int)pbVar15 - (int)pbVar13)))
      {
        do {
          if (pbVar13 < pbVar15) {
            uVar9 = (ulong)*pbVar13;
            if ((char)*pbVar13 < '\0') goto LAB_00bdfbe4;
            *param_2 = (ulong)(pbVar13 + 1);
          }
          else {
            uVar9 = 0;
LAB_00bdfbe4:
            uVar9 = FUN_00c0944c(param_2,uVar9);
            if ((long)uVar9 < 0) {
              return 0;
            }
          }
          iVar7 = *(int *)(param_1 + 0x18);
          if (iVar7 == *(int *)(param_1 + 0x1c)) {
            FUN_00ba867c(piVar1,iVar7 + 1);
            iVar7 = *piVar1;
          }
          *(int *)(param_1 + 0x18) = iVar7 + 1;
          *(int *)(*(long *)(param_1 + 0x20) + (long)iVar7 * 4 + 8) = (int)uVar9;
          if ((int)param_2[5] == 0x7fffffff) {
            iVar16 = *(int *)((long)param_2 + 0x2c);
            pbVar15 = (byte *)param_2[1];
            iVar11 = (int)param_2[3];
            break;
          }
          iVar11 = (int)param_2[3];
          iVar16 = *(int *)((long)param_2 + 0x2c);
          pbVar13 = (byte *)*param_2;
          pbVar15 = (byte *)param_2[1];
        } while (0 < ((int)param_2[5] - iVar11) + iVar16 + ((int)pbVar15 - (int)pbVar13));
        iVar17 = (int)param_2[6];
      }
      pbVar15 = pbVar15 + iVar16;
      if (iVar3 <= iVar17) {
        iVar17 = iVar3;
      }
      iVar7 = iVar11 - iVar17;
      *(int *)(param_2 + 5) = iVar3;
      param_2[1] = (ulong)pbVar15;
      if (iVar7 == 0 || iVar11 < iVar17) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pbVar15 = pbVar15 + -(long)iVar7;
        *(int *)((long)param_2 + 0x2c) = iVar7;
        param_2[1] = (ulong)pbVar15;
      }
      *(undefined1 *)((long)param_2 + 0x24) = 0;
    }
    pbVar13 = (byte *)*param_2;
    if ((pbVar15 <= pbVar13) || (*pbVar13 != 0x12)) goto LAB_00bdf9fc;
    *param_2 = (ulong)(pbVar13 + 1);
    break;
  case 2:
    if (iVar7 != 0x12) goto switchD_00bdfa74_default;
    break;
  case 3:
    if (iVar7 != 0x18) goto switchD_00bdfa74_default;
    pbVar13 = (byte *)*param_2;
    pbVar14 = (byte *)param_2[1];
    goto LAB_00bdfd1c;
  case 4:
    if (iVar7 != 0x20) goto switchD_00bdfa74_default;
    pbVar13 = (byte *)*param_2;
    pbVar14 = (byte *)param_2[1];
    goto LAB_00bdfd90;
  default:
    goto switchD_00bdfa74_default;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 == *(long *)puVar5) {
    FUN_00b6eb88((long *)(param_1 + 0x30),*(long *)puVar5);
    lVar10 = *(long *)(param_1 + 0x30);
  }
  uVar9 = FUN_00c0d824(param_2,lVar10);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  pbVar13 = (byte *)*param_2;
  pbVar14 = (byte *)param_2[1];
  if ((pbVar13 < pbVar14) && (*pbVar13 == 0x18)) {
    pbVar13 = pbVar13 + 1;
    *param_2 = (ulong)pbVar13;
LAB_00bdfd1c:
    if (pbVar13 < pbVar14) {
      uVar9 = (ulong)*pbVar13;
      if ((char)*pbVar13 < '\0') goto LAB_00bdfd50;
      *param_2 = (ulong)(pbVar13 + 1);
    }
    else {
      uVar9 = 0;
LAB_00bdfd50:
      uVar9 = FUN_00c0944c(param_2,uVar9);
      if ((long)uVar9 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x38) = (int)uVar9;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    pbVar13 = (byte *)*param_2;
    pbVar14 = (byte *)param_2[1];
    if ((pbVar13 < pbVar14) && (*pbVar13 == 0x20)) {
      pbVar13 = pbVar13 + 1;
      *param_2 = (ulong)pbVar13;
LAB_00bdfd90:
      if (pbVar13 < pbVar14) {
        uVar9 = (ulong)*pbVar13;
        if ((char)*pbVar13 < '\0') goto LAB_00bdfdb4;
        *param_2 = (ulong)(pbVar13 + 1);
      }
      else {
        uVar9 = 0;
LAB_00bdfdb4:
        uVar9 = FUN_00c0944c(param_2,uVar9);
        if ((long)uVar9 < 0) {
          return 0;
        }
      }
      *(int *)(param_1 + 0x3c) = (int)uVar9;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if ((*param_2 == param_2[1]) &&
         ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
  }
  goto LAB_00bdf9fc;
}


