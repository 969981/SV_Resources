/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f3a00; name: FUN_034f3a00
 */


void FUN_034f3a00(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = param_1[2];
  *param_1 = &PTR_FUN_047c5bd0;
  puVar1 = PTR_DAT_047e70e8;
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 3) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 3) << 5;
      plVar6 = (long *)(lVar4 + 0x18);
      do {
        if ((plVar6[-2] != 0) && (*(int *)((long)plVar6 + -4) != -1)) {
          FUN_03468ed8(*(undefined8 *)puVar1);
          if (*plVar6 != 0) {
            FUN_0346034c(*plVar6,0);
          }
        }
        lVar5 = lVar5 + -0x20;
        plVar6 = plVar6 + 4;
      } while (lVar5 != 0);
      lVar4 = param_1[2];
    }
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar4);
  }
  lVar4 = tpidr_el0;
  plVar6 = *(long **)(lVar4 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar6,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x034f3ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
  return;
}


