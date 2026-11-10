/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01581c6c; name: FUN_01581c6c
 */


void FUN_01581c6c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined2 *puVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  *param_2 = 0;
  uVar4 = FUN_01581d90(param_1,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),param_3[3]);
  plVar1 = (long *)*param_3;
  puVar2 = (undefined2 *)param_3[1];
  if ((uVar4 & 0xff) != 0) {
    FUN_01582da8(param_1,plVar1,puVar2,uVar4);
    *param_2 = 1;
    return;
  }
  sVar3 = (**(code **)(*plVar1 + 0x230))(plVar1);
  if (sVar3 == 2) {
    uVar5 = FUN_01243584(param_1);
    FUN_01582e80(uVar5,plVar1,*puVar2,2);
    uVar5 = FUN_01243584(param_1);
    FUN_0124ade8(uVar5,plVar1,0x2a);
    return;
  }
  if ((sVar3 == 3) && (uVar6 = FUN_01582d70(*puVar2), (uVar6 & 1) != 0)) {
    FUN_0298bab4(param_1,plVar1,*puVar2);
    return;
  }
  return;
}


