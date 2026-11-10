/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02785c84; name: FUN_02785c84
 */


void FUN_02785c84(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = param_1[4];
  lVar2 = param_2;
  if (lVar5 != 0) {
    uVar1 = FUN_02785da0(param_1,lVar5,param_3,param_2);
    lVar2 = FUN_02785da0(param_1,param_3,lVar5 + param_1[5] * 0x20,uVar1);
    lVar6 = param_1[5];
    if (lVar6 != 0) {
      lVar5 = lVar5 + 8;
      do {
        lVar4 = *(long *)(lVar5 + -8);
        lVar6 = lVar6 + -1;
        *(undefined8 *)(lVar5 + -8) = 0;
        if (lVar4 != 0) {
          FUN_027853e8(lVar5);
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar6 != 0);
    }
    lVar5 = param_1[6];
    plVar7 = (long *)*param_1;
    uVar1 = param_1[4];
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar7,uVar1,lVar5 << 5,8);
        goto LAB_02785d48;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar1,lVar5 << 5,8);
  }
LAB_02785d48:
  param_1[4] = param_2;
  param_1[5] = lVar2 - param_2 >> 5;
  param_1[6] = 10;
  return;
}


