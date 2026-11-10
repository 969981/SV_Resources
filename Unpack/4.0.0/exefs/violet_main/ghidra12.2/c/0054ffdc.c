/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054ffdc; name: FUN_0054ffdc
 */


undefined8 FUN_0054ffdc(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  MutexType *pMVar7;
  long lVar8;
  long lVar9;
  undefined8 local_48;
  
  uVar5 = *(undefined8 *)(param_1 + 200);
  bVar1 = **(byte **)(param_1 + 0xd8);
  do {
    if ((bVar1 & 1) != 0) {
      return 1;
    }
    local_48 = 1000000;
    FUN_00248820(&local_48);
    plVar3 = (long *)FUN_01cf7e20();
    pMVar7 = *(MutexType **)(param_1 + 0xe0);
    nn::os::LockMutex(pMVar7);
    plVar4 = *(long **)(param_1 + 0xd0);
    lVar9 = plVar4[2];
    lVar2 = *plVar4;
    lVar6 = plVar4[1];
    plVar4[2] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    nn::os::UnlockMutex(pMVar7);
    if (lVar6 == lVar2) {
      if (lVar2 != 0) goto LAB_00550014;
    }
    else {
      lVar8 = lVar2;
      do {
        FUN_00548560(uVar5,lVar8);
        lVar8 = lVar8 + 0x20;
      } while (lVar6 != lVar8);
      if (lVar2 != 0) {
        do {
          lVar6 = lVar6 + -0x20;
          FUN_005744a0(lVar6);
        } while (lVar2 != lVar6);
LAB_00550014:
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,lVar9 - lVar2,8);
      }
    }
    bVar1 = **(byte **)(param_1 + 0xd8);
  } while( true );
}


