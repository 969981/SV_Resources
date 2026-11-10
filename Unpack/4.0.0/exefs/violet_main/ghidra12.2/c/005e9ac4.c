/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e9ac4; name: FUN_005e9ac4
 */


void FUN_005e9ac4(long param_1,byte *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  ulong *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
                    /* try { // try from 005e9ae8 to 005e9af3 has its CatchHandler @ 005e9e24 */
  FUN_006036c4(param_1,0);
  FUN_00213500(&local_60);
  uVar10 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar10 = local_50;
  }
                    /* try { // try from 005e9b14 to 005e9b1b has its CatchHandler @ 005e9df8 */
  FUN_005e9e48(param_1,uVar10);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if (lVar13 == 0) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
                    /* try { // try from 005e9bd0 to 005e9bd3 has its CatchHandler @ 005e9e28 */
    lVar13 = FUN_00615d7c(puVar6);
    *(long *)(param_1 + 0x30) = lVar13;
    iVar12 = *(int *)(param_2 + 0x20);
    if (iVar12 == 0) goto LAB_005e9be4;
LAB_005e9b50:
    if (iVar12 == 1) {
      nn::util::SNPrintf((char *)&local_60,0x20,"random%u_%u_%u_%u",(ulong)*(uint *)(param_2 + 0x2c)
                         ,(ulong)*(uint *)(param_2 + 0x24),(ulong)*(uint *)(param_2 + 0x28),
                         (ulong)*(uint *)(param_2 + 0x30));
                    /* try { // try from 005e9b80 to 005e9b8f has its CatchHandler @ 005e9df4 */
      FUN_005f80e0(&local_80,*(undefined8 *)PTR_PTR_047cbcf8,&local_60);
      uVar10 = (ulong)&local_80 | 1;
      if ((local_80 & 1) != 0) {
        uVar10 = local_70;
      }
                    /* try { // try from 005e9ba4 to 005e9bab has its CatchHandler @ 005e9dd8 */
      FUN_005e9f68(lVar13,uVar10);
      if ((local_80 & 1) != 0) {
        uVar10 = CONCAT71(uStack_7f,local_80);
LAB_005e9c40:
        (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,uVar10 & 0xfffffffffffffffe,1);
      }
    }
  }
  else {
    iVar12 = *(int *)(param_2 + 0x20);
    if (iVar12 != 0) goto LAB_005e9b50;
LAB_005e9be4:
    if ((*param_2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    else {
      pbVar7 = *(byte **)(param_2 + 0x10);
    }
                    /* try { // try from 005e9c04 to 005e9c0f has its CatchHandler @ 005e9dd4 */
    FUN_005f80e0(&local_60,*(undefined8 *)PTR_PTR_047cbcf8,pbVar7);
    uVar10 = (ulong)&local_60 | 1;
    if ((local_60 & 1) != 0) {
      uVar10 = local_50;
    }
                    /* try { // try from 005e9c24 to 005e9c2b has its CatchHandler @ 005e9dd0 */
    FUN_005e9f68(lVar13,uVar10);
    if ((local_60 & 1) != 0) {
      uVar10 = CONCAT71(uStack_5f,local_60);
      plStack_68 = plStack_48;
      local_70 = local_50;
      goto LAB_005e9c40;
    }
  }
  piVar11 = *(int **)(lVar13 + 0x20);
  puVar1 = (undefined8 *)(lVar13 + 0x10);
  if (piVar11 == (int *)0x0) {
    iVar12 = *(int *)(lVar13 + 0x1c);
LAB_005e9c94:
                    /* try { // try from 005e9c98 to 005e9cbb has its CatchHandler @ 005e9e28 */
    FUN_00532334(puVar1,iVar12 + 1);
    piVar11 = *(int **)(lVar13 + 0x20);
    iVar12 = *piVar11;
  }
  else {
    iVar5 = *(int *)(lVar13 + 0x18);
    iVar12 = *piVar11;
    if (iVar5 < iVar12) {
      *(int *)(lVar13 + 0x18) = iVar5 + 1;
      uVar8 = *(undefined8 *)(piVar11 + (long)iVar5 * 2 + 2);
      goto LAB_005e9cd4;
    }
    if (iVar12 == *(int *)(lVar13 + 0x1c)) goto LAB_005e9c94;
  }
  *piVar11 = iVar12 + 1;
  uVar8 = FUN_006160e8(*puVar1);
  iVar12 = *(int *)(lVar13 + 0x18);
  *(int *)(lVar13 + 0x18) = iVar12 + 1;
  *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)iVar12 * 8 + 8) = uVar8;
LAB_005e9cd4:
  FUN_005f5530(param_2 + 0x38,uVar8);
  lVar2 = *param_3;
  lVar3 = param_3[1];
  do {
    if (lVar2 == lVar3) {
      pbVar4 = (byte *)param_4[1];
      for (pbVar7 = (byte *)*param_4; pbVar7 != pbVar4; pbVar7 = pbVar7 + 0x20) {
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        else {
          pbVar9 = *(byte **)(pbVar7 + 0x10);
        }
                    /* try { // try from 005e9d08 to 005e9d0f has its CatchHandler @ 005e9e2c */
        FUN_005ca228(param_1,pbVar9);
      }
      return;
    }
    piVar11 = *(int **)(lVar13 + 0x20);
    if (piVar11 == (int *)0x0) {
      iVar12 = *(int *)(lVar13 + 0x1c);
LAB_005e9d84:
                    /* try { // try from 005e9d88 to 005e9dab has its CatchHandler @ 005e9e30 */
      FUN_00532334(puVar1,iVar12 + 1);
      piVar11 = *(int **)(lVar13 + 0x20);
      iVar12 = *piVar11;
LAB_005e9d98:
      *piVar11 = iVar12 + 1;
      uVar8 = FUN_006160e8(*puVar1);
      iVar12 = *(int *)(lVar13 + 0x18);
      *(int *)(lVar13 + 0x18) = iVar12 + 1;
      *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)iVar12 * 8 + 8) = uVar8;
    }
    else {
      iVar5 = *(int *)(lVar13 + 0x18);
      iVar12 = *piVar11;
      if (iVar12 <= iVar5) {
        if (iVar12 == *(int *)(lVar13 + 0x1c)) goto LAB_005e9d84;
        goto LAB_005e9d98;
      }
      *(int *)(lVar13 + 0x18) = iVar5 + 1;
      uVar8 = *(undefined8 *)(piVar11 + (long)iVar5 * 2 + 2);
    }
    FUN_005f5530(lVar2,uVar8);
    lVar2 = lVar2 + 0x68;
  } while( true );
}


