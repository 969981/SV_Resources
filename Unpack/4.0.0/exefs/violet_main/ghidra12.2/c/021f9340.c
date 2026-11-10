/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f9340; name: FUN_021f9340
 */


ulong FUN_021f9340(undefined8 param_1,long param_2,undefined4 param_3,ushort *param_4)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  
  uVar1 = *param_4;
  if (uVar1 < 0x12) {
    if (uVar1 == 8) {
      uVar4 = FUN_00cf4c64(param_3,param_4[1]);
      return uVar4;
    }
    if (uVar1 != 0x11) {
      return 0;
    }
    uVar4 = FUN_00cf4c64(param_3,param_4[1]);
    if ((uVar4 & 1) != 0) {
      cVar3 = FUN_00cec028(param_1);
      bVar2 = cVar3 == '\0';
LAB_021f93f8:
      return (ulong)bVar2;
    }
  }
  else if (uVar1 == 0x12) {
    uVar4 = FUN_00cf4c64(param_3,param_4[1]);
    if ((uVar4 & 1) != 0) {
      cVar3 = FUN_00cec028(param_1);
      bVar2 = cVar3 == '\x01';
      goto LAB_021f93f8;
    }
  }
  else {
    if (uVar1 != 0x2a) {
      return 0;
    }
    uVar4 = FUN_00cf4c64(param_3,param_4[1]);
    if ((uVar4 & 1) != 0) {
      return (ulong)(*(char *)(param_2 + 4) != '\0');
    }
  }
  return 0;
}


