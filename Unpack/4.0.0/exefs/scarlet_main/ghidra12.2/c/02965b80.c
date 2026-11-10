/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02965b80; name: FUN_02965b80
 */


void FUN_02965b80(long param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int local_60;
  undefined1 local_5c;
  undefined4 local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  if ((iVar5 == param_2) && (*(int *)(*(long *)(param_1 + 0x48) + 0x68) != 0)) {
    plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar4 = (**(code **)(*plVar3 + 0x200))();
    if ((uVar4 & 1) == 0) {
      uVar4 = (**(code **)(*plVar3 + 0x220))(plVar3,0x18);
      if ((uVar4 & 1) != 0) {
        FUN_02965ad0(param_1,param_2);
      }
      uVar4 = (**(code **)(*plVar3 + 0x220))(plVar3,0x1a);
      local_60 = param_2;
      iStack_54 = param_2;
      if ((uVar4 & 1) == 0) {
        local_5c = 0;
        local_40 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_38 = 0;
        local_58 = 0x8200eb;
        FUN_01907920(param_1,&local_60);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x48) + 0x30);
        uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
        FUN_02960d60(uVar7,uVar2,uVar1);
      }
      else {
        local_5c = 0;
        local_40 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_38 = 0;
        local_58 = 0x8200ea;
        FUN_01907920(param_1,&local_60);
      }
    }
  }
  return;
}


