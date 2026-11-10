/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b9d98; name: FUN_005b9d98
 */


void FUN_005b9d98(long param_1,byte *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
                    /* try { // try from 005b9dbc to 005b9dc7 has its CatchHandler @ 005ba10c */
  FUN_005f92e4(param_1,0);
  FUN_00213500(&local_60);
  uVar2 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar2 = local_50;
  }
                    /* try { // try from 005b9de8 to 005b9def has its CatchHandler @ 005ba0e0 */
  FUN_005ba130(param_1,uVar2);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if (lVar13 == 0) {
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
                    /* try { // try from 005b9e28 to 005b9e2b has its CatchHandler @ 005ba110 */
    lVar13 = FUN_00615af4(puVar5);
    *(long *)(param_1 + 0x30) = lVar13;
  }
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  else {
    pbVar9 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 005b9e54 to 005b9e5f has its CatchHandler @ 005ba0dc */
  FUN_005f80e0(&local_60,*(undefined8 *)PTR_PTR_047cbcf8,pbVar9);
  uVar2 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar2 = local_50;
  }
                    /* try { // try from 005b9e74 to 005b9e7b has its CatchHandler @ 005ba0d8 */
  FUN_005ba250(lVar13,uVar2);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  lVar6 = *(long *)(lVar13 + 0x50);
  if (lVar6 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar13 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
                    /* try { // try from 005b9ec8 to 005b9fab has its CatchHandler @ 005ba110 */
    lVar6 = FUN_00615f34(puVar5);
    *(long *)(lVar13 + 0x50) = lVar6;
    if ((param_2[0x28] & 1) == 0) goto LAB_005b9eb4;
LAB_005b9edc:
    pbVar9 = *(byte **)(param_2 + 0x38);
  }
  else {
    if ((param_2[0x28] & 1) != 0) goto LAB_005b9edc;
LAB_005b9eb4:
    pbVar9 = param_2 + 0x29;
  }
  FUN_005ba370(lVar6,pbVar9);
  uVar7 = FUN_00258a7c(param_2 + 0x20);
  lVar6 = *(long *)(lVar13 + 0x50);
  if (lVar6 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar13 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar6 = FUN_00615f34(puVar5);
    *(long *)(lVar13 + 0x50) = lVar6;
    lVar8 = *(long *)(lVar6 + 0x48);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x48);
  }
  if (lVar8 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0026b02c(puVar5);
    *(long *)(lVar6 + 0x48) = lVar8;
  }
  FUN_0026ac80(lVar8,uVar7);
  piVar11 = *(int **)(lVar13 + 0x20);
  puVar1 = (undefined8 *)(lVar13 + 0x10);
  if (piVar11 == (int *)0x0) {
    iVar12 = *(int *)(lVar13 + 0x1c);
LAB_005b9f84:
    FUN_00532334(puVar1,iVar12 + 1);
    piVar11 = *(int **)(lVar13 + 0x20);
    iVar12 = *piVar11;
  }
  else {
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar12 = *piVar11;
    if (iVar4 < iVar12) {
      *(int *)(lVar13 + 0x18) = iVar4 + 1;
      uVar7 = *(undefined8 *)(piVar11 + (long)iVar4 * 2 + 2);
      goto LAB_005b9fc4;
    }
    if (iVar12 == *(int *)(lVar13 + 0x1c)) goto LAB_005b9f84;
  }
  *piVar11 = iVar12 + 1;
  uVar7 = FUN_006160e8(*puVar1);
  iVar12 = *(int *)(lVar13 + 0x18);
  *(int *)(lVar13 + 0x18) = iVar12 + 1;
  *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)iVar12 * 8 + 8) = uVar7;
LAB_005b9fc4:
  FUN_005f5530(param_2 + 0x48,uVar7);
  lVar6 = *param_3;
  lVar8 = param_3[1];
  do {
    if (lVar6 == lVar8) {
      pbVar3 = (byte *)param_4[1];
      for (pbVar9 = (byte *)*param_4; pbVar9 != pbVar3; pbVar9 = pbVar9 + 0x20) {
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        else {
          pbVar10 = *(byte **)(pbVar9 + 0x10);
        }
                    /* try { // try from 005b9ff8 to 005b9fff has its CatchHandler @ 005ba114 */
        FUN_005ba490(param_1,pbVar10);
      }
      return;
    }
    piVar11 = *(int **)(lVar13 + 0x20);
    if (piVar11 == (int *)0x0) {
      iVar12 = *(int *)(lVar13 + 0x1c);
LAB_005ba074:
                    /* try { // try from 005ba078 to 005ba09b has its CatchHandler @ 005ba118 */
      FUN_00532334(puVar1,iVar12 + 1);
      piVar11 = *(int **)(lVar13 + 0x20);
      iVar12 = *piVar11;
LAB_005ba088:
      *piVar11 = iVar12 + 1;
      uVar7 = FUN_006160e8(*puVar1);
      iVar12 = *(int *)(lVar13 + 0x18);
      *(int *)(lVar13 + 0x18) = iVar12 + 1;
      *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)iVar12 * 8 + 8) = uVar7;
    }
    else {
      iVar4 = *(int *)(lVar13 + 0x18);
      iVar12 = *piVar11;
      if (iVar12 <= iVar4) {
        if (iVar12 == *(int *)(lVar13 + 0x1c)) goto LAB_005ba074;
        goto LAB_005ba088;
      }
      *(int *)(lVar13 + 0x18) = iVar4 + 1;
      uVar7 = *(undefined8 *)(piVar11 + (long)iVar4 * 2 + 2);
    }
    FUN_005f5530(lVar6,uVar7);
    lVar6 = lVar6 + 0x68;
  } while( true );
}


