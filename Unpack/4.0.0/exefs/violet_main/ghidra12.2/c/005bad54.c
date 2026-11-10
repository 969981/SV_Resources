/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bad54; name: FUN_005bad54
 */


void FUN_005bad54(long param_1,byte *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
                    /* try { // try from 005bad74 to 005bad7f has its CatchHandler @ 005bb000 */
  FUN_005fd864(param_1,0);
  if ((*param_2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  else {
    pbVar7 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 005bada0 to 005badab has its CatchHandler @ 005baffc */
  FUN_005f8a20(&local_50,*(undefined8 *)PTR_PTR_047cbcf8,pbVar7);
  uVar2 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar2 = local_40;
  }
                    /* try { // try from 005badc0 to 005badc7 has its CatchHandler @ 005bafd0 */
  FUN_005bb024(param_1,uVar2);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  if ((param_2[0x20] & 1) == 0) {
    pbVar7 = param_2 + 0x21;
  }
  else {
    pbVar7 = *(byte **)(param_2 + 0x30);
  }
                    /* try { // try from 005bae04 to 005bae77 has its CatchHandler @ 005bb004 */
  FUN_005bb144(param_1,pbVar7);
  piVar10 = *(int **)(param_1 + 0x20);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (piVar10 == (int *)0x0) {
    iVar11 = *(int *)(param_1 + 0x1c);
LAB_005bae50:
    FUN_00532334(puVar1,iVar11 + 1);
    piVar10 = *(int **)(param_1 + 0x20);
    iVar11 = *piVar10;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar11 = *piVar10;
    if (iVar6 < iVar11) {
      *(int *)(param_1 + 0x18) = iVar6 + 1;
      uVar8 = *(undefined8 *)(piVar10 + (long)iVar6 * 2 + 2);
      goto LAB_005bae90;
    }
    if (iVar11 == *(int *)(param_1 + 0x1c)) goto LAB_005bae50;
  }
  *piVar10 = iVar11 + 1;
  uVar8 = FUN_006160e8(*puVar1);
  iVar11 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar11 + 1;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 8 + 8) = uVar8;
LAB_005bae90:
  FUN_005f5530(param_2 + 0x40,uVar8);
  lVar3 = *param_3;
  lVar4 = param_3[1];
  do {
    if (lVar3 == lVar4) {
      pbVar5 = (byte *)param_4[1];
      for (pbVar7 = (byte *)*param_4; pbVar7 != pbVar5; pbVar7 = pbVar7 + 0x20) {
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        else {
          pbVar9 = *(byte **)(pbVar7 + 0x10);
        }
                    /* try { // try from 005baec4 to 005baecb has its CatchHandler @ 005bb008 */
        FUN_005bb264(param_1,pbVar9);
      }
      FUN_00213580(&local_50);
      uVar2 = (ulong)&local_50 | 1;
      if ((local_50 & 1) != 0) {
        uVar2 = local_40;
      }
                    /* try { // try from 005baef8 to 005baeff has its CatchHandler @ 005bafcc */
      FUN_005bb36c(param_1,uVar2);
      if ((local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
      }
      return;
    }
    piVar10 = *(int **)(param_1 + 0x20);
    if (piVar10 == (int *)0x0) {
      iVar11 = *(int *)(param_1 + 0x1c);
LAB_005baf88:
                    /* try { // try from 005baf8c to 005bafaf has its CatchHandler @ 005bb00c */
      FUN_00532334(puVar1,iVar11 + 1);
      piVar10 = *(int **)(param_1 + 0x20);
      iVar11 = *piVar10;
LAB_005baf9c:
      *piVar10 = iVar11 + 1;
      uVar8 = FUN_006160e8(*puVar1);
      iVar11 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar11 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 8 + 8) = uVar8;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18);
      iVar11 = *piVar10;
      if (iVar11 <= iVar6) {
        if (iVar11 == *(int *)(param_1 + 0x1c)) goto LAB_005baf88;
        goto LAB_005baf9c;
      }
      *(int *)(param_1 + 0x18) = iVar6 + 1;
      uVar8 = *(undefined8 *)(piVar10 + (long)iVar6 * 2 + 2);
    }
    FUN_005f5530(lVar3,uVar8);
    lVar3 = lVar3 + 0x68;
  } while( true );
}


