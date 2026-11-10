/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290f2cc; name: FUN_0290f2cc
 */


uint FUN_0290f2cc(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (iVar2 < 0x51) {
      uVar4 = 0;
    }
    else {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
      plVar5 = *(long **)(param_1 + 0x30);
      if (cVar1 == '\x02') {
        uVar6 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x5a);
        uVar4 = 2;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x27);
      uVar4 = uVar4 & 1;
    }
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    plVar5 = *(long **)(param_1 + 0x30);
    if (iVar2 < 0x1e) {
      uVar6 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x5a);
      uVar3 = uVar4 | 0xfffffffe;
      if ((uVar6 & 1) == 0) {
        uVar3 = uVar4;
      }
      return uVar3;
    }
    iVar2 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0xb0));
    if (iVar2 < 0x32) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      return uVar4 - (uVar3 & 1);
    }
  }
  return uVar4;
}


