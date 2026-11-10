/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02908ed0; name: FUN_02908ed0
 */


int FUN_02908ed0(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((cVar1 != '\0') &&
      (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
      cVar1 != '\x03')) ||
     (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x61),
     (uVar4 & 1) == 0)) {
    if (*(short *)(param_1 + 0x92) == 0x97) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
      if ((uVar2 & 0xff) - 2 < 3) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
        if ((uVar4 & 1) != 0) {
          return -2;
        }
      }
      else if (((uVar2 & 0xff) == 1) &&
              (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                 (*(long **)(param_1 + 0x30),0x4e), (uVar4 & 1) != 0)) {
        return 2;
      }
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x6abc4e98d224cabd
                      );
    if (((uVar4 & 1) != 0) &&
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar4 & 1) != 0)) {
      return 2;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x6f);
    if ((((((uVar4 & 1) == 0) &&
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x178),
          (uVar4 & 1) == 0)) &&
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x163),
         (uVar4 & 1) == 0)) &&
        (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x169),
        (uVar4 & 1) == 0)) ||
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d),
       (uVar4 & 1) == 0)) {
      iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if (iVar3 < 0x41) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                           *(undefined4 *)(param_1 + 0x98));
        if (((uVar4 & 1) != 0) &&
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x4e), (uVar4 & 1) != 0)) {
          return -2;
        }
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                           *(undefined4 *)(param_1 + 0x98));
        if ((uVar4 & 1) != 0) {
          uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x32);
          return -(uVar2 & 1);
        }
      }
      return 0;
    }
  }
  return -2;
}


