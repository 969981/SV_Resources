/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02913a5c; name: FUN_02913a5c
 */


uint FUN_02913a5c(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if (cVar1 != '\x03') {
    return 0xfffffffb;
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar4 = *(long **)(param_1 + 0x30);
  if (iVar2 < 0x51) {
    iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0x98));
    if (0x31 < iVar2) {
      uVar6 = 0;
      goto LAB_02913ac8;
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar6 = 0xfffffffe;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
    uVar6 = 2;
  }
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
LAB_02913ac8:
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
  return uVar6 | uVar3 & 1;
}


