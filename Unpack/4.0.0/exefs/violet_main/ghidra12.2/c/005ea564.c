/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005ea564; name: FUN_005ea564
 */


void FUN_005ea564(long param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
                    /* try { // try from 005ea57c to 005ea587 has its CatchHandler @ 005ea758 */
  FUN_005fb4ac(param_1,0);
  FUN_00213500(&local_50);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 005ea5a8 to 005ea5af has its CatchHandler @ 005ea754 */
  FUN_005ea79c(param_1,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  uVar4 = FUN_005f5d40(*(undefined4 *)(param_2 + 0x78));
  puVar3 = PTR_PTR_047cbcf8;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  else {
    pbVar9 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 005ea600 to 005ea60b has its CatchHandler @ 005ea750 */
  FUN_005f7e90(&local_50,*(undefined8 *)puVar3,pbVar9);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 005ea620 to 005ea627 has its CatchHandler @ 005ea74c */
  FUN_005ea8bc(param_1,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  *(int *)(param_1 + 0x4c) = (int)*(undefined8 *)(param_2 + 0x50);
  uVar5 = FUN_00258a7c(param_2 + 0x20);
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 005ea674 to 005ea683 has its CatchHandler @ 005ea75c */
    lVar6 = FUN_0026b02c(puVar7);
    *(long *)(param_1 + 0x40) = lVar6;
  }
  FUN_0026ac80(lVar6,uVar5);
  pbVar9 = *(byte **)(param_2 + 0x58);
  pbVar2 = *(byte **)(param_2 + 0x60);
  if (pbVar9 != pbVar2) {
    do {
      if ((*pbVar9 & 1) == 0) {
        pbVar8 = pbVar9 + 1;
      }
      else {
        pbVar8 = *(byte **)(pbVar9 + 0x10);
      }
      FUN_00213520(&local_50,pbVar8,0);
      uVar1 = (ulong)&local_50 | 1;
      if ((local_50 & 1) != 0) {
        uVar1 = local_40;
      }
                    /* try { // try from 005ea6d8 to 005ea6df has its CatchHandler @ 005ea764 */
      FUN_005ea9dc(param_1,uVar1);
      if ((local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
      }
      pbVar9 = pbVar9 + 0x20;
    } while (pbVar2 != pbVar9);
  }
  *(int *)(param_1 + 0x54) = (int)*(undefined8 *)(param_2 + 0x28);
  if ((param_2[0x30] & 1) == 0) {
    param_2 = param_2 + 0x31;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x40);
  }
                    /* try { // try from 005ea728 to 005ea72f has its CatchHandler @ 005ea75c */
  FUN_005eaae4(param_1,param_2);
  return;
}


