/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcb098; name: FUN_00dcb098
 */


void FUN_00dcb098(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x52) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = FUN_00d90dc4(param_1 + 0x68,uVar3);
    if ((uVar2 & 1) == 0) {
      FUN_00dcbb24(param_1 + 0x68,uVar3);
    }
    if ((*(char *)(param_1 + 0x70) == '\0') && (*(char *)(param_1 + 0x72) == '\0')) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      lVar1 = param_1 + 0x58;
      uVar2 = FUN_00d9549c(lVar1,uVar3);
      if (((uVar2 & 1) == 0) && (uVar2 = FUN_00dcb834(lVar1,uVar3), (uVar2 & 1) == 0)) {
        FUN_00dcb5a4(lVar1,uVar3);
      }
    }
  }
  FUN_00dcb178(param_1,param_2);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_00dcb36c(param_1);
  return;
}


