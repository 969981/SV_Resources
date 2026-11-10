/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02916180; name: FUN_02916180
 */


uint FUN_02916180(long param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  
  sVar2 = *(short *)(param_1 + 0x90);
  if ((((sVar2 == 0x1b4) || (sVar2 == 0x2d0)) || (sVar2 == 0x221)) &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
     (uVar6 & 1) == 0)) {
    bVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    sVar2 = *(short *)(param_1 + 0xaa);
    if (6 < bVar3) {
      if (((sVar2 == 0x8c) || (sVar2 == 0x12)) &&
         ((uVar4 = *(ushort *)(param_1 + 0x9e) - 0x68, 0x3c < uVar4 ||
          ((1L << ((ulong)uVar4 & 0x3f) & 0x1800000000000001U) == 0)))) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3e);
        uVar4 = 3;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xb6);
      if ((((uVar6 & 1) != 0) ||
          (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xc5),
          (uVar6 & 1) != 0)) ||
         ((uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x24c),
          (uVar6 & 1) != 0 ||
          (((uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x254),
            (uVar6 & 1) != 0 ||
            (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x231),
            (uVar6 & 1) != 0)) ||
           (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1d5),
           (uVar6 & 1) != 0)))))) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        uVar4 = uVar4 & 0xffff;
        if (uVar4 < 0x1f5) {
          if (((uVar4 == 0xb6) || (uVar4 == 0xc5)) || (uVar4 == 0x1d5)) goto LAB_02916370;
        }
        else if (((uVar4 - 0x231 < 0x24) &&
                 ((1L << ((ulong)(uVar4 - 0x231) & 0x3f) & 0x808000001U) != 0)) || (uVar4 == 0x1f5))
        goto LAB_02916370;
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
        if ((uVar6 & 1) != 0) {
          return 2;
        }
      }
LAB_02916370:
      cVar7 = *(char *)(param_1 + 0xac);
      if ((((((cVar7 == '\x06') || (cVar1 = *(char *)(param_1 + 0xad), cVar1 == '\v')) ||
            (cVar7 == '\v')) || ((cVar1 == '\x0e' || (cVar7 == '\x0e')))) || (cVar1 == '\b')) ||
         ((cVar7 == '\b' || (cVar1 == '\x06')))) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar4 = 0xfffffff8;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0xfffffffd;
        }
        cVar7 = *(char *)(param_1 + 0xac);
      }
      else {
        uVar4 = 0;
      }
      if ((((cVar7 != '\t') && (cVar1 = *(char *)(param_1 + 0xad), cVar1 != '\x0f')) &&
          (cVar7 != '\x0f')) &&
         (((cVar1 != '\x05' && (cVar7 != '\x05')) && ((cVar7 != '\n' && (1 < (byte)(cVar1 - 9U))))))
         ) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        return uVar4 - (uVar5 & 1);
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
      uVar5 = uVar4 | 2;
      if ((uVar6 & 1) == 0) {
        uVar5 = uVar4;
      }
      return uVar5;
    }
    if (sVar2 == 0x12) {
      return 0;
    }
    if (sVar2 == 0x8c) {
      return 0;
    }
    cVar7 = *(char *)(param_1 + 0xac);
    if (((cVar7 == '\x06') || (cVar1 = *(char *)(param_1 + 0xad), cVar1 == '\v')) ||
       (((cVar7 == '\v' || (((cVar1 == '\x0e' || (cVar7 == '\x0e')) || (cVar1 == '\b')))) ||
        ((cVar7 == '\b' || (cVar1 == '\x06')))))) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar4 = 0xfffffff8;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0xfffffffd;
      }
      return uVar4;
    }
  }
  return 0;
}


