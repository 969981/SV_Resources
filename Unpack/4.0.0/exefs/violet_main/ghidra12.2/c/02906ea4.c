/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02906ea4; name: FUN_02906ea4
 */


int FUN_02906ea4(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar2);
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = 0;
  if ((cVar1 == '\x01') && (iVar3 < 0x46)) {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar4 = -2;
    if ((uVar7 & 1) == 0) {
      iVar4 = 0;
    }
  }
  iVar3 = iVar4;
  if (*(char *)(param_1 + 0x95) == '\x01') {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar3 = iVar4 + -2;
    if ((uVar7 & 1) == 0) {
      iVar3 = iVar4;
    }
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (8 < iVar4) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar3 = iVar3 - (uVar5 & 1);
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (7 < iVar4) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar3 = iVar3 - (uVar5 & 1);
  }
  iVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = iVar3;
  if (((iVar6 == 6) &&
      (iVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x46 < iVar6)
      ) && (uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x7f),
           (uVar7 & 1) != 0)) {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar4 = iVar3 + 2;
    if ((uVar7 & 1) == 0) {
      iVar4 = iVar3;
    }
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar8 = *(long **)(param_1 + 0x30);
  if (iVar3 < 0x28) {
    uVar7 = (**(code **)(*plVar8 + 0x4c0))(plVar8,0x5a);
    iVar3 = iVar4 + -2;
    if ((uVar7 & 1) == 0) {
      iVar3 = iVar4;
    }
  }
  else {
    iVar6 = (**(code **)(*plVar8 + 0xa0))(plVar8,*(undefined4 *)(param_1 + 0x98));
    iVar3 = iVar4;
    if (iVar6 < 0x46) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
      iVar3 = iVar4 + -2;
      if ((uVar7 & 1) == 0) {
        iVar3 = iVar4;
      }
    }
  }
  return iVar3;
}


