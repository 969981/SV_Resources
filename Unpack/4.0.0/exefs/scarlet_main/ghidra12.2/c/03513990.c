/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03513990; name: FUN_03513990
 */


void FUN_03513990(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  
  plVar4 = DAT_048b0cd0;
  if ((*(char *)((long)DAT_048b0cd0 + 0x10c) != '\0') &&
     (uVar6 = nn::os::TryWaitSystemEvent((SystemEventType *)&DAT_048b0cd8), (uVar6 & 1) != 0)) {
    nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(plVar4 + 1));
    iVar5 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
    if (iVar5 == (int)plVar4[0x21]) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    else {
      *(int *)(plVar4 + 0x21) = iVar5;
      puVar3 = PTR_DAT_047e7028;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *(int *)puVar3 = *(int *)puVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (*(long *)PTR_DAT_047e2fe8 != 0) {
        nn::os::SignalEvent((EventType *)&DAT_048b0ca8);
      }
    }
  }
  if (*PTR_DAT_047e6980 != '\0') {
    FUN_03515d00(PTR_DAT_047e6970);
  }
  FUN_034f1fbc();
  return;
}


