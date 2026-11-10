/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029110a0; name: FUN_029110a0
 */


undefined4 FUN_029110a0(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar2 == '\x03')) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x98));
    plVar5 = *(long **)(param_1 + 0x30);
    if ((uVar4 & 1) == 0) {
      iVar3 = (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined4 *)(param_1 + 0xb0));
      plVar5 = *(long **)(param_1 + 0x30);
      if (iVar3 < 7) {
        iVar3 = (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined4 *)(param_1 + 0x98));
        if ((7 < iVar3) &&
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x46), (uVar4 & 1) != 0)) {
          return 2;
        }
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f);
        bVar1 = (uVar4 & 1) == 0;
        uVar6 = 2;
      }
      else {
        uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x46);
        bVar1 = (uVar4 & 1) == 0;
        uVar6 = 0xfffffffe;
      }
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x5a);
      bVar1 = (uVar4 & 1) == 0;
      uVar6 = 0xfffffffd;
    }
    if (bVar1) {
      uVar6 = 0;
    }
  }
  return uVar6;
}


