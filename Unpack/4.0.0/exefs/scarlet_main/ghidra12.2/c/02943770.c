/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943770; name: FUN_02943770
 */


void FUN_02943770(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  iVar2 = FUN_0154b6d4(*(undefined8 *)(param_1 + 8));
  if (iVar2 != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
    if (lVar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar5 + 0xc);
    }
    uVar3 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),param_2,uVar1);
    if (((uVar3 & 1) == 0) &&
       ((lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98), lVar5 == 0 ||
        (*(int *)(lVar5 + 0xc) != 0x1fb)))) {
      plVar4 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
      uVar3 = (**(code **)(*plVar4 + 0x220))(plVar4,0x22);
      if (((uVar3 & 1) == 0) && (uVar3 = FUN_02943850(param_1), (uVar3 & 1) == 0)) {
        FUN_02943870(param_1,param_2,param_3,param_4);
        return;
      }
    }
  }
  return;
}


