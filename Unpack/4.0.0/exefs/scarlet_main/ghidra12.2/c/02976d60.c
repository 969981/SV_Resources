/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02976d60; name: FUN_02976d60
 */


bool FUN_02976d60(undefined8 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined4 uStack_65;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined5 uStack_5f;
  undefined1 uStack_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(param_1[1] + 0x30));
  uVar2 = (**(code **)(*plVar3 + 0x2a8))();
  uVar4 = FUN_019d69c4(*param_1,uVar2);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    local_38 = 0;
    local_66 = 0;
    uStack_65 = 0;
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    local_70 = CONCAT44(param_2,param_2);
    local_68 = 0;
    uStack_5a = 1;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_02940480(param_1,&local_70);
    uStack_60 = 0;
    local_70 = CONCAT44(param_2,param_2);
    local_68 = (undefined2)uVar2;
    local_66 = 1;
    uStack_65 = CONCAT31(1,(undefined1)uStack_65);
    uStack_61 = 0;
    FUN_02940880(param_1,&local_70);
  }
  return bVar1;
}


