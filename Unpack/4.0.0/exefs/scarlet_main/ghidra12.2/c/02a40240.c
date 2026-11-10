/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a40240; name: FUN_02a40240
 */


undefined4 FUN_02a40240(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  char *local_38;
  char **local_30;
  long lStack_28;
  undefined4 local_8;
  char local_4 [4];
  
  if (((DAT_0483b1e0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0483b1e0), iVar5 != 0)) {
    FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b1e0);
  }
  DAT_0483b1e8 = DAT_0483b1d0;
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02a40304;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a40304:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return 1;
        }
        if ((*(char *)(lVar7 + 0x418) == '\x02') && (*(short *)(lVar7 + 0x3f8) == 0)) {
          local_8 = 1;
          if (*(char *)(lVar7 + 0x420) != '\x03') {
            lStack_28 = lVar7 + 0x18;
            local_38 = local_4;
            local_30 = &local_38;
            local_4[0] = '\0';
            uVar6 = FUN_02a41b9c(lStack_28,&local_30);
            local_8 = 1;
            if (local_4[0] != '\0') {
              local_8 = 2;
            }
            if ((uVar6 & 1) == 0) {
              local_8 = 0;
            }
          }
        }
        else {
          local_8 = 1;
        }
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
        return local_8;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 1;
}


