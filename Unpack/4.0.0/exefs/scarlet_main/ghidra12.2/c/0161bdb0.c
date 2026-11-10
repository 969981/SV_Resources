/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161bdb0; name: FUN_0161bdb0
 */


undefined8 FUN_0161bdb0(long param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar6 = (ulong)*(uint *)(param_1 + 0x7c);
  if (*(uint *)(param_1 + 0x7c) != 0) {
    puVar7 = (undefined4 *)(param_1 + 0x164);
    do {
      uVar1 = *puVar7;
      uVar3 = FUN_00f7e27c(param_2);
      uVar4 = FUN_0128ab58(uVar3,uVar2,uVar1);
      if ((uVar4 & 1) == 0) {
        uVar3 = FUN_00f7e284(param_2);
        plVar5 = (long *)FUN_01079790(uVar3,uVar1);
        uVar4 = (**(code **)(*plVar5 + 0x668))(plVar5,param_4);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
  }
  return 0;
}


