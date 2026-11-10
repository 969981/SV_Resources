/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110c724; name: FUN_0110c724
 */


undefined8 FUN_0110c724(long param_1,int *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  ulong uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  
  lVar17 = *(long *)(param_1 + 0x930);
  *(int *)(param_1 + 0x8ec) = param_3;
  uVar12 = FUN_0110c990(lVar17);
  if ((param_3 == 1) && ((uVar12 & 1) != 0)) {
    uVar12 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x950) + 0x68))();
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x8e4) = *(undefined8 *)param_2;
    uVar14 = 3;
    goto LAB_0110c8b0;
  }
  iVar13 = *(int *)(lVar17 + 0x28);
  lVar2 = 0x20;
  if (iVar13 != 0) {
    lVar2 = 0x24;
  }
  iVar5 = *(int *)(lVar17 + 0x14);
  iVar7 = *(int *)(lVar17 + lVar2);
  iVar16 = 0;
  if (iVar7 != 0) {
    iVar16 = iVar5 / iVar7;
  }
  iVar4 = *param_2;
  iVar15 = param_2[1];
  iVar6 = iVar4;
  if (iVar13 != 0) {
    iVar6 = iVar15;
  }
  iVar7 = iVar5 - iVar16 * iVar7;
  if (iVar6 < 1) {
    if ((iVar6 != 0) && (iVar6 + iVar7 < 0)) {
LAB_0110c950:
      uVar12 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x950) + 0x68))();
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x8e4) = *(undefined8 *)param_2;
      uVar14 = 4;
      goto LAB_0110c8b0;
    }
  }
  else {
    piVar3 = (int *)(lVar17 + 0x20);
    if (iVar13 != 0) {
      piVar3 = (int *)(lVar17 + 0x24);
    }
    if (*piVar3 <= iVar6 + iVar7) goto LAB_0110c950;
  }
  iVar7 = *(int *)(lVar17 + 0xc);
  if (iVar7 < 1) {
LAB_0110c7f8:
    if (iVar13 == 0) {
      iVar16 = *(int *)(lVar17 + 0x20) * iVar15;
      iVar15 = iVar4;
    }
    else {
      iVar16 = *(int *)(lVar17 + 0x24) * iVar4;
    }
    iVar5 = iVar16 + iVar15 + iVar5;
    if (-1 < iVar5) {
      if (*(int *)(lVar17 + 0x10) < iVar7) {
        iVar13 = *(int *)(lVar17 + 0x24) * *(int *)(lVar17 + 0x20) + -1;
      }
      else {
        piVar3 = (int *)(lVar17 + 0x20);
        if (iVar13 != 0) {
          piVar3 = (int *)(lVar17 + 0x24);
        }
        iVar13 = *(int *)(lVar17 + 8) + ~(*piVar3 * iVar7);
      }
      if ((iVar5 <= iVar13) &&
         (uVar12 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x950) + 0x68))(),
         (uVar12 & 1) != 0)) {
        *(undefined8 *)(param_1 + 0x8e4) = *(undefined8 *)param_2;
        *(undefined4 *)(param_1 + 0x8e0) = 1;
        return 1;
      }
    }
    return 0;
  }
  bVar11 = iVar13 != 0;
  iVar6 = *(int *)(lVar17 + 0x10);
  iVar16 = *(int *)(lVar17 + 0x20);
  if (bVar11) {
    iVar16 = *(int *)(lVar17 + 0x24);
  }
  iVar1 = iVar15;
  if (bVar11) {
    iVar1 = iVar4;
  }
  iVar8 = iVar5 + iVar16 * iVar6;
  iVar10 = iVar4 + *(int *)(lVar17 + 0x20) * iVar15;
  if (bVar11) {
    iVar10 = iVar15 + *(int *)(lVar17 + 0x24) * iVar4;
  }
  iVar9 = 0;
  if (iVar16 != 0) {
    iVar9 = (iVar8 + iVar10) / iVar16;
  }
  iVar10 = 0;
  if (iVar16 != 0) {
    iVar10 = iVar8 / iVar16;
  }
  if (iVar10 < iVar9) {
    if ((iVar6 == iVar7) || (iVar9 <= *(int *)(lVar17 + 0x1c) + iVar6)) goto LAB_0110c7f8;
  }
  else if (((iVar10 <= iVar9) || (iVar6 == 0)) || (*(int *)(lVar17 + 0x18) + iVar6 <= iVar9))
  goto LAB_0110c7f8;
  if (iVar1 < 1) {
    if ((iVar1 == 0) || (iVar6 < 1)) goto LAB_0110c7f8;
  }
  else if (iVar7 <= iVar6) goto LAB_0110c7f8;
  uVar12 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x950) + 0x68))();
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x8e4) = *(undefined8 *)param_2;
  uVar14 = 2;
LAB_0110c8b0:
  *(undefined4 *)(param_1 + 0x8e0) = uVar14;
  return 1;
}


