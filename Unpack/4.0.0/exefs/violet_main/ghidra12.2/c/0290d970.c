/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290d970; name: FUN_0290d970
 */


uint FUN_0290d970(long param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
LAB_0290d9d0:
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((uVar2 < 800) || (cVar1 != '\x02')) {
      if (uVar2 < 2000) {
        if (uVar2 < 1000) {
          if (799 < uVar2) {
            uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x32);
            return uVar3 & 1;
          }
          if ((uVar2 < 0xfa) &&
             ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                 (*(long **)(param_1 + 0x30),0x32), (uVar5 & 1) != 0 ||
              ((uVar2 < 100 &&
               (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                  (*(long **)(param_1 + 0x30),0x5a), (uVar5 & 1) != 0)))))) {
            return 0xffffffff;
          }
          goto LAB_0290d9d0;
        }
        plVar4 = *(long **)(param_1 + 0x30);
        uVar6 = 0x27;
      }
      else {
        plVar4 = *(long **)(param_1 + 0x30);
        uVar6 = 0x32;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x30);
      uVar6 = 0x4e;
    }
    uVar5 = (**(code **)(*plVar4 + 0x4c0))(plVar4,uVar6);
    uVar3 = 2;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}


