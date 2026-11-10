/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a372f4; name: FUN_01a372f4
 */


undefined8
FUN_01a372f4(long *param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined4 *puVar11;
  undefined4 local_78 [6];
  undefined1 auStack_48 [8];
  
  uVar6 = (**(code **)(*param_1 + 0x300))(param_1,7);
  if ((uVar6 & 1) == 0) {
    iVar3 = FUN_01a3755c(*(undefined8 *)(param_5 + 0x70),7);
    if (iVar3 == 1) {
      return 5;
    }
    uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
    uVar7 = FUN_00f7e27c(param_5);
    uVar4 = FUN_010e161c(uVar7,uVar4);
    FUN_011e244c(auStack_48,2,uVar4);
    uVar7 = FUN_00f7e284(param_5);
    uVar4 = FUN_0154b6d4(param_5);
    uVar5 = FUN_0291b234(param_5);
    bVar1 = FUN_010e171c(auStack_48,uVar4,uVar5,uVar7,local_78);
    if (bVar1 != 0) {
      uVar6 = (ulong)bVar1;
      puVar11 = local_78;
      do {
        plVar8 = (long *)FUN_01079790(uVar7,*puVar11);
        sVar2 = (**(code **)(*plVar8 + 0xf8))();
        if (sVar2 == 0x17) {
          sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar2 != 0x17) {
            uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
            uVar7 = 1;
            uVar10 = 0x17;
            goto LAB_01a37454;
          }
        }
        else if (sVar2 == 0x47) {
          uVar9 = FUN_029914d0(param_1,param_4,param_5);
          if ((uVar9 & 1) != 0) {
            uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
            uVar7 = 1;
            uVar10 = 0x47;
            goto LAB_01a37454;
          }
        }
        else if ((sVar2 == 0x2a) &&
                (uVar9 = (**(code **)(*param_1 + 0x300))(param_1,8), (uVar9 & 1) != 0)) {
          uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
          uVar7 = 1;
          uVar10 = 0x2a;
          goto LAB_01a37454;
        }
        uVar6 = uVar6 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar6 != 0);
    }
    uVar6 = (**(code **)(*param_1 + 0x220))(param_1,0x16);
    if ((((uVar6 & 1) != 0) ||
        (uVar6 = (**(code **)(*param_1 + 0x220))(param_1,8), (uVar6 & 1) != 0)) ||
       (uVar6 = (**(code **)(*param_1 + 0x220))(param_1,0x15), (uVar6 & 1) != 0)) {
      uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
      uVar10 = 0;
      uVar7 = 4;
LAB_01a37454:
      *param_2 = uVar4;
      *param_3 = uVar10;
      return uVar7;
    }
  }
  return 0;
}


