/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349902c; name: FUN_0349902c
 */


void FUN_0349902c(undefined8 param_1,uint param_2,long *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  lVar5 = *(long *)PTR_DAT_047e6f28;
  pMVar1 = (MutexType *)(lVar5 + 0x188);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar5 + 0x1b0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (plVar6 = *(long **)(*(long *)(lVar5 + 0x1a8) + (ulong)(param_2 - uVar3 * uVar2) * 8);
        plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
      if (*(uint *)(plVar6 + 2) == param_2) {
        *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        local_60 = 0;
        bVar4 = false;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0xff;
        local_40 = 0xff;
        local_38 = 0;
        if (*param_3 == 0) {
          if (((((int)param_3[1] == 0) && ((int)param_3[2] == 0)) && ((char)param_3[3] == -1)) &&
             ((char)param_3[4] == -1)) {
            bVar4 = param_3[5] == 0;
          }
          else {
            bVar4 = false;
          }
        }
        FUN_03493838(plVar6 + 7,FUN_0348b400,param_3,&local_60,&local_60,0,bVar4);
                    /* WARNING: Could not recover jumptable at 0x0349914c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6);
        return;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


