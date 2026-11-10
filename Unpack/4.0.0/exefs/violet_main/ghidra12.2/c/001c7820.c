/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7820; name: FUN_001c7820
 */


undefined4 FUN_001c7820(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar3 = FUN_001fabf4(param_1[0xa6]);
  uVar4 = 0;
  if ((param_2 != (undefined8 *)0x0) && (iVar3 != 0)) {
    lVar5 = param_1[0xa6];
    uVar4 = FUN_001c8db4(param_1,*(undefined4 *)(lVar5 + 0x34),*(undefined8 *)(lVar5 + 0x38));
    *(undefined8 *)(lVar5 + 0x38) = 0;
  }
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1[0xa4];
  }
  if (param_1[0xa4] == 0) {
    bVar2 = (*(uint *)((long)param_1 + 0x3fc) & 0x20) != 0;
    pcVar1 = "host";
    if (bVar2) {
      pcVar1 = "proxy";
    }
    uVar4 = 5;
    if (!bVar2) {
      uVar4 = 6;
    }
    FUN_001db9c8(*param_1,"Could not resolve %s: %s",pcVar1,param_1[0xa2]);
  }
  FUN_001c7744(param_1 + 0xa2);
  if (param_1[0xa4] == 0) {
    FUN_001c6c60(param_1,1);
  }
  return uVar4;
}


