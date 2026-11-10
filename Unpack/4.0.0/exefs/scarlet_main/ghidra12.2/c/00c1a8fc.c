/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1a8fc; name: FUN_00c1a8fc
 */


void FUN_00c1a8fc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = FUN_00c1aa00(param_3);
  uVar5 = *(long *)(param_2 + 8) - 1U & *(long *)(param_2 + 0x10) + lVar1;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(lVar1 + uVar5 * 8);
  if (lVar3 != 0) {
    if (lVar3 == *(long *)(lVar1 + (uVar5 ^ 1) * 8)) {
      uVar5 = uVar5 & 0xfffffffffffffffe;
      plVar6 = (long *)(*(long *)(lVar1 + uVar5 * 8) + 8);
      plVar7 = (long *)*plVar6;
      if (plVar7 != (long *)0x0) {
        plVar4 = plVar6;
        do {
          uVar2 = FUN_00c1abd8(plVar7[4],param_3);
          lVar1 = 8;
          if ((uVar2 & 1) == 0) {
            lVar1 = 0;
            plVar4 = plVar7;
          }
          plVar7 = *(long **)((long)plVar7 + lVar1);
        } while (plVar7 != (long *)0x0);
        if ((plVar4 != plVar6) && (uVar2 = FUN_00c1abd8(param_3,plVar4[4]), (uVar2 & 1) == 0)) {
          *param_1 = plVar4[4];
          param_1[1] = param_2;
          param_1[2] = uVar5;
          param_1[3] = (long)plVar4;
          goto LAB_00c1a9d4;
        }
      }
    }
    else {
      do {
        uVar2 = FUN_00c19624(lVar3,param_3);
        if ((uVar2 & 1) != 0) {
          *param_1 = lVar3;
          param_1[1] = param_2;
          param_1[2] = uVar5;
          goto LAB_00c1a9d0;
        }
        lVar3 = *(long *)(lVar3 + 0x18);
      } while (lVar3 != 0);
    }
  }
  *param_1 = 0;
LAB_00c1a9d0:
  param_1[3] = 0;
LAB_00c1a9d4:
  param_1[4] = uVar5;
  return;
}


