/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01460dbc; name: FUN_01460dbc
 */


undefined8 FUN_01460dbc(long param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x1a) == '\0') {
    lVar7 = 0;
    if (*(byte *)(param_1 + 0x18) < 5) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)*(byte *)(param_1 + 0x18) * 0x38
              + 0x28;
    }
    if (*(byte *)(param_1 + 0x19) < *(byte *)(lVar7 + 0x30)) {
      uVar6 = *(undefined8 *)(lVar7 + (ulong)*(byte *)(param_1 + 0x19) * 8);
    }
    else {
      uVar6 = 0;
    }
    *param_2 = uVar6;
    *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + '\x01';
    bVar5 = *(byte *)(param_1 + 0x18);
    while (bVar5 < 5) {
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
      bVar2 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),bVar5);
      bVar5 = *(byte *)(param_1 + 0x19);
      while (bVar5 < bVar2) {
        lVar7 = 0;
        if (*(byte *)(param_1 + 0x18) < 5) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) +
                  (ulong)*(byte *)(param_1 + 0x18) * 0x38 + 0x28;
        }
        if ((bVar5 < *(byte *)(lVar7 + 0x30)) &&
           (plVar3 = *(long **)(lVar7 + (ulong)bVar5 * 8), plVar3 != (long *)0x0)) {
          uVar4 = (**(code **)(*plVar3 + 0x200))();
          if ((uVar4 & 1) == 0) {
            return 1;
          }
          bVar5 = *(byte *)(param_1 + 0x19);
        }
        bVar5 = bVar5 + 1;
        *(byte *)(param_1 + 0x19) = bVar5;
      }
      cVar1 = *(char *)(param_1 + 0x18);
      *(char *)(param_1 + 0x18) = cVar1 + '\x01';
      *(undefined1 *)(param_1 + 0x19) = 0;
      bVar5 = cVar1 + 1;
    }
    uVar6 = 1;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


