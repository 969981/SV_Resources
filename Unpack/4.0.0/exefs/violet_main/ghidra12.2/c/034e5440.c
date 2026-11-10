/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e5440; name: FUN_034e5440
 */


void FUN_034e5440(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  param_1[0xb] = 0;
  puVar4 = PTR_DAT_047e6f50;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd),true,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar1 = (ulong *)(param_1 + 0x1f);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar4 = PTR_DAT_047e2fd0;
  *(undefined4 *)((long)param_1 + 0xf4) = 1;
  *puVar1 = 0;
  puVar5 = (ulong *)(**(code **)(puVar4 + 0x10))(0x10,0x10);
  if (puVar5 != (ulong *)0x0) {
    puVar5[1] = 0;
    do {
      uVar6 = *puVar1;
      *puVar5 = uVar6 | 0x4000000000000000;
      while (*puVar1 == uVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = (ulong)puVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puVar5 = (ulong *)(**(code **)(puVar4 + 0x10))(0x10,0x10);
          if (puVar5 == (ulong *)0x0) goto LAB_034e5550;
          puVar5[1] = 0;
          goto LAB_034e5524;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_034e5550:
  *param_1 = (long)&PTR_FUN_047c5a10;
  *(undefined1 *)(param_1 + 0x25) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x26),true,0);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  DAT_048b0588 = 0;
  return;
LAB_034e5524:
  uVar6 = *puVar1;
  *puVar5 = uVar6 | 0x4000000000000000;
  while (*puVar1 == uVar6) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = (ulong)puVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_034e5550;
  }
  ClearExclusiveLocal();
  goto LAB_034e5524;
}


