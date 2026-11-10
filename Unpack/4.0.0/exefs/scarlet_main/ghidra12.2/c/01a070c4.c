/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a070c4; name: FUN_01a070c4
 */


long * FUN_01a070c4(undefined8 param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 local_4c [12];
  undefined1 auStack_28 [8];
  
  *param_2 = 10;
  FUN_01582534();
  uVar5 = FUN_014813ec();
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar2 = FUN_010e161c(uVar5,uVar2);
  uVar3 = FUN_01243680(param_1);
  uVar4 = FUN_01238c2c(param_1);
  FUN_011e244c(auStack_28,7,uVar2);
  bVar1 = FUN_01238ce0(auStack_28,uVar3,uVar4,local_4c);
  if (bVar1 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar9 = (ulong)bVar1;
    puVar8 = local_4c;
    do {
      plVar6 = (long *)FUN_01238c38(param_1,*puVar8);
      if ((plVar6 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar6 + 0x208))(plVar6), (uVar7 & 1) == 0)) {
        *param_2 = *puVar8;
        return plVar6;
      }
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return plVar6;
}


