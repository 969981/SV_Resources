/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00272670; name: FUN_00272670
 */


void FUN_00272670(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *local_38;
  
  puVar5 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x80))(*(long **)PTR_DAT_047cbb08,param_1 + 0x18);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  uVar2 = *param_3;
  lVar7 = param_3[1];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(long *)(param_1 + 0x10) = lVar7;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
      plVar9 = *(long **)(param_1 + 0x70);
      goto joined_r0x002727a0;
    }
  }
  plVar9 = *(long **)(param_1 + 0x70);
joined_r0x002727a0:
                    /* try { // try from 0027270c to 0027270f has its CatchHandler @ 00272844 */
  if ((plVar9 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_1 + 0x38)),
     (uVar6 & 1) == 0)) {
    local_38 = PTR_DAT_047cc380 + 0x10;
    lVar7 = *(long *)(param_1 + 0x170);
    lVar8 = *(long *)(param_1 + 0x178);
    if (lVar8 != lVar7) {
      uVar6 = 0;
      do {
        if ((ulong)(lVar8 - lVar7 >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar9 = *(long **)(lVar7 + uVar6 * 8);
                    /* try { // try from 0027274c to 00272753 has its CatchHandler @ 00272848 */
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_38);
        lVar7 = *(long *)(param_1 + 0x170);
        lVar8 = *(long *)(param_1 + 0x178);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar8 - lVar7 >> 3));
    }
                    /* try { // try from 00272768 to 0027277f has its CatchHandler @ 00272844 */
    FUN_0036bf20(param_2,1,"Failed to set credentials to rpc.",0);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_38 = PTR_DAT_047cc380 + 0x10;
    lVar7 = *(long *)(param_1 + 0x170);
    lVar8 = *(long *)(param_1 + 0x178);
    if (lVar8 != lVar7) {
      uVar6 = 0;
      do {
        if ((ulong)(lVar8 - lVar7 >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00272834 to 0027283f has its CatchHandler @ 00272844 */
          abort();
        }
        plVar9 = *(long **)(lVar7 + uVar6 * 8);
                    /* try { // try from 002727e4 to 002727eb has its CatchHandler @ 0027284c */
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_38);
        lVar7 = *(long *)(param_1 + 0x170);
        lVar8 = *(long *)(param_1 + 0x178);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar8 - lVar7 >> 3));
    }
                    /* try { // try from 00272804 to 0027280b has its CatchHandler @ 00272844 */
    FUN_0036bc40(*(undefined8 *)(param_1 + 0x38),0);
  }
                    /* try { // try from 00272818 to 0027281f has its CatchHandler @ 00272840 */
  (**(code **)(**(long **)puVar5 + 0x88))(*(long **)puVar5,param_1 + 0x18);
  return;
}


