/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290c490; name: FUN_0290c490
 */


int FUN_0290c490(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    iVar2 = 0;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((((uVar4 & 1) == 0) ||
        (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e)
        , (uVar4 & 1) == 0)) &&
       (((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2),
         (uVar4 & 1) == 0 &&
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3),
         (uVar4 & 1) == 0)) ||
        (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d)
        , (uVar4 & 1) == 0)))) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
      if (((((uVar4 & 1) == 0) &&
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6),
           (uVar4 & 1) == 0)) ||
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                             (*(long **)(param_1 + 0x30),0x32), (uVar4 & 1) == 0)) &&
         (((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1),
           (uVar4 & 1) == 0 ||
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x14), (uVar4 & 1) == 0)) &&
          ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           (uVar4 & 1) == 0 ||
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x14), (uVar4 & 1) == 0)))))) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
        iVar2 = -(uVar3 & 1);
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  return iVar2;
}


