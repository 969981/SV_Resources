/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005468ac; name: FUN_005468ac
 */


void FUN_005468ac(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  lVar5 = param_2[1];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = *param_2;
  }
  lVar5 = *(long *)(lVar4 + 8);
  lVar4 = *(long *)(lVar5 + 0x48);
  param_1[2] = lVar4;
  lVar5 = *(long *)(lVar5 + 0x50);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = param_1[2];
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  FUN_01e9fa84(param_1 + 0x26,*(undefined8 *)(lVar4 + 0x238));
  nn::os::InitializeEvent(param_1 + 0x28,0,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d),false,0);
  *(undefined1 *)(param_1 + 0x31) = 0;
  lVar4 = *(long *)(param_1[2] + 0x238);
  param_1[0x32] = (long)(param_1 + 0x33);
  param_1[0x33] = 0;
  param_1[0x34] = lVar4;
  param_1[0x35] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x36),true,0);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  lVar4 = FUN_01cf7e20();
  param_1[0x3e] = lVar4;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  lVar4 = FUN_01cf7e20();
  param_1[0x42] = lVar4;
  lVar4 = FUN_00567fb0();
  param_1[0x43] = lVar4;
  return;
}


