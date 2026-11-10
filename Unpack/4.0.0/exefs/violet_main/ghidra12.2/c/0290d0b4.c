/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290d0b4; name: FUN_0290d0b4
 */


uint FUN_0290d0b4(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar2 == '\x03')) {
LAB_0290d110:
    uVar4 = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    plVar6 = *(long **)(param_1 + 0x30);
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(*plVar6 + 0xf8))
                        (plVar6,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
      if ((uVar5 & 1) == 0) goto LAB_0290d110;
      iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      plVar6 = *(long **)(param_1 + 0x30);
      pcVar8 = *(code **)(*plVar6 + 0x4c0);
      if (0x50 < iVar3) {
        uVar7 = 0x4e;
        goto LAB_0290d21c;
      }
      uVar5 = (*pcVar8)(plVar6,0x5d);
      bVar1 = (uVar5 & 1) == 0;
      uVar4 = 0xfffffffd;
    }
    else {
      iVar3 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
      plVar6 = *(long **)(param_1 + 0x30);
      if (iVar3 < 0x5b) {
        iVar3 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
        plVar6 = *(long **)(param_1 + 0x30);
        pcVar8 = *(code **)(*plVar6 + 0x4c0);
        if (0x3c < iVar3) {
          uVar4 = (*pcVar8)(plVar6,0x27);
          return uVar4 & 1;
        }
        uVar7 = 0x55;
LAB_0290d21c:
        uVar5 = (*pcVar8)(plVar6,uVar7);
        bVar1 = (uVar5 & 1) == 0;
        uVar4 = 0xfffffffe;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x55);
        bVar1 = (uVar5 & 1) == 0;
        uVar4 = 2;
      }
    }
    if (bVar1) {
      uVar4 = 0;
    }
  }
  return uVar4;
}


