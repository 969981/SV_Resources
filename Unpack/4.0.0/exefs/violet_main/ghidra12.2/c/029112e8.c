/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029112e8; name: FUN_029112e8
 */


int FUN_029112e8(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    return -(uVar2 & 1);
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  plVar5 = *(long **)(param_1 + 0x30);
  if (iVar3 < 9) {
    iVar3 = (**(code **)(*plVar5 + 0x100))(plVar5,*(undefined4 *)(param_1 + 0xb0));
    if (iVar3 < 7) goto LAB_02911410;
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((cVar1 == '\x02') &&
       (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55),
       (uVar6 & 1) != 0)) {
      return 2;
    }
    plVar5 = *(long **)(param_1 + 0x30);
    uVar7 = 0x46;
    lVar8 = *plVar5;
  }
  else {
    lVar8 = *plVar5;
    uVar7 = 0x55;
  }
  uVar6 = (**(code **)(lVar8 + 0x4c0))(plVar5,uVar7);
  if ((uVar6 & 1) != 0) {
    return 2;
  }
LAB_02911410:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar4);
  if ((cVar1 == '\x01') &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f),
     (uVar6 & 1) != 0)) {
    return 2;
  }
  return 0;
}


