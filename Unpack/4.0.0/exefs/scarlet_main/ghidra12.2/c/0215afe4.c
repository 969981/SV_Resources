/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215afe4; name: FUN_0215afe4
 */


long FUN_0215afe4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_2;
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = ((undefined8 *)*param_1)[1];
  uStack_48 = param_2[1];
  local_40 = param_2[2];
  plVar4 = (long *)param_2[3];
  plStack_38 = plVar4;
  if (plVar4 == (long *)0x0) {
    lVar5 = FUN_02166910(uVar2,uVar3,&local_50);
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = FUN_02166910(uVar2,uVar3,&local_50);
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  lVar1 = 0;
  if (*(long *)(*param_1 + 8) != lVar5) {
    lVar1 = lVar5;
  }
  return lVar1;
}


