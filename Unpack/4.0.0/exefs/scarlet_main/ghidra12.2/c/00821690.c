/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00821690; name: FUN_00821690
 */


undefined8 FUN_00821690(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  if (DAT_047fb9c0 == 0) {
    do {
      iVar3 = DAT_047fb9b0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x47fb9b0,0x10);
      if (bVar2) {
        DAT_047fb9b0 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 != 0) {
      uVar5 = 0;
LAB_008216e0:
      if (DAT_047fb9b0 == 0) {
        do {
          iVar3 = DAT_047fb9b0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x47fb9b0,0x10);
          if (bVar2) {
            DAT_047fb9b0 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) goto LAB_00821708;
      }
      uVar5 = uVar5 + 1;
      if ((uVar5 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_008216e0;
    }
LAB_00821708:
    if (DAT_047fb9c0 == 0) {
      DAT_047fb9c8 = 0x1000;
      DAT_047fb9d0 = 0x10000;
      DAT_047fb9d8 = 0x40000;
      DAT_047fb9e0 = 0x200000;
      DAT_047fb9e8 = 7;
      DAT_047fbd60 = 7;
      uVar4 = time((time_t *)0x0);
      DAT_047fb9c0 = uVar4 & 0xfffffffffffffff0 ^ 0x55555558;
    }
    DAT_047fb9b0 = 0;
  }
  do {
    iVar3 = DAT_047fb9b0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x47fb9b0,0x10);
    if (bVar2) {
      DAT_047fb9b0 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
    return 1;
  }
  uVar5 = 0;
  do {
    if (DAT_047fb9b0 == 0) {
      do {
        iVar3 = DAT_047fb9b0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x47fb9b0,0x10);
        if (bVar2) {
          DAT_047fb9b0 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        return 1;
      }
    }
    uVar5 = uVar5 + 1;
    if ((uVar5 & 0x3f) == 0) {
      sched_yield();
    }
  } while( true );
}


