/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5ee48; name: FUN_00e5ee48
 */


uint FUN_00e5ee48(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long *local_30;
  long *local_28;
  
  FUN_027bdab0(&local_30,*(undefined8 *)*param_1);
  uVar4 = (**(code **)(*local_30 + 0x20))();
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar4 & 1;
}


