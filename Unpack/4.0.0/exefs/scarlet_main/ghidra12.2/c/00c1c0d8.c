/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1c0d8; name: FUN_00c1c0d8
 */


long FUN_00c1c0d8(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  iVar1 = *(int *)(param_2 + 0x38);
  plVar7 = param_1 + 1;
  plVar5 = (long *)*plVar7;
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar7;
    do {
      if (iVar1 <= (int)plVar5[4]) {
        plVar9 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < iVar1];
    } while (plVar5 != (long *)0x0);
    if ((plVar9 != plVar7) && ((int)plVar9[4] <= iVar1)) {
      if ((*(byte *)((long)plVar9 + 0x32) >> 4 & 1) == 0) {
        lVar8 = plVar9[5];
      }
      else {
        plVar5 = (long *)plVar9[5];
        uVar2 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x68));
        lVar8 = (**(code **)(*plVar5 + 0x40))(plVar5,uVar2);
        if ((param_1[3] == 0) && ((long *)plVar9[5] != (long *)0x0)) {
          (**(code **)(*(long *)plVar9[5] + 8))();
        }
      }
      plVar5 = (long *)*plVar7;
      if (plVar5 == (long *)0x0) {
        return lVar8;
      }
      iVar1 = *(int *)(param_2 + 0x38);
      plVar6 = plVar5;
      plVar9 = plVar7;
      do {
        if (iVar1 <= (int)plVar6[4]) {
          plVar9 = plVar6;
        }
        plVar6 = (long *)plVar6[(int)plVar6[4] < iVar1];
      } while (plVar6 != (long *)0x0);
      if (plVar9 == plVar7) {
        return lVar8;
      }
      if (iVar1 < (int)plVar9[4]) {
        return lVar8;
      }
      plVar7 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar7 = plVar9 + 2;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar6 != plVar9) {
          do {
            lVar4 = *plVar7;
            plVar7 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar7;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar7;
          plVar7 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar9) {
        *param_1 = plVar6;
      }
      param_1[2] = param_1[2] + -1;
      FUN_01336080(plVar5,plVar9);
      if (plVar9 == (long *)0x0) {
        return lVar8;
      }
      lVar4 = tpidr_el0;
      plVar5 = *(long **)(lVar4 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar9,0,8);
        return lVar8;
      }
      FUN_00c48fe8(plVar5,plVar9,0,8);
      return lVar8;
    }
  }
  return 0;
}


