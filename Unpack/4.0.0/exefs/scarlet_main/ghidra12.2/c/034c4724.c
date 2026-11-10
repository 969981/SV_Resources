/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c4724; name: FUN_034c4724
 */


void FUN_034c4724(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  *param_1 = &PTR_FUN_047c4b60;
  puVar2 = PTR_DAT_047e6f28;
  for (plVar8 = (long *)param_1[4]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    plVar4 = (long *)FUN_0344ec90(*(undefined8 *)puVar2,*(undefined4 *)(plVar8 + 1),
                                  *(undefined1 *)((long)plVar8 + 0xc));
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))(plVar4,param_1[1]);
      (**(code **)(*plVar4 + 0x30))(plVar4);
    }
  }
  FUN_034c462c(param_1 + 4);
  *param_1 = &PTR_LAB_047c4bb0;
  if (param_1[2] == 0) {
    uVar7 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar7 = param_1[2];
  }
  puVar2 = PTR_DAT_047e70d0;
  lVar6 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e70d0 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e70d0 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar6 + 0x10);
  }
  *puVar1 = uVar7;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar6;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  lVar6 = tpidr_el0;
  plVar8 = *(long **)(lVar6 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x034c4864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar8,param_1,0,8);
  return;
}


