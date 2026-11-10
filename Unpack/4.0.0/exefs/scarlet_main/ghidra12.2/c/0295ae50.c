/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295ae50; name: FUN_0295ae50
 */


void FUN_0295ae50(long param_1,undefined4 param_2)

{
  short sVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar5 + 0xc);
  }
  uVar2 = FUN_0293d6f0(param_1,param_2,uVar6);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar6);
    sVar1 = (**(code **)(*plVar3 + 0x2a8))(plVar3);
    if ((((sVar1 != 0) && (sVar1 = (**(code **)(*plVar4 + 0x2a8))(plVar4), sVar1 == 0)) &&
        (uVar2 = (**(code **)(*plVar3 + 0x510))(plVar3,0xf), (uVar2 & 1) == 0)) &&
       (uVar2 = (**(code **)(*plVar3 + 0x510))(plVar3,0x11), (uVar2 & 1) == 0)) {
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0) {
        FUN_0295ad00(param_1,param_2,uVar6);
        return;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x4c) = uVar6;
    }
  }
  return;
}


