/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e6570; name: FUN_029e6570
 */


undefined4
FUN_029e6570(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2[1] - (long)*param_2;
    puVar1 = &DAT_0486b050;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_2;
    }
    uVar3 = FUN_029e78d8(param_1,puVar1,lVar2 >> 2);
  }
  uVar4 = 0;
  if (param_3 != (undefined8 *)0x0) {
    lVar2 = param_3[1] - (long)*param_3;
    puVar1 = &DAT_0486b051;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_3;
    }
    uVar4 = FUN_029e7a0c(param_1,puVar1,lVar2 >> 2);
  }
  uVar5 = 0;
  if (param_4 != (undefined8 *)0x0) {
    lVar2 = param_4[1] - (long)*param_4;
    puVar1 = &DAT_0486b052;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_4;
    }
    uVar5 = FUN_029e7b40(param_1,puVar1,lVar2 >> 2);
  }
  if (param_5 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar2 = param_5[1] - (long)*param_5;
    puVar1 = &DAT_0486b053;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_5;
    }
    uVar6 = FUN_029e7c74(param_1,puVar1,lVar2 >> 2);
  }
  uVar3 = FUN_029e7db0(param_1,uVar3,uVar4,uVar5,uVar6);
  return uVar3;
}


