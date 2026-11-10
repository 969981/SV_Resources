/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02907810; name: FUN_02907810
 */


int FUN_02907810(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar2 < 8) {
    iVar2 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar2 = -(uVar3 & 1);
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  iVar7 = iVar2;
  if (iVar4 < 5) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar7 = iVar2 + -2;
    if ((uVar6 & 1) == 0) {
      iVar7 = iVar2;
    }
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar2 < 0x32) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar7 = iVar7 - (uVar3 & 1);
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar5);
  iVar2 = iVar7;
  if (cVar1 == '\x02') {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar2 = iVar7 + -2;
    if ((uVar6 & 1) == 0) {
      iVar2 = iVar7;
    }
  }
  return iVar2;
}


