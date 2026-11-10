/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050171c; name: FUN_0050171c
 */


void FUN_0050171c(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_68;
  undefined1 auStack_60 [16];
  ulong local_50;
  
  local_68 = 0;
  lVar5 = *param_2;
  lVar4 = param_2[1];
  uVar6 = param_2[2] & *(long *)(lVar4 + 8) - 1U;
  param_2[2] = uVar6;
  lVar2 = *(long *)(*(long *)(lVar4 + 0x20) + uVar6 * 8);
  if (lVar2 == lVar5) {
LAB_00501804:
    plVar3 = (long *)(param_1[4] + uVar6 * 8);
  }
  else {
    if ((lVar2 != 0) && (lVar2 != *(long *)(*(long *)(lVar4 + 0x20) + (uVar6 ^ 1) * 8))) {
      do {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) goto LAB_0050178c;
      } while (lVar2 != lVar5);
      goto LAB_00501804;
    }
LAB_0050178c:
    FUN_00500a68(auStack_60,lVar4,lVar5,&local_68);
    param_2[2] = local_50;
    lVar4 = *(long *)(*(long *)(param_2[1] + 0x20) + local_50 * 8);
    uVar6 = local_50;
    if (lVar4 == 0) {
      lVar5 = *param_2;
      goto LAB_00501804;
    }
    lVar5 = *param_2;
    plVar7 = param_1 + 4;
    plVar3 = (long *)(*plVar7 + local_50 * 8);
    if (lVar4 == *(long *)(*(long *)(param_2[1] + 0x20) + (local_50 ^ 1) * 8)) {
      lVar4 = *plVar3;
      FUN_00501910(lVar4,local_68 + 0x20);
      if (*(long *)(lVar4 + 0x18) == 0) {
        uVar6 = local_50 & 0xfffffffffffffffe;
        lVar2 = param_1[5];
        FUN_00500864(lVar4,*(undefined8 *)(lVar4 + 8));
        if (lVar2 == 0) {
          FUN_0049e700(lVar4);
        }
        *(undefined8 *)(*plVar7 + (local_50 << 3 | 8)) = 0;
        *(undefined8 *)(*plVar7 + uVar6 * 8) = 0;
        lVar4 = param_1[5];
      }
      else {
        lVar4 = param_1[5];
      }
      goto joined_r0x00501830;
    }
  }
  uVar1 = FUN_005018dc(param_1,lVar5,*plVar3);
  *(undefined8 *)(param_1[4] + uVar6 * 8) = uVar1;
  lVar4 = param_1[5];
joined_r0x00501830:
  if (lVar4 == 0) {
    FUN_0049e700(lVar5);
  }
  *param_1 = *param_1 + -1;
  if ((uVar6 == param_1[3]) && (uVar6 < (ulong)param_1[1])) {
    do {
      if (*(long *)(param_1[4] + uVar6 * 8) != 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      param_1[3] = uVar6;
    } while (uVar6 < (ulong)param_1[1]);
  }
  return;
}


