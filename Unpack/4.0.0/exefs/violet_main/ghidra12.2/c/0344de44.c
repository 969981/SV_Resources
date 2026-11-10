/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344de44; name: FUN_0344de44
 */


undefined8 FUN_0344de44(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  uVar4 = (**(code **)(*param_1 + 0x30))();
  if ((uVar4 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    uVar1 = *(uint *)((long)param_1 + 0x2c);
    if (uVar1 != 0) {
      plVar7 = *(long **)PTR_DAT_047e6f38;
      nn::os::LockMutex((MutexType *)(plVar7 + 3));
      uVar2 = *(uint *)(plVar7 + 1);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar6 = *(long *)(*plVar7 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar6 != 0;
            lVar6 = *(long *)(lVar6 + 0x70)) {
          if (*(uint *)(lVar6 + 0x54) == uVar1) {
            *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar7 + 3));
    }
    lVar6 = param_1[0xb];
    if (*(long *)(lVar6 + 8) == 0) {
      *(long **)(lVar6 + 8) = param_1;
      uVar5 = 1;
      param_1[1] = 0;
    }
    else {
      uVar5 = 1;
      param_1[1] = *(long *)(lVar6 + 8);
      *(long **)(lVar6 + 8) = param_1;
    }
  }
  return uVar5;
}


