/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034695c0; name: FUN_034695c0
 */


void FUN_034695c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  
  puVar3 = PTR_DAT_047e6d30;
  puVar5 = *(undefined8 **)(param_2 + 0x50);
  puVar6 = puVar5;
  if (*(int *)(param_2 + 0x58) != 0) {
    do {
      nn::os::LockMutex((MutexType *)puVar3);
      if (puVar6 != (undefined8 *)(*(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 8)
         ) {
        cVar7 = '\x01';
        puVar5 = puVar6;
        do {
          puVar6 = puVar5 + 1;
          (**(code **)(*(long *)*puVar5 + 0x18))();
          cVar7 = cVar7 + '\x01';
          if (cVar7 == '\0') break;
          puVar5 = puVar6;
        } while (puVar6 != (undefined8 *)
                           (*(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 8));
      }
      nn::os::UnlockMutex((MutexType *)puVar3);
      puVar5 = *(undefined8 **)(param_2 + 0x50);
    } while (puVar6 != puVar5 + *(uint *)(param_2 + 0x58));
  }
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar5);
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  *(undefined1 *)(param_2 + 0x30) = 1;
  puVar3 = PTR_DAT_047e2fe8;
  lVar4 = FUN_01065210(*(undefined8 *)PTR_DAT_047e2fe8,0x1a,0xc);
  *(long *)(lVar4 + 4) = param_2;
  piVar1 = (int *)(*(long *)puVar3 + 0x9c);
  do {
    cVar7 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = *piVar1 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_00d4d458(*(undefined8 *)puVar3,0,0);
  return;
}


