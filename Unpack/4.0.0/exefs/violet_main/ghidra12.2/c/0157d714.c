/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157d714; name: FUN_0157d714
 */


uint FUN_0157d714(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 != '\x03')) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    uVar4 = 0;
    if ((uVar3 & 0xffff) != 0) {
      uVar4 = (uVar2 & 0xffff) / (uVar3 & 0xffff);
    }
    uVar4 = (uVar4 >> (*(short *)(param_1 + 0xb6) == 0x86)) << (*(short *)(param_1 + 0x9e) == 0x86);
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if (cVar1 != '\x02') {
      if (uVar4 < 5) {
        if (uVar4 != 4) {
          if (uVar4 < 2) {
            uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x55);
            return -(uVar4 & 1);
          }
          return 0;
        }
        plVar5 = *(long **)(param_1 + 0x30);
        uVar7 = 0x32;
      }
      else {
        plVar5 = *(long **)(param_1 + 0x30);
        uVar7 = 0x46;
      }
      uVar4 = (**(code **)(*plVar5 + 0x4c0))(plVar5,uVar7);
      return uVar4 & 1;
    }
    if (2 < uVar4) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar4 = 2;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  return 0;
}


