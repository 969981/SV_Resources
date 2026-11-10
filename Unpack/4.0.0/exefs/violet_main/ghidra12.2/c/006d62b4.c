/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006d62b4; name: FUN_006d62b4
 */


void FUN_006d62b4(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    lVar2 = *(long *)(param_2 + 0x12);
    plVar1 = (long *)(param_1 + 0x90);
    *(long *)(param_1 + 0xa0) = lVar2;
    if (lVar2 == 0) {
      *(long **)(param_1 + 0x88) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      *(undefined4 **)(param_2 + 0xc) = param_2 + 0xe;
      *(undefined8 *)(param_2 + 0xe) = 0;
      *(undefined8 *)(param_2 + 0x12) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
                    /* try { // try from 006d634c to 006d634f has its CatchHandler @ 006d636c */
  FUN_006ce8bc(param_1 + 0xa8,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


