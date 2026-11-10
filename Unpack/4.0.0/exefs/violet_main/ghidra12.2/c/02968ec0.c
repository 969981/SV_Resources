/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02968ec0; name: FUN_02968ec0
 */


void FUN_02968ec0(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar6 = *(long *)(lVar4 + 0x20);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  if (iVar5 == param_2) {
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(lVar4 + 0xc);
    }
    plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar7);
    uVar2 = FUN_02968f90(param_1,uVar7,1);
    uVar3 = (**(code **)(*plVar1 + 0x510))(plVar1,7);
    if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
      FUN_02969240(param_1,param_2,plVar1,param_3);
      return;
    }
  }
  return;
}


