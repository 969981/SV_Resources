/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e357c; name: FUN_020e357c
 */


void FUN_020e357c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  for (plVar5 = *(long **)(param_1 + 0x108); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    FUN_020e36e8(0,plVar5[4]);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    plVar5 = (long *)*(long *)(param_1 + 0x108);
    while (plVar5 != (long *)0x0) {
      plVar7 = (long *)*plVar5;
      FUN_01229ce8(plVar5 + 4);
      plVar6 = *(long **)(param_1 + 0x110);
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0xc0,0x10);
        plVar5 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0xc0,0x10);
        plVar5 = plVar7;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}


