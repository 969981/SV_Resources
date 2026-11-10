/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bd67c; name: FUN_015bd67c
 */


void FUN_015bd67c(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *local_70;
  long local_68;
  
  uVar2 = FUN_015bd920(param_2,param_3,param_4,param_5);
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar8 = 0;
  if (lVar4 - lVar3 != 0) {
    lVar8 = (lVar4 - lVar3 >> 3) * 0x1e + -1;
  }
  uVar5 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  lVar6 = uVar2 - (lVar8 - uVar5);
  if (lVar8 - uVar5 <= uVar2 && lVar6 != 0) {
    FUN_015be85c(param_1,lVar6);
    uVar5 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  plVar7 = (long *)(lVar3 + (uVar5 / 0x1e) * 8);
  if (lVar4 == lVar3) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (uVar5 % 0x1e) * 0x88;
  }
  local_70 = plVar7;
  local_68 = lVar8;
  FUN_015bd970(&local_70,uVar2);
  lVar3 = local_68;
  plVar1 = local_70;
  if (local_68 != lVar8) {
    do {
      lVar4 = lVar3;
      if (plVar7 != plVar1) {
        lVar4 = *plVar7 + 0xff0;
      }
      if (lVar4 == lVar8) {
        lVar4 = lVar8;
      }
      else {
        lVar6 = lVar8;
        do {
          FUN_015bd81c(param_1 + 0x50,lVar6,param_3);
          param_3 = param_3 + 0x88;
          lVar6 = lVar6 + 0x88;
          if (param_3 - *param_2 == 0xff0) {
            param_2 = param_2 + 1;
            param_3 = *param_2;
          }
        } while (lVar4 != lVar6);
      }
      *(long *)(param_1 + 0x48) =
           *(long *)(param_1 + 0x48) + (lVar4 - lVar8 >> 3) * -0xf0f0f0f0f0f0f0f;
      if (plVar7 == plVar1) {
        return;
      }
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    } while (lVar3 != lVar8);
  }
  return;
}


