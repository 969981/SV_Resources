/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291693c; name: FUN_0291693c
 */


uint FUN_0291693c(long param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((uVar6 & 1) == 0) {
    bVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1f);
    if (6 < bVar3) {
      if (((((uVar6 & 1) == 0) && (*(char *)(param_1 + 0xac) != '\x02')) &&
          (*(char *)(param_1 + 0xad) != '\x02')) ||
         (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),2),
         (uVar6 & 1) != 0)) {
        if (((*(short *)(param_1 + 0xaa) != 0x8c) && (*(short *)(param_1 + 0xaa) != 0x1a)) ||
           ((uVar4 = *(ushort *)(param_1 + 0x9e) - 0x68, uVar4 < 0x3d &&
            ((1L << ((ulong)uVar4 & 0x3f) & 0x1800000000000001U) != 0)))) {
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
                                   (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x254
                                   ), (uVar6 & 1) != 0 ||
                (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                   (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x231
                                   ), (uVar6 & 1) != 0)) ||
               (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1d5)
               , (uVar6 & 1) != 0)))))) {
            uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
            uVar4 = uVar4 & 0xffff;
            if (uVar4 < 0x1f5) {
              if (((uVar4 == 0xb6) || (uVar4 == 0xc5)) || (uVar4 == 0x1d5)) goto LAB_02916bc0;
            }
            else if (((uVar4 - 0x231 < 0x24) &&
                     ((1L << ((ulong)(uVar4 - 0x231) & 0x3f) & 0x808000001U) != 0)) ||
                    (uVar4 == 0x1f5)) goto LAB_02916bc0;
            uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                              (*(long **)(param_1 + 0x30),0x26);
            if ((uVar6 & 1) != 0) {
              return 2;
            }
          }
LAB_02916bc0:
          cVar2 = *(char *)(param_1 + 0xac);
          if (((((((cVar2 == '\f') || (bVar3 = *(byte *)(param_1 + 0xad), bVar3 == 5)) ||
                 (cVar2 == '\x05')) || ((bVar3 == 9 || (cVar2 == '\t')))) || (bVar3 == 3)) ||
              ((cVar2 == '\x03' || (cVar2 == '\b')))) || ((bVar3 & 0xfb) == 8)) {
            uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x4e);
            uVar4 = 0xfffffff8;
            if ((uVar6 & 1) == 0) {
              uVar4 = 0xfffffffd;
            }
            cVar2 = *(char *)(param_1 + 0xac);
          }
          else {
            uVar4 = 0;
          }
          if ((((cVar2 != '\x06') && (cVar2 != '\v')) && (*(char *)(param_1 + 0xad) != '\v')) &&
             (*(char *)(param_1 + 0xad) != '\x06')) {
            uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x46);
            return uVar4 - (uVar5 & 1);
          }
          uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                            (*(long **)(param_1 + 0x30),0x26);
          uVar5 = uVar4 | 2;
          if ((uVar6 & 1) == 0) {
            uVar5 = uVar4;
          }
          return uVar5;
        }
        plVar7 = *(long **)(param_1 + 0x30);
        uVar8 = 0x3e;
      }
      else {
        plVar7 = *(long **)(param_1 + 0x30);
        uVar8 = 0x26;
      }
      uVar6 = (**(code **)(*plVar7 + 0x4c0))(plVar7,uVar8);
      uVar4 = 3;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      return uVar4;
    }
    if ((((uVar6 & 1) == 0) && (bVar3 = *(byte *)(param_1 + 0xac), bVar3 != 2)) &&
       (bVar1 = *(byte *)(param_1 + 0xad), bVar1 != 2)) {
      if (*(short *)(param_1 + 0xaa) == 0x1a) {
        return 0;
      }
      if (*(short *)(param_1 + 0xaa) == 0x8c) {
        return 0;
      }
      if ((((bVar1 == 5) || (bVar3 == 5)) ||
          ((bVar1 == 9 || (((bVar3 == 9 || (bVar1 == 3)) || (bVar3 == 3)))))) ||
         (((bVar3 & 0xfb) == 8 || ((bVar1 & 0xfb) == 8)))) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar4 = 0xfffffff8;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0xfffffffd;
        }
        return uVar4;
      }
    }
  }
  return 0;
}


