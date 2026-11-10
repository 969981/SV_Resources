/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b41c0; name: FUN_034b41c0
 */


void FUN_034b41c0(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = param_2 / uVar5;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar5) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x70)) {
      if (*(uint *)(lVar4 + 0x54) == param_2) {
        plVar7 = *(long **)(lVar4 + 0x20);
        uVar5 = *(uint *)(lVar4 + 0x28);
        plVar1 = plVar7 + uVar5;
        if ((uVar5 == 0) || (*plVar7 == param_3)) goto LAB_034b4278;
        lVar8 = (ulong)uVar5 * 8;
        goto LAB_034b4250;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
  while (plVar2 = plVar7 + 1, plVar6 = plVar7 + 1, plVar7 = plVar2, *plVar6 != param_3) {
LAB_034b4250:
    lVar8 = lVar8 + -8;
    if (lVar8 == 0) {
      plVar7 = plVar1;
      break;
    }
  }
LAB_034b4278:
  if (plVar1 != plVar7) {
    if (plVar7 < plVar1 + -1) {
      do {
        plVar6 = plVar7 + 1;
        *plVar7 = *plVar6;
        plVar7 = plVar6;
      } while (plVar6 < plVar1 + -1);
      uVar5 = *(uint *)(lVar4 + 0x28);
    }
    *(uint *)(lVar4 + 0x28) = uVar5 - 1;
  }
  FUN_034b3448(param_1,param_2);
  return;
}


