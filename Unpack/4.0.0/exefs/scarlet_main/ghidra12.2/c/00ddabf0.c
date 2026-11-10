/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ddabf0; name: FUN_00ddabf0
 */


void FUN_00ddabf0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) goto LAB_00ddaee4;
  lVar5 = 0;
  while( true ) {
    puVar1 = PTR_DAT_047d8c78;
    *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
    param_1[1] = lVar5;
    param_1[4] = (long)(puVar1 + 0x88);
    plVar6 = param_1 + 5;
    *plVar6 = (long)(puVar1 + 0xd8);
    param_1[7] = 0;
    param_1[6] = 0;
    FUN_00d1a3f4(param_1 + 6,plVar6);
    puVar1 = PTR_DAT_047dd588;
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 100) = 1;
    param_1[8] = (long)(puVar1 + 0x10);
    param_1[9] = 0;
    nn::os::InitializeLightEvent(param_1 + 0xb,0,1);
    *param_1 = (long)&DAT_045a0188;
    param_1[4] = (long)&PTR_LAB_045a0208;
    *plVar6 = (long)&DAT_045a0258;
    param_1[8] = (long)&PTR_LAB_045a02b0;
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0xb0) == '\0') {
      *(undefined1 *)(lVar3 + 0xb0) = 1;
      __cxa_thread_atexit(&LAB_02b4dbdc,lVar3 + 0x88,&PTR_LOOP_04483000);
    }
    lVar5 = param_2;
    if (*(char *)(lVar3 + 0xa8) == '\0') goto LAB_00ddad10;
    if (*(char *)(lVar3 + 0xb0) != '\0') break;
    *(undefined1 *)(lVar3 + 0xb0) = 1;
    lVar5 = lVar3 + 0x88;
    __cxa_thread_atexit(&LAB_02b4dbdc,lVar5,&PTR_LOOP_04483000);
    if (*(char *)(lVar3 + 0xa8) != '\0') goto LAB_00ddad10;
    lVar3 = FUN_0219b5b0();
LAB_00ddaee4:
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  lVar5 = lVar3 + 0x88;
LAB_00ddad10:
  FUN_00ddaef8(param_1 + 0xd,*(undefined8 *)(lVar5 + 8),0);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = -1;
  uVar7 = param_3[1];
  lVar3 = *param_3;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = (long)&PTR_LAB_045a0340;
  param_1[0x19] = 0;
  param_1[0x13] = uVar7 & 0xffffffff;
  param_1[0x12] = lVar3;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar4;
  FUN_00ddb008(uVar4,param_2,param_1);
  return;
}


