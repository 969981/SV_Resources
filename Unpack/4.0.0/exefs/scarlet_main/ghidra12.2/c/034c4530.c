/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c4530; name: FUN_034c4530
 */


void FUN_034c4530(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_047c4b60;
  puVar2 = PTR_DAT_047e6f28;
  for (plVar6 = (long *)param_1[4]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    plVar3 = (long *)FUN_0344ec90(*(undefined8 *)puVar2,*(undefined4 *)(plVar6 + 1),
                                  *(undefined1 *)((long)plVar6 + 0xc));
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))(plVar3,param_1[1]);
      (**(code **)(*plVar3 + 0x30))(plVar3);
    }
  }
  FUN_034c462c(param_1 + 4);
  *param_1 = &PTR_LAB_047c4bb0;
  if (param_1[2] == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar5 = param_1[2];
  }
  puVar2 = PTR_DAT_047e70d0;
  lVar4 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e70d0 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e70d0 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  *puVar1 = uVar5;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar4;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


