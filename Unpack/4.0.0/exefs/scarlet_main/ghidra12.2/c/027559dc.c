/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027559dc; name: FUN_027559dc
 */


void FUN_027559dc(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  param_1[2] = 0;
  puVar3 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045db370;
  param_1[1] = lVar6;
  param_1[4] = (long)&PTR_LAB_045db3d8;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = (long)&PTR_LAB_045db408;
  param_1[7] = 0;
  FUN_021b0558(param_1 + 10,param_2);
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  FUN_02755dc8((long)param_1 + 0x45c);
  do {
    iVar4 = DAT_0485dac0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x485dac0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_0485dac0 = DAT_0485dac0 + 1;
    }
  } while (cVar1 != '\0');
  *(int *)((long)param_1 + 0x47c) = iVar4;
  *(undefined4 *)(param_1 + 0x8f) = 0x1e;
  *(undefined4 *)((long)param_1 + 0x45c) = 1;
  FUN_02755de4((long)param_1 + 0x45c,0x1e);
  return;
}


