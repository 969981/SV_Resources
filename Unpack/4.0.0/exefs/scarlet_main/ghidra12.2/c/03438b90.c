/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03438b90; name: FUN_03438b90
 */


void FUN_03438b90(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_047bf6e0;
  puVar1 = PTR_DAT_047e2fd0;
  lVar5 = param_1[1];
  lVar4 = lVar5;
  if (*(int *)(param_1 + 2) != 0) {
    do {
      (**(code **)(*(long *)**(undefined8 **)(lVar4 + 0x10) + 0x10))();
      **(undefined8 **)(lVar4 + 0x10) = 0;
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = 0;
          if (lVar5 + 0x10 != *(long *)(lVar5 + 0x18)) {
            (**(code **)(puVar1 + 0x30))(0);
          }
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined4 *)(lVar5 + 0x24) = 0;
          lVar5 = *(long *)(lVar4 + 0x10);
        }
        (**(code **)(puVar1 + 0x30))(0,lVar5);
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      lVar5 = param_1[1];
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar5 + (ulong)*(uint *)(param_1 + 2) * 0x18);
  }
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7,lVar5);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  DAT_048af938 = 0;
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
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x03438cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,param_1,0,8);
  return;
}


