/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00547240; name: FUN_00547240
 */


int FUN_00547240(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  byte local_e0;
  undefined7 uStack_df;
  ulong local_d0;
  long *plStack_c8;
  byte local_c0;
  undefined7 uStack_bf;
  ulong local_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong local_98;
  long local_88;
  undefined8 local_80;
  long alStack_70 [4];
  long *local_50;
  int local_34;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b0));
  local_34 = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x1d0) = local_34;
  if ((&lStack_a0 == param_3) || (plVar2 = (long *)param_3[4], plVar2 == (long *)0x0)) {
    local_80 = (long *)0x0;
  }
  else if (plVar2 == param_3) {
    local_80 = &lStack_a0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_a0);
  }
  else {
    param_3[4] = 0;
    local_80 = plVar2;
  }
  local_50 = (long *)0x0;
  if (alStack_70 != param_4) {
    local_50 = alStack_70;
    plVar2 = (long *)param_4[4];
    if (plVar2 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else if (plVar2 == param_4) {
      (**(code **)(*plVar2 + 0x30))(plVar2,local_50);
    }
    else {
      param_4[4] = 0;
      local_50 = plVar2;
    }
  }
  plVar2 = alStack_70;
                    /* try { // try from 00547338 to 00547347 has its CatchHandler @ 00547810 */
  FUN_0054f2dc(param_1 + 400,&local_34,&local_34,&lStack_a0);
  if (local_50 != (long *)0x0) {
    if (local_50 == plVar2) {
      pcVar6 = *(code **)(*local_50 + 0x10);
    }
    else {
      pcVar6 = *(code **)(*local_50 + 0x18);
      plVar2 = local_50;
    }
    (*pcVar6)(plVar2);
  }
  if (local_80 != (long *)0x0) {
    if (local_80 == &lStack_a0) {
      pcVar6 = *(code **)(*local_80 + 0x10);
      plVar2 = &lStack_a0;
    }
    else {
      pcVar6 = *(code **)(*local_80 + 0x18);
      plVar2 = local_80;
    }
    (*pcVar6)(plVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b0));
  nn::os::LockMutex((MutexType *)(param_1 + 0x168));
                    /* try { // try from 005473b0 to 005473bb has its CatchHandler @ 005477fc */
  FUN_00573188(&lStack_a0,0);
  uVar7 = *(undefined8 *)PTR_PTR_047cde38;
                    /* try { // try from 005473c8 to 005473d7 has its CatchHandler @ 005477f8 */
  FUN_0056dc40(&local_c0,uVar7);
  uVar3 = (ulong)&local_c0 | 1;
  if ((local_c0 & 1) != 0) {
    uVar3 = local_b0;
  }
                    /* try { // try from 005473ec to 005473f3 has its CatchHandler @ 005477cc */
  FUN_005478ac(&lStack_a0,uVar3);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  uVar3 = FUN_00567ef0(param_2);
  if ((uVar3 & 1) == 0) {
    if (local_80._4_4_ != 3) {
                    /* try { // try from 00547520 to 00547593 has its CatchHandler @ 00547890 */
      FUN_00573014(&lStack_a0);
      local_80 = (long *)CONCAT44(3,(undefined4)local_80);
      puVar5 = (ulong *)(local_98 & 0xfffffffffffffffe);
      if ((local_98 & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      local_88 = FUN_0057638c(puVar5);
      lVar8 = *(long *)(local_88 + 0x10);
      if (lVar8 == 0) goto LAB_00547550;
LAB_00547460:
      if (*(int *)(lVar8 + 0x24) == 3) goto LAB_0054746c;
LAB_00547574:
      FUN_00578bac(lVar8);
      *(undefined4 *)(lVar8 + 0x24) = 3;
      puVar5 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar9 = FUN_00586150(puVar5);
      *(undefined8 *)(lVar8 + 0x18) = uVar9;
    }
    else {
      lVar8 = *(long *)(local_88 + 0x10);
      if (lVar8 != 0) goto LAB_00547460;
LAB_00547550:
      lVar4 = local_88;
      puVar5 = (ulong *)(*(ulong *)(local_88 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(local_88 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar8 = FUN_0058557c(puVar5);
      *(long *)(lVar4 + 0x10) = lVar8;
      if (*(int *)(lVar8 + 0x24) != 3) goto LAB_00547574;
LAB_0054746c:
      uVar9 = *(undefined8 *)(lVar8 + 0x18);
    }
                    /* try { // try from 0054759c to 005475ab has its CatchHandler @ 00547778 */
    FUN_0056dd80(&local_c0,param_2);
    uVar3 = (ulong)&local_c0 | 1;
    if ((local_c0 & 1) != 0) {
      uVar3 = local_b0;
    }
                    /* try { // try from 005475c0 to 005475c7 has its CatchHandler @ 00547774 */
    FUN_00547ad4(uVar9,uVar3);
    goto LAB_005475c8;
  }
  if (local_80._4_4_ != 3) {
                    /* try { // try from 00547474 to 005474e7 has its CatchHandler @ 00547890 */
    FUN_00573014(&lStack_a0);
    local_80 = (long *)CONCAT44(3,(undefined4)local_80);
    puVar5 = (ulong *)(local_98 & 0xfffffffffffffffe);
    if ((local_98 & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    local_88 = FUN_0057638c(puVar5);
    lVar8 = *(long *)(local_88 + 0x10);
    if (lVar8 == 0) goto LAB_005474a4;
LAB_0054743c:
    if (*(int *)(lVar8 + 0x24) == 2) goto LAB_00547448;
LAB_005474c8:
    FUN_00578bac(lVar8);
    *(undefined4 *)(lVar8 + 0x24) = 2;
    puVar5 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar9 = FUN_00586078(puVar5);
    *(undefined8 *)(lVar8 + 0x18) = uVar9;
  }
  else {
    lVar8 = *(long *)(local_88 + 0x10);
    if (lVar8 != 0) goto LAB_0054743c;
LAB_005474a4:
    lVar4 = local_88;
    puVar5 = (ulong *)(*(ulong *)(local_88 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(local_88 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0058557c(puVar5);
    *(long *)(lVar4 + 0x10) = lVar8;
    if (*(int *)(lVar8 + 0x24) != 2) goto LAB_005474c8;
LAB_00547448:
    uVar9 = *(undefined8 *)(lVar8 + 0x18);
  }
                    /* try { // try from 005474f0 to 005474ff has its CatchHandler @ 00547780 */
  FUN_0056dd80(&local_c0,param_2);
  uVar3 = (ulong)&local_c0 | 1;
  if ((local_c0 & 1) != 0) {
    uVar3 = local_b0;
  }
                    /* try { // try from 00547514 to 0054751b has its CatchHandler @ 0054777c */
  FUN_005479cc(uVar9,uVar3);
LAB_005475c8:
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  if (local_80._4_4_ == 3) {
    lVar8 = *(long *)(local_88 + 0x10);
    lVar4 = local_88;
  }
  else {
                    /* try { // try from 00547608 to 00547647 has its CatchHandler @ 00547890 */
    FUN_00573014(&lStack_a0);
    local_80 = (long *)CONCAT44(3,(undefined4)local_80);
    puVar5 = (ulong *)(local_98 & 0xfffffffffffffffe);
    if ((local_98 & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_0057638c(puVar5);
    lVar8 = *(long *)(lVar4 + 0x10);
  }
  local_88 = lVar4;
  if (lVar8 == 0) {
    puVar5 = (ulong *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0058557c(puVar5);
    *(long *)(lVar4 + 0x10) = lVar8;
  }
  FUN_0024f3a0(&local_e0,local_34);
  uVar3 = (ulong)&local_e0 | 1;
  if ((local_e0 & 1) != 0) {
    uVar3 = local_d0;
  }
                    /* try { // try from 00547674 to 00547683 has its CatchHandler @ 005477b0 */
  FUN_0056e110(&local_c0,uVar7,uVar3);
  uVar3 = (ulong)&local_c0 | 1;
  if ((local_c0 & 1) != 0) {
    uVar3 = local_b0;
  }
                    /* try { // try from 00547698 to 0054769f has its CatchHandler @ 00547784 */
  FUN_00547bf4(lVar8,uVar3);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  if ((local_e0 & 1) != 0) {
    (**(code **)(*plStack_c8 + 0x18))
              (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 005476ec to 005476f3 has its CatchHandler @ 00547890 */
  FUN_00547d14(param_1 + 0x1d8,&lStack_a0);
  *(undefined1 *)(param_1 + 0x188) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x140));
  iVar1 = local_34;
  FUN_00573390(&lStack_a0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x168));
  return iVar1;
}


