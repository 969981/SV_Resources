/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e04e9c; name: FUN_02e04e9c
 */


int FUN_02e04e9c(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (((*(short *)(param_1 + 0xaa) == 0x8d) || (*(short *)(param_1 + 0xaa) == 0x56)) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46),
     (uVar3 & 1) != 0)) {
    iVar1 = 2;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    plVar4 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x1e) {
      lVar6 = *plVar4;
      uVar5 = 0x4e;
    }
    else {
      iVar1 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0xa4));
      if (0x3b < iVar1) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x30);
      uVar5 = 0x3a;
      lVar6 = *plVar4;
    }
    uVar2 = (**(code **)(lVar6 + 0x4c0))(plVar4,uVar5);
    iVar1 = -(uVar2 & 1);
  }
  return iVar1;
}


