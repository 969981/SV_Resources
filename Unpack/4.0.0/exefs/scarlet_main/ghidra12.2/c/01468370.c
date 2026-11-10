/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01468370; name: FUN_01468370
 */


void FUN_01468370(long param_1,locale *param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = tpidr_el0;
  plVar5 = *(long **)(lVar7 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar7 + 0x30) = DAT_04859430;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x58,8);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  *puVar4 = &PTR_LAB_045e6310;
  puVar4[1] = uVar6;
  std::locale::locale((locale *)(puVar4 + 2),param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  puVar4[3] = *(undefined8 *)(param_2 + 8);
  puVar4[4] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar4[5] = *(undefined8 *)(param_2 + 0x18);
  puVar4[6] = uVar6;
  puVar4[7] = *(undefined8 *)(param_2 + 0x28);
  lVar7 = *(long *)(param_2 + 0x30);
  puVar4[8] = lVar7;
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(puVar4 + 10) = param_4;
  *(byte *)((long)puVar4 + 0x54) = param_3 & 1;
  puVar4[9] = uVar6;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  return;
}


