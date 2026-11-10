/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291352c; name: FUN_0291352c
 */


int FUN_0291352c(long param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if (*(short *)(param_1 + 0xb6) == 0x40) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar6 = -2;
    if ((uVar5 & 1) == 0) {
      iVar6 = 0;
    }
  }
  else {
    iVar6 = 0;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar3);
  iVar1 = iVar6;
  if ((cVar2 != '\x02') &&
     (iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar4 < 4)) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar1 = iVar6 + -2;
    if ((uVar5 & 1) == 0) {
      iVar1 = iVar6;
    }
  }
  return iVar1;
}


