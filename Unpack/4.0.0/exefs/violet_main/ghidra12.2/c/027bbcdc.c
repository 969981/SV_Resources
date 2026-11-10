/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bbcdc; name: FUN_027bbcdc
 */


void FUN_027bbcdc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_045e14e0;
  param_1[4] = &PTR_LAB_045e1568;
  param_1[5] = &DAT_045e15b8;
  if (*(char *)(param_1 + 0xc) != '\0') {
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x14] + 0x18))
                ((long *)param_1[0x14],param_1[0x13],param_1[0x11] & 0xfffffffffffffffe,1);
    }
    if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x10] + 0x18))
                ((long *)param_1[0x10],param_1[0xf],param_1[0xd] & 0xfffffffffffffffe,1);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  plVar5 = (long *)param_1[0xb];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_01f7a4e8(param_1);
  return;
}


