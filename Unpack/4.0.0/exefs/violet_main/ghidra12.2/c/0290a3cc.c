/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290a3cc; name: FUN_0290a3cc
 */


uint FUN_0290a3cc(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if (((uVar4 & 1) == 0) && (*(short *)(param_1 + 0x9e) != 0x9e)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    uVar2 = -(uVar3 & 1);
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    plVar5 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x51) {
      iVar1 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0x98));
      if (iVar1 < 0x29) {
        return uVar2;
      }
      plVar5 = *(long **)(param_1 + 0x30);
      uVar6 = 0x27;
      lVar7 = *plVar5;
    }
    else {
      lVar7 = *plVar5;
      uVar6 = 0x55;
    }
    uVar4 = (**(code **)(lVar7 + 0x4c0))(plVar5,uVar6);
    uVar3 = 0xfffffffe;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0xffffffff;
    }
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar2;
    }
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    plVar5 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x3d) {
      iVar1 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0x98));
      if (iVar1 < 0x14) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x4e);
      uVar3 = 0xfffffffe;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < 0x32) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      uVar3 = uVar3 + (uVar2 & 1);
    }
  }
  return uVar3;
}


