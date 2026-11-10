/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00547e90; name: FUN_00547e90
 */


void FUN_00547e90(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_a8;
  undefined7 uStack_a7;
  ulong local_98;
  long *plStack_90;
  byte local_88;
  undefined7 uStack_87;
  ulong local_78;
  long *plStack_70;
  undefined1 auStack_68 [8];
  ulong local_60;
  undefined8 local_50;
  int local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b0));
  lVar6 = *(long *)(param_1 + 0x198);
  if (lVar6 != 0) {
    lVar5 = param_1 + 0x198;
    do {
      bVar3 = *(uint *)(lVar6 + 0x20) < param_2;
      if (!bVar3) {
        lVar5 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar3 * 8);
    } while (lVar6 != 0);
    if ((lVar5 != param_1 + 0x198) && (*(uint *)(lVar5 + 0x20) <= param_2)) {
                    /* try { // try from 00547ef8 to 00547efb has its CatchHandler @ 00548098 */
      FUN_0054f50c(param_1 + 400);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b0));
  nn::os::LockMutex((MutexType *)(param_1 + 0x168));
                    /* try { // try from 00547f10 to 00547f1b has its CatchHandler @ 00548118 */
  FUN_00573188(auStack_68,0);
  uVar7 = *(undefined8 *)PTR_PTR_047cde38;
                    /* try { // try from 00547f28 to 00547f37 has its CatchHandler @ 00548114 */
  FUN_0056dc40(&local_88,uVar7);
  uVar1 = (ulong)&local_88 | 1;
  if ((local_88 & 1) != 0) {
    uVar1 = local_78;
  }
                    /* try { // try from 00547f4c to 00547f53 has its CatchHandler @ 005480e8 */
  FUN_005478ac(auStack_68,uVar1);
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  if (local_44 != 4) {
                    /* try { // try from 00547f8c to 00547fab has its CatchHandler @ 00548120 */
    FUN_00573014(auStack_68);
    local_44 = 4;
    puVar4 = (ulong *)(local_60 & 0xfffffffffffffffe);
    if ((local_60 & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    local_50 = FUN_0057644c(puVar4);
  }
  uVar2 = local_50;
  FUN_0024f3a0(&local_a8,param_2);
  uVar1 = (ulong)&local_a8 | 1;
  if ((local_a8 & 1) != 0) {
    uVar1 = local_98;
  }
                    /* try { // try from 00547fd8 to 00547fe7 has its CatchHandler @ 005480cc */
  FUN_0056e110(&local_88,uVar7,uVar1);
  uVar1 = (ulong)&local_88 | 1;
  if ((local_88 & 1) != 0) {
    uVar1 = local_78;
  }
                    /* try { // try from 00547ffc to 00548003 has its CatchHandler @ 005480a0 */
  FUN_0054813c(uVar2,uVar1);
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  if ((local_a8 & 1) != 0) {
    (**(code **)(*plStack_90 + 0x18))
              (plStack_90,local_98,CONCAT71(uStack_a7,local_a8) & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 00548050 to 00548057 has its CatchHandler @ 00548120 */
  FUN_00547d14(param_1 + 0x1d8,auStack_68);
  *(undefined1 *)(param_1 + 0x188) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x140));
  FUN_00573390(auStack_68);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x168));
  return;
}


