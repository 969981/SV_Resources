/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157d5cc; name: FUN_0157d5cc
 */


uint FUN_0157d5cc(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    uVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if (cVar1 == '\x02') {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      uVar4 = uVar4 & 1;
    }
    else {
      uVar4 = 0;
    }
    cVar1 = *(char *)(param_1 + 0x95);
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      if (7 < iVar2) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
        uVar4 = uVar4 + (uVar3 & 1);
      }
      cVar1 = *(char *)(param_1 + 0x95);
    }
    if ((cVar1 == '\x02') &&
       (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 7 < iVar2))
    {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      uVar4 = uVar4 + (uVar3 & 1);
    }
  }
  return uVar4;
}


