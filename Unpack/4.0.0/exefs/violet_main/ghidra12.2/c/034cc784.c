/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cc784; name: FUN_034cc784
 */


void FUN_034cc784(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_047c5130;
  if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[4] = 0;
  }
  param_1[4] = 0;
  *param_1 = (long)(PTR_DAT_047e72f0 + 0x10);
  if (param_1[2] == 0) {
    lVar5 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar5 = param_1[2];
  }
  puVar1 = PTR_DAT_047e6d00;
  lVar4 = param_1[3];
  plVar6 = (long *)(PTR_DAT_047e6d00 + 0x10);
  if (*(long **)(PTR_DAT_047e6d00 + 0x10) != param_1) {
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = lVar5;
  if (*(long **)(puVar1 + 8) == param_1) {
    *(long *)(puVar1 + 8) = lVar4;
  }
  *(int *)puVar1 = *(int *)puVar1 + -1;
  lVar5 = tpidr_el0;
  plVar6 = *(long **)(lVar5 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar6,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x034cc874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
  return;
}


