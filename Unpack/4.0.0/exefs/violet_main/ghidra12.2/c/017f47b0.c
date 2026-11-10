/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f47b0; name: FUN_017f47b0
 */


int FUN_017f47b0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if ((((*(char *)(param_1 + 0xb8) == '\t') || (*(char *)(param_1 + 0xb9) == '\t')) ||
      (*(short *)(param_1 + 0xb6) == 0x62)) ||
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
     (uVar6 & 1) != 0)) {
    iVar5 = -10;
  }
  else {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
    iVar5 = -10;
    if ((uVar6 & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
      if ((uVar2 < 0x3d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0)) {
        iVar5 = 0;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0xb6);
        if (uVar1 < 0xc5) {
          iVar5 = -0xc;
          if (uVar1 != 0x12) {
            if (uVar1 == 0x29) goto LAB_017f492c;
            if (uVar1 != 0x9c) goto LAB_017f4994;
          }
        }
        else if (uVar1 < 0xd5) {
          if (uVar1 != 0xc5) {
            if (uVar1 != 199) goto LAB_017f4994;
            goto LAB_017f492c;
          }
          iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
          if (0x32 < iVar5) {
            return -10;
          }
          iVar5 = 0;
        }
        else if ((uVar1 == 0x110) || (uVar1 == 0xd5)) {
LAB_017f492c:
          iVar5 = -10;
        }
        else {
LAB_017f4994:
          iVar5 = -10;
          if (uVar1 != 0x66 || cVar3 != '\x01') {
            iVar5 = 0;
          }
        }
        if (((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) &&
           ((*(short *)(param_1 + 0xb6) == 0xa6 ||
            ((iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))(), iVar4 == 1 &&
             (*(short *)(param_1 + 0xc2) == 0xa6)))))) goto LAB_017f4954;
      }
    }
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar6 & 1) == 0) || (*(short *)(param_1 + 0x9e) == 0x97)) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
    if ((uVar6 & 1) == 0) {
      return iVar5;
    }
    if (*(short *)(param_1 + 0xb6) == 0x1a) {
      return iVar5;
    }
    if (*(char *)(param_1 + 0xb8) == '\x02') {
      return iVar5;
    }
    if (*(char *)(param_1 + 0xb9) == '\x02') {
      return iVar5;
    }
    return iVar5 + -10;
  }
LAB_017f4954:
  return iVar5 + -10;
}


