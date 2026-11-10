/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01697fb8; name: FUN_01697fb8
 */


undefined8 FUN_01697fb8(long param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  code *pcVar8;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    (**(code **)(**(long **)(param_1 + 0x218) + 0x168))();
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) != 0) &&
          (*(char *)(param_1 + 0x3ad) != '\0')) && (*(char *)(param_1 + 0x80) != '\0')) {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xa8) != '\0') {
          return 0;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
        if (*(char *)(lVar7 + 0x90) == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar7 + 0x60);
        }
        uVar4 = FUN_015af3fc(param_1,uVar5,param_1 + 0x70);
        if ((uVar4 & 1) == 0) {
          FUN_011e2180(param_1 + 0x70,*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xe0);
        }
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      uVar4 = FUN_01698180(param_1);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      FUN_01698200(param_1);
      pcVar8 = FUN_01690a94;
LAB_016980a0:
      *(code **)(param_1 + 0x308) = pcVar8;
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined4 *)(param_1 + 0x318) = 0;
      return 0;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x218) + 0x170))();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    *(char *)(param_1 + 0x210) = *(char *)(param_1 + 0x210) + '\x01';
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
    bVar3 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),
                         *(undefined1 *)(param_1 + 0x11c));
    bVar6 = *(byte *)(param_1 + 0x210);
    if (bVar6 < bVar3) {
      if ((*(byte *)(param_1 + 300) >> 2 & 1) == 0) {
        pcVar8 = (code *)&LAB_015aed60;
        goto LAB_016980a0;
      }
      do {
        uVar5 = FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),
                             *(undefined1 *)(param_1 + 0x11c));
        uVar4 = FUN_015af3fc(param_1,uVar5,
                             param_1 + (ulong)*(byte *)(param_1 + 0x210) * 0x10 + 0x220);
        bVar2 = *(byte *)(param_1 + 0x210);
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(param_1 + (ulong)bVar2 * 0x10 + 0x220) = 0;
        }
        bVar6 = bVar2 + 1;
        *(byte *)(param_1 + 0x210) = bVar6;
      } while ((byte)(bVar2 + 1) < bVar3);
    }
    if (bVar6 < bVar3) {
      return 0;
    }
  }
  *param_2 = *param_2 + 1;
  return 0;
}


