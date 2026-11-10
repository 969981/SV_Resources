/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dc7fc; name: FUN_027dc7fc
 */


undefined8 FUN_027dc7fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  long *local_38;
  
  if ((*(int *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0x78) == 0)) {
    uVar4 = FUN_01cf7e20();
    FUN_01e9fa84(auStack_40,uVar4);
    FUN_01e9faf8(param_1 + 0x98,auStack_40);
    FUN_01e9eb34(auStack_40);
    FUN_01e9fb38(auStack_50,param_1 + 0xa0);
    FUN_027dc8e0(auStack_40,param_1 + 0x40,param_2,auStack_50);
    FUN_027dc418(param_1 + 0xb0,auStack_40);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
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
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_01e9eb34(auStack_50);
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


