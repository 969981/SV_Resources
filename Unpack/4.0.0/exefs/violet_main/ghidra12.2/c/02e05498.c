/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e05498; name: FUN_02e05498
 */


uint FUN_02e05498(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x90))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    iVar1 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0xa4));
    plVar4 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x47) {
      iVar1 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0xa4));
      if (iVar1 < 0x33) {
        return 0;
      }
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x14);
      return uVar2 & 1;
    }
    lVar6 = *plVar4;
    uVar5 = 0x32;
  }
  else {
    lVar6 = *plVar4;
    uVar5 = 0x4e;
  }
  uVar3 = (**(code **)(lVar6 + 0x4c0))(plVar4,uVar5);
  uVar2 = 2;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


