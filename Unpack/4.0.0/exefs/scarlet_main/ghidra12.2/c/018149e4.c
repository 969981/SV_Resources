/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018149e4; name: FUN_018149e4
 */


long * FUN_018149e4(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_80 = 0x6ad4ce3e2104194b;
  pcStack_78 = "ti_PokeVoiceComponent";
  local_70 = 0x15;
  local_68 = (long *)0x0;
  plVar3 = (long *)(**(code **)(*param_1 + 0x138))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x300,0x10);
  if (plVar4 == (long *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar3;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    FUN_00e76b9c(plVar4,&local_80);
    puVar1 = PTR_DAT_047db030;
    plVar4[0x40] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[0x20] = 0;
    plVar4[0x21] = 0;
    uVar8 = 0x300;
    plVar4[0x41] = 0;
    plVar4[0x42] = 0;
    plVar4[0x43] = 0;
    plVar4[0x53] = 0;
    plVar4[0x52] = 0;
    plVar4[0x51] = 0;
    plVar4[0x50] = 0;
    plVar4[0x22] = 0;
    plVar4[0x23] = 0;
    plVar4[0x30] = 0;
    plVar4[0x31] = 0;
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    uVar7 = 0x10;
  }
  pcVar6 = (code *)plVar4[0x11];
  if (pcVar6 != (code *)0x0) {
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    (*pcVar6)(plVar4 + 0x14);
  }
  plVar4[0x10] = (long)&LAB_013e3774;
  plVar4[0x11] = (long)&LAB_02acb398;
  pcVar6 = (code *)plVar4[0x21];
  plVar4[0x12] = (long)&LAB_02acb39c;
  plVar4[0x13] = (long)&LAB_02acb3a8;
  plVar4[0x14] = param_2;
  if (pcVar6 != (code *)0x0) {
    plVar4[0x22] = 0;
    plVar4[0x23] = 0;
    plVar4[0x20] = 0;
    plVar4[0x21] = 0;
    (*pcVar6)(plVar4 + 0x24);
  }
  *(undefined1 *)(plVar4 + 0x24) = 0;
  plVar4[0x20] = (long)FUN_020e2530;
  plVar4[0x21] = (long)&LAB_02acb3b4;
  pcVar6 = (code *)plVar4[0x31];
  plVar4[0x22] = (long)&LAB_02acb3b8;
  plVar4[0x23] = (long)&LAB_02acb3c4;
  if (pcVar6 != (code *)0x0) {
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    plVar4[0x30] = 0;
    plVar4[0x31] = 0;
    (*pcVar6)(plVar4 + 0x34);
  }
  pcVar6 = (code *)plVar4[0x41];
  if (pcVar6 != (code *)0x0) {
    plVar4[0x43] = 0;
    plVar4[0x42] = 0;
    plVar4[0x41] = 0;
    plVar4[0x40] = 0;
    (*pcVar6)(plVar4 + 0x44);
  }
  pcVar6 = (code *)plVar4[0x51];
  if (pcVar6 != (code *)0x0) {
    plVar4[0x53] = 0;
    plVar4[0x52] = 0;
    plVar4[0x51] = 0;
    plVar4[0x50] = 0;
    (*pcVar6)(plVar4 + 0x54);
  }
  local_60 = plVar4;
  plStack_58 = plVar3;
  local_50 = uVar8;
  uStack_48 = uVar7;
  FUN_00e767a8(param_1,&local_60);
  FUN_01814ca8(&local_60);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return param_1;
}


