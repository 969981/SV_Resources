/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ac4dcc; name: FUN_01ac4dcc
 */


uint FUN_01ac4dcc(long param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((uVar7 & 1) == 0) {
    bVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    uVar3 = *(ushort *)(param_1 + 0xaa);
    if (6 < bVar4) {
      uVar5 = uVar3 - 0x57;
      if ((((uVar5 < 0x36) && ((1L << ((ulong)uVar5 & 0x3f) & 0x20000008000001U) != 0)) ||
          (uVar3 == 0xb)) &&
         ((uVar5 = *(ushort *)(param_1 + 0x9e) - 0x68, 0x3c < uVar5 ||
          ((1L << ((ulong)uVar5 & 0x3f) & 0x1800000000000001U) == 0)))) {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3e);
        uVar5 = 3;
        if ((uVar7 & 1) == 0) {
          uVar5 = 0;
        }
        return uVar5;
      }
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xb6);
      if ((((uVar7 & 1) != 0) ||
          (uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xc5),
          (uVar7 & 1) != 0)) ||
         ((uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x24c),
          (uVar7 & 1) != 0 ||
          (((uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x254),
            (uVar7 & 1) != 0 ||
            (uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x231),
            (uVar7 & 1) != 0)) ||
           (uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1d5),
           (uVar7 & 1) != 0)))))) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        uVar5 = uVar5 & 0xffff;
        if (uVar5 < 0x1f5) {
          if (((uVar5 == 0xb6) || (uVar5 == 0xc5)) || (uVar5 == 0x1d5)) goto LAB_01ac4f60;
        }
        else if (((uVar5 - 0x231 < 0x24) &&
                 ((1L << ((ulong)(uVar5 - 0x231) & 0x3f) & 0x808000001U) != 0)) || (uVar5 == 0x1f5))
        goto LAB_01ac4f60;
        uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
        if ((uVar7 & 1) != 0) {
          return 2;
        }
      }
LAB_01ac4f60:
      bVar4 = *(byte *)(param_1 + 0xac);
      if (((((bVar4 == 4) || (cVar1 = *(char *)(param_1 + 0xad), cVar1 == '\x05')) || (bVar4 == 5))
          || ((cVar1 == '\t' || (bVar4 == 9)))) || (cVar1 == '\x04')) {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar5 = 0xfffffff8;
        if ((uVar7 & 1) == 0) {
          uVar5 = 0xfffffffd;
        }
        bVar4 = *(byte *)(param_1 + 0xac);
      }
      else {
        uVar5 = 0;
      }
      if (((0xf < bVar4) || ((1 << (ulong)(bVar4 & 0x1f) & 0x8c00U) == 0)) &&
         ((0xf < *(byte *)(param_1 + 0xad) ||
          ((1 << (ulong)(*(byte *)(param_1 + 0xad) & 0x1f) & 0x8c00U) == 0)))) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        return uVar5 - (uVar6 & 1);
      }
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
      uVar6 = uVar5 | 2;
      if ((uVar7 & 1) == 0) {
        uVar6 = uVar5;
      }
      return uVar6;
    }
    uVar5 = uVar3 - 0x57;
    if ((uVar5 < 0x36) && ((1L << ((ulong)uVar5 & 0x3f) & 0x20000008000001U) != 0)) {
      return 0;
    }
    if (uVar3 == 0xb) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 0xac);
    if ((((cVar1 == '\x04') || (cVar2 = *(char *)(param_1 + 0xad), cVar2 == '\x05')) ||
        (cVar1 == '\x05')) || (((cVar2 == '\t' || (cVar1 == '\t')) || (cVar2 == '\x04')))) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar5 = 0xfffffff8;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0xfffffffd;
      }
      return uVar5;
    }
  }
  return 0;
}


