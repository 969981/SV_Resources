/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a6048; name: FUN_028a6048
 */


byte * FUN_028a6048(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar1 = *param_2;
  if (bVar1 < 100) {
    if (bVar1 == 0x44) {
      uVar3 = 1;
      goto LAB_028a60b0;
    }
    if (bVar1 != 0x53) {
      if (bVar1 != 0x57) {
        return param_2;
      }
      uVar3 = 1;
      goto LAB_028a60cc;
    }
    uVar3 = 1;
LAB_028a60ec:
    lVar2 = FUN_0146a714(param_1,uVar3);
    uVar4 = *(ushort *)(lVar2 + 0xa0) | 0x2000;
  }
  else {
    if (bVar1 == 0x77) {
      uVar3 = 0;
LAB_028a60cc:
      lVar2 = FUN_0146a714(param_1,uVar3);
      *(ushort *)(lVar2 + 0xa0) = *(ushort *)(lVar2 + 0xa0) | 0xc00;
      FUN_0146ab00(lVar2,0x5f);
      goto LAB_028a60fc;
    }
    if (bVar1 == 0x73) {
      uVar3 = 0;
      goto LAB_028a60ec;
    }
    if (bVar1 != 100) {
      return param_2;
    }
    uVar3 = 0;
LAB_028a60b0:
    lVar2 = FUN_0146a714(param_1,uVar3);
    uVar4 = *(ushort *)(lVar2 + 0xa0) | 0x800;
  }
  *(ushort *)(lVar2 + 0xa0) = uVar4;
LAB_028a60fc:
  return param_2 + 1;
}


