/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02104d80; name: FUN_02104d80
 */


ulong FUN_02104d80(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  lVar2 = (**(code **)(*param_2 + 0x9a8))(param_2);
  if ((0xd < (int)param_3) || (*(int *)(lVar2 + (ulong)param_3 * 4 + 0xa8) == 0)) {
    return 0;
  }
  lVar2 = (**(code **)(*param_2 + 0x9a8))(param_2);
  if ((param_5 & 1) != 0) {
    uVar3 = FUN_01a3755c();
    return uVar3;
  }
  if ((int)param_3 < 0xe) {
    iVar4 = *(int *)(lVar2 + (ulong)param_3 * 4 + 0x38);
  }
  else {
    iVar4 = 0;
  }
  iVar1 = FUN_01a3755c();
  return (ulong)(uint)(iVar1 + iVar4);
}


