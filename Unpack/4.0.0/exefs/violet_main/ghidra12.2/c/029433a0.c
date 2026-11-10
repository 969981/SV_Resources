/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029433a0; name: FUN_029433a0
 */


int FUN_029433a0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar6 = *(long *)(lVar4 + 0x20);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  if (((iVar5 == param_2) && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) &&
     (iVar5 = *(int *)(lVar4 + 0xc), iVar5 != 0)) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      iVar1 = FUN_029427a0(param_1,iVar8);
      if (iVar1 != 0) {
        plVar3 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),iVar1);
        uVar2 = (**(code **)(*plVar3 + 0x200))();
        iVar7 = iVar7 + (uVar2 & 1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}


