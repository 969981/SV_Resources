/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290df60; name: FUN_0290df60
 */


uint FUN_0290df60(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    plVar5 = *(long **)(param_1 + 0x30);
    if ((uVar4 & 1) == 0) {
      iVar2 = (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined4 *)(param_1 + 0xb0));
      if ((iVar2 < 7) ||
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x46), (uVar4 & 1) == 0)) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f);
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x55);
      uVar3 = 0xfffffffe;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


