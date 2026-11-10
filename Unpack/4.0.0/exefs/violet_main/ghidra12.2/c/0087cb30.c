/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087cb30; name: FUN_0087cb30
 */


undefined4 FUN_0087cb30(long param_1,long *param_2,uint *param_3)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x48);
  cVar3 = (char)param_3[0xf];
  if (uVar5 != 0 && cVar3 != '\0') {
    uVar4 = *param_3;
    if (uVar4 == 0) {
      cVar3 = '\x01';
    }
    else {
      uVar5 = 0;
      do {
        if ((uVar5 == 0) && (*(long *)(param_1 + 0xff8) == 0)) {
          lVar2 = (**(code **)(*param_2 + 0x10))
                            (param_2,0x400,"../audiomaster/include/modules\\compressor.h",0x69);
          *(long *)(param_1 + 0xff8) = lVar2;
          if (lVar2 == 0) {
            return 0x8080000a;
          }
          uVar4 = *param_3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
      uVar5 = *(uint *)(param_1 + 0x48);
      cVar3 = (char)param_3[0xf];
    }
  }
  if ((1 < uVar5) && (bVar1 = cVar3 != '\0', cVar3 = '\0', bVar1)) {
    uVar4 = *param_3;
    if (uVar4 == 0) {
      cVar3 = '\x01';
    }
    else {
      uVar5 = 0;
      do {
        if ((uVar5 == 0) && (*(long *)(param_1 + 0x1268) == 0)) {
          lVar2 = (**(code **)(*param_2 + 0x10))
                            (param_2,0x400,"../audiomaster/include/modules\\compressor.h",0x69);
          *(long *)(param_1 + 0x1268) = lVar2;
          if (lVar2 == 0) {
            return 0x8080000a;
          }
          uVar4 = *param_3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
      uVar5 = *(uint *)(param_1 + 0x48);
      cVar3 = (char)param_3[0xf];
    }
  }
  if ((2 < uVar5) && (cVar3 != '\0')) {
    uVar4 = *param_3;
    if (uVar4 == 0) {
      cVar3 = '\x01';
    }
    else {
      uVar5 = 0;
      do {
        if ((uVar5 == 0) && (*(long *)(param_1 + 0x14d8) == 0)) {
          lVar2 = (**(code **)(*param_2 + 0x10))
                            (param_2,0x400,"../audiomaster/include/modules\\compressor.h",0x69);
          *(long *)(param_1 + 0x14d8) = lVar2;
          if (lVar2 == 0) {
            return 0x8080000a;
          }
          uVar4 = *param_3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
      uVar5 = *(uint *)(param_1 + 0x48);
      cVar3 = (char)param_3[0xf];
    }
  }
  if (((3 < uVar5) && (cVar3 != '\0')) && (uVar5 = *param_3, uVar5 != 0)) {
    uVar4 = 0;
    do {
      if ((uVar4 == 0) && (*(long *)(param_1 + 0x1748) == 0)) {
        lVar2 = (**(code **)(*param_2 + 0x10))
                          (param_2,0x400,"../audiomaster/include/modules\\compressor.h",0x69);
        *(long *)(param_1 + 0x1748) = lVar2;
        if (lVar2 == 0) {
          return 0x8080000a;
        }
        uVar5 = *param_3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}


