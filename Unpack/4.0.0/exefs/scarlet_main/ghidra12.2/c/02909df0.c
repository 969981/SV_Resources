/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02909df0; name: FUN_02909df0
 */


int FUN_02909df0(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3),
     (uVar5 & 1) == 0)) {
    iVar7 = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar7 = -3;
    if ((uVar5 & 1) == 0) {
      iVar7 = 0;
    }
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
  if (((uVar5 & 1) != 0) ||
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6),
     (uVar5 & 1) != 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar7 = iVar7 - (uVar2 & 1);
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  if ((uVar5 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x14);
    iVar7 = iVar7 - (uVar2 & 1);
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar6 = *(long **)(param_1 + 0x30);
  if (iVar3 < 0x1e) {
    uVar5 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x4e);
    iVar3 = iVar7 + -2;
    if ((uVar5 & 1) == 0) {
      iVar3 = iVar7;
    }
    iVar7 = iVar3;
  }
  else {
    iVar3 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
    if (iVar3 < 0x32) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      iVar7 = iVar7 - (uVar2 & 1);
    }
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar4);
  if (cVar1 == '\x01') {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    iVar3 = iVar7 + 2;
    if ((uVar5 & 1) == 0) {
      iVar3 = iVar7;
    }
  }
  else {
    iVar3 = iVar7;
    if (cVar1 == '\x02') {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
      iVar3 = iVar7 + -3;
      if ((uVar5 & 1) == 0) {
        iVar3 = iVar7;
      }
    }
  }
  return iVar3;
}


