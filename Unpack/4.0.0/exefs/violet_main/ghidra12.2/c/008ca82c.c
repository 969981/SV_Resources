/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ca82c; name: FUN_008ca82c
 */


ulong FUN_008ca82c(long param_1,long param_2,undefined4 param_3,uint param_4,code *param_5)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  long local_28;
  
  if (*(float *)(param_1 + 0x4c) <= 0.0) {
    uVar2 = FUN_008c9584(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_008cdcac(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_008cdbac(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_008cfe4c(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x4c),
                   *(undefined8 *)(param_2 + 0x98),param_2);
    }
    FUN_008cae90(param_1 + 0x178,param_2);
    uVar3 = 1;
    goto LAB_008ca9d4;
  }
  cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x35);
  if (param_5 != (code *)0x0) {
    local_28 = param_2;
    uVar2 = (*param_5)(&local_28);
    if ((int)uVar2 == 1) {
      return uVar2;
    }
    if (((int)uVar2 == 2) && (*(char *)(param_2 + 0x5fc) == '\0')) {
      *(undefined1 *)(param_2 + 0x5fc) = 1;
    }
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    uVar2 = FUN_008ce7d8(*(undefined4 *)(param_1 + 0x4c),*(undefined8 *)(param_2 + 0x98),param_2,
                         param_3,*(char *)(param_1 + 9) != '\0',*(char *)(param_1 + 0xe) == '\0',
                         param_4 & 1);
    if ((uVar2 & 1) != 0) {
      if (((cVar1 != '\0') && (*(char *)(*(long *)(param_2 + 0xa0) + 0x752) == '\x02')) &&
         ((0 < *(int *)(param_2 + 0x28) || (*(long *)(*(long *)(param_2 + 0x238) + 0x338) != 0)))) {
        FUN_008e5f1c(*(undefined8 *)(param_1 + 0x20),param_2);
      }
      FUN_008cae90(param_1 + 0x178,param_2);
      goto LAB_008ca9c4;
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    uVar2 = FUN_008c9584(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_008cdcac(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_008cdbac(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_008cfe4c(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x4c),
                   *(undefined8 *)(param_2 + 0x98),param_2);
    }
    FUN_008cae90(param_1 + 0x178,param_2);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
LAB_008ca9c4:
    uVar3 = 1;
  }
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
LAB_008ca9d4:
  *(uint *)(param_1 + 0x230) =
       *(uint *)(param_1 + 0x230) | 1 << (ulong)(*(uint *)(param_2 + 0x400) & 0x1f);
  uVar2 = FUN_008c95f4(param_2);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0x3c) =
         *(uint *)(param_1 + 0x3c) | 1 << (ulong)(*(uint *)(param_2 + 0x400) & 0x1f);
  }
  uVar2 = FUN_008c9678(param_2);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0x40) =
         *(uint *)(param_1 + 0x40) | 1 << (ulong)(*(uint *)(param_2 + 0x400) & 0x1f);
  }
  return (ulong)(uVar3 ^ 1);
}


