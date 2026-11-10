/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fe834; name: FUN_020fe834
 */


undefined8 FUN_020fe834(long param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) != 0) &&
        (*(char *)(param_1 + 0x3ad) != '\0')) && (*(char *)(param_1 + 0x80) != '\0')) {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xa8) != '\0') {
        return 0;
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
      if (*(char *)(lVar7 + 0x90) == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x60);
      }
      uVar5 = FUN_015af3fc(param_1,uVar6,param_1 + 0x70);
      if ((uVar5 & 1) == 0) {
        FUN_011e2180(param_1 + 0x70,*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xe0);
      }
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    FUN_01698200(param_1);
    *(code **)(param_1 + 0x308) = FUN_01690a94;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    if (iVar1 == 1) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x218) + 0x520))();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
      bVar4 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),
                           *(undefined1 *)(param_1 + 0x11c));
      bVar2 = *(byte *)(param_1 + 0x210);
      while (bVar2 < bVar4) {
        FUN_015af348(param_1);
        FUN_020fe9a4(param_1,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
        cVar3 = *(char *)(param_1 + 0x210);
        *(char *)(param_1 + 0x210) = cVar3 + '\x01';
        bVar2 = cVar3 + 1;
      }
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      (**(code **)(**(long **)(param_1 + 0x218) + 0x518))();
    }
    *param_2 = *param_2 + 1;
  }
  return 0;
}


