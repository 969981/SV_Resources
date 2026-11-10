/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049d970; name: FUN_0049d970
 */


void FUN_0049d970(void)

{
  ThreadType *pTVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)&DAT_047f44a0);
  if (((DAT_047f4458 & 1) == 0) && (DAT_047f4470 != (HeapHead *)0x0)) {
    pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
    uVar2 = nn::os::GetThreadId(pTVar1);
    if (DAT_047f4490 == (long *)0x0) {
      plVar6 = (long *)&DAT_047f4490;
      plVar5 = (long *)&DAT_047f4490;
LAB_0049da00:
      lVar4 = *plVar5;
    }
    else {
      plVar5 = (long *)&DAT_047f4490;
      plVar6 = DAT_047f4490;
      while( true ) {
        while ((ulong)plVar6[4] <= uVar2) {
          if (uVar2 <= (ulong)plVar6[4]) goto LAB_0049da00;
          plVar5 = plVar6 + 1;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_0049da00;
          plVar6 = (long *)*plVar5;
        }
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) break;
        plVar6 = (long *)*plVar6;
      }
      lVar4 = *plVar6;
    }
    if (lVar4 == 0) {
      puVar3 = (undefined8 *)nn::lmem::AllocateFromExpHeap(DAT_047f4470,0x28);
      puVar3[4] = uVar2;
      puVar3[2] = plVar6;
      *puVar3 = 0;
      puVar3[1] = 0;
      *plVar5 = (long)puVar3;
      if ((long *)*DAT_047f4488 != (long *)0x0) {
        puVar3 = (undefined8 *)*plVar5;
        DAT_047f4488 = (long *)*DAT_047f4488;
      }
      FUN_010108e0(DAT_047f4490,puVar3);
      DAT_047f4498 = DAT_047f4498 + 1;
    }
                    /* try { // try from 0049da70 to 0049da77 has its CatchHandler @ 0049da90 */
    FUN_00452c20(1);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
  return;
}


