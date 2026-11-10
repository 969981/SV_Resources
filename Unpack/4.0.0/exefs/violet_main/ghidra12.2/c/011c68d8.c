/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c68d8; name: FUN_011c68d8
 */


undefined8
FUN_011c68d8(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  
  uVar3 = FUN_00891fb0(param_1 + 8);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    cVar2 = *param_3;
    lVar1 = param_1;
    while (cVar2 != '\0') {
      *(char *)(lVar1 + 0x40) = cVar2;
      if (((int)lVar5 == 0x3e) || (param_3[lVar5 + 1] == '\0')) {
        puVar7 = (undefined1 *)(lVar1 + 0x41);
        lVar5 = lVar5 + 1;
        goto LAB_011c6968;
      }
      *(char *)(lVar1 + 0x41) = param_3[lVar5 + 1];
      lVar5 = lVar5 + 2;
      lVar1 = param_1 + lVar5;
      cVar2 = param_3[lVar5];
    }
    puVar7 = (undefined1 *)(lVar1 + 0x40);
LAB_011c6968:
    *puVar7 = 0;
    pcVar6 = param_3 + lVar5;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = 1;
    *(undefined8 *)(param_1 + 200) = param_2;
    *(undefined8 *)(param_1 + 0xd0) = param_4;
    *(undefined8 *)(param_1 + 0xd8) = param_5;
    *(undefined8 *)(param_1 + 0xe0) = param_6;
  }
  return uVar4;
}


