/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b6ee4; name: FUN_019b6ee4
 */


void FUN_019b6ee4(long param_1,int param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  local_38 = param_3;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  if (((lVar5 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
     (lVar5 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8), lVar5 != 0)) {
    lVar6 = *(long *)(param_1 + 0x170);
    lVar3 = *(long *)(param_1 + 0x178);
    if (lVar6 != lVar3) {
      do {
        if (*(long *)(lVar6 + 8) == lVar5) goto LAB_019b7020;
        lVar6 = lVar6 + 0x10;
        lVar7 = 0;
      } while (lVar3 != lVar6);
      goto LAB_019b6f44;
    }
LAB_019b7020:
    if (lVar6 != lVar3) {
      lVar7 = *(long *)(lVar6 + 8);
      goto LAB_019b6f44;
    }
  }
  lVar7 = 0;
LAB_019b6f44:
  if (param_2 == 1) {
    if (local_38 != lVar7) {
      plVar1 = *(long **)(param_1 + 0x58);
      plVar2 = *(long **)(param_1 + 0x60);
      if (plVar1 != plVar2) {
        if (*plVar1 != 0) {
          FUN_0190fb38(*plVar1,&local_38);
        }
        if (plVar1 + 1 != plVar2) {
          lVar5 = plVar1[1];
          if (lVar5 != 0) {
            FUN_0190fb38(lVar5,&local_38);
          }
          for (plVar1 = plVar1 + 2; plVar1 != plVar2; plVar1 = plVar1 + 1) {
            if (*plVar1 != 0) {
              FUN_0190fb38(*plVar1,&local_38);
            }
          }
        }
      }
    }
  }
  else if ((param_2 == 0) && (local_38 != lVar7)) {
    plVar1 = *(long **)(param_1 + 0x58);
    plVar2 = *(long **)(param_1 + 0x60);
    if (plVar1 != plVar2) {
      if (*plVar1 != 0) {
        FUN_0178e9f0(*plVar1,&local_38);
      }
      if (plVar1 + 1 != plVar2) {
        lVar5 = plVar1[1];
        if (lVar5 != 0) {
          FUN_0178e9f0(lVar5,&local_38);
        }
        for (plVar1 = plVar1 + 2; plVar1 != plVar2; plVar1 = plVar1 + 1) {
          if (*plVar1 != 0) {
            FUN_0178e9f0(*plVar1,&local_38);
          }
        }
      }
    }
  }
  FUN_019b70d8(param_1 + 0x90,param_2,local_38,param_1);
  return;
}


