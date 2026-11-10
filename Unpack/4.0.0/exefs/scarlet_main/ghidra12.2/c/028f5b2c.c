/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f5b2c; name: FUN_028f5b2c
 */


void FUN_028f5b2c(long param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 8);
  plVar8 = (long *)(lVar5 + (uVar2 + lVar3 >> 2 & 0x3ffffffffffffff8));
  if (*(long *)(param_1 + 0x10) == lVar5) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar8 + (uVar2 + lVar3 & 0x1f) * 0x80;
  }
  if (lVar6 != param_3) {
    lVar1 = param_3 - *param_2 >> 7;
    lVar7 = ((lVar6 - *plVar8 >> 7) + ((long)plVar8 - (long)param_2) * 4) - lVar1;
    if (0 < lVar7) {
      plVar8 = (long *)(lVar5 + (uVar2 >> 2 & 0x3ffffffffffffff8));
      if (*(long *)(param_1 + 0x10) == lVar5) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar8 + (uVar2 & 0x1f) * 0x80;
      }
      if ((param_3 != lVar5) &&
         (uVar2 = lVar1 + ((long)param_2 - (long)plVar8) * 4, uVar2 != lVar5 - *plVar8 >> 7)) {
        if ((long)uVar2 < 1) {
          uVar4 = 0x1f - uVar2;
          uVar2 = 0x3e - uVar2;
          if (-1 < (long)uVar4) {
            uVar2 = uVar4;
          }
          plVar8 = plVar8 + -((long)uVar2 >> 5);
          lVar5 = *plVar8 + ((uVar2 & 0x1ffffffffffffe0) - uVar4) * 0x80 + 0xf80;
        }
        else {
          plVar8 = (long *)((long)plVar8 + (uVar2 >> 2 & 0x3ffffffffffffff8));
          lVar5 = *plVar8 + (uVar2 & 0x1f) * 0x80;
        }
      }
      if (lVar5 != lVar6) {
        do {
          FUN_012c5b38(lVar5 + 0x38);
          FUN_012c5b38(lVar5);
          lVar5 = lVar5 + 0x80;
          if (lVar5 - *plVar8 == 0x1000) {
            plVar8 = plVar8 + 1;
            lVar5 = *plVar8;
          }
        } while (lVar5 != lVar6);
        lVar3 = *(long *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = lVar3 - lVar7;
      do {
        uVar2 = FUN_028f5cb0(param_1);
      } while ((uVar2 & 1) != 0);
    }
  }
  return;
}


