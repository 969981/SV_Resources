/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02909984; name: FUN_02909984
 */


uint FUN_02909984(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 != '\x03')) {
    plVar4 = *(long **)(param_1 + 0x30);
    if (*(short *)(param_1 + 0x9e) == 0x36) {
      uVar2 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
      return uVar2 & 1;
    }
    uVar5 = (**(code **)(*plVar4 + 0xf8))
                      (plVar4,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((uVar5 & 1) == 0) {
      if (0x46 < iVar3) goto LAB_02909a5c;
    }
    else if (0x37 < iVar3) {
LAB_02909a5c:
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      return -(uVar2 & 1);
    }
  }
  return 0;
}


