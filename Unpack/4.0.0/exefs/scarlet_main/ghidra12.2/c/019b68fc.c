/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b68fc; name: FUN_019b68fc
 */


void FUN_019b68fc(long param_1,undefined1 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 local_40 [8];
  long local_38;
  
  lVar6 = *(long *)(param_1 + 0x170);
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar6 != lVar5) {
    if (*(long *)(lVar6 + 8) != *param_3) {
      do {
        lVar7 = lVar6 + 0x10;
        if (lVar5 == lVar7) {
          lVar6 = lVar5;
          break;
        }
        plVar1 = (long *)(lVar6 + 0x18);
        lVar6 = lVar7;
      } while (*plVar1 != *param_3);
    }
  }
  if (lVar5 != lVar6) {
    return;
  }
  local_40[0] = *param_2;
  local_38 = *param_3;
  FUN_019b6ac0(param_1 + 0x170,local_40);
  uVar4 = FUN_014bfb64(param_1);
  if ((uVar4 & 1) == 0) {
    return;
  }
  FUN_019b6ee4(param_1,0,*param_3);
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = 0;
    if (*(long *)PTR_DAT_047d0a08 != 0) {
      lVar5 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
      if (lVar5 != 0) {
        lVar7 = *(long *)(param_1 + 0x170);
        lVar2 = *(long *)(param_1 + 0x178);
        if (lVar7 != lVar2) {
          do {
            if (*(long *)(lVar7 + 8) == lVar5) goto LAB_019b6a58;
            lVar7 = lVar7 + 0x10;
            lVar6 = 0;
          } while (lVar2 != lVar7);
          goto LAB_019b69b0;
        }
LAB_019b6a58:
        if (lVar7 != lVar2) {
          lVar6 = *(long *)(lVar7 + 8);
          goto LAB_019b69b0;
        }
      }
      lVar6 = 0;
    }
  }
LAB_019b69b0:
  if (*param_3 == lVar6) {
    lVar5 = *(long *)(param_1 + 0x170);
    lVar7 = *(long *)(param_1 + 0x178);
    if (lVar5 != lVar7) {
      while( true ) {
        if (*(long *)(lVar5 + 8) != lVar6) {
          FUN_019b6ee4(param_1,0);
        }
        if (lVar7 == lVar5 + 0x10) break;
        lVar6 = *param_3;
        lVar5 = lVar5 + 0x10;
      }
    }
  }
  return;
}


