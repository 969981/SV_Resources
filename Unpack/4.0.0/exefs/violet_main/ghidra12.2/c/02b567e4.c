/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b567e4; name: FUN_02b567e4
 */


void FUN_02b567e4(long *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  
  *param_1 = (long)&DAT_045a1f38;
  FUN_01024ab4(param_1 + 0x68);
  FUN_00fdcd28(param_1 + 0x60);
  pcVar5 = (code *)param_1[0x51];
  if (pcVar5 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar5)(param_1 + 0x54);
  }
  pcVar5 = (code *)param_1[0x41];
  if (pcVar5 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar5)(param_1 + 0x44);
  }
  pcVar5 = (code *)param_1[0x31];
  if (pcVar5 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar5)(param_1 + 0x34);
  }
  pcVar5 = (code *)param_1[0x21];
  if (pcVar5 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar5)(param_1 + 0x24);
  }
  pcVar5 = (code *)param_1[0x11];
  if (pcVar5 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar5)(param_1 + 0x14);
  }
  *param_1 = (long)(PTR_DAT_047d9450 + 0x10);
  plVar6 = param_1 + 10;
  plVar1 = plVar6;
  if (param_1[0xe] != 0) {
    plVar1 = plVar6 + param_1[0xe];
  }
  for (; plVar1 != plVar6; plVar6 = plVar6 + 1) {
    (**(code **)(*(long *)*plVar6 + 8))((long *)*plVar6,param_1);
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
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
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02b56910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,param_1,0,8);
  return;
}


