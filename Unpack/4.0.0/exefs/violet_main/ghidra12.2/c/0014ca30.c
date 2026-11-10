/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0014ca30; name: FUN_0014ca30
 */


ulong FUN_0014ca30(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  int local_44;
  
  iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_2);
  uVar2 = FUN_00c92df0(param_1,0xffffffff,&local_44);
  if (local_44 == 0) {
    if (iVar1 == 0) {
      if (-1 < (int)param_3) {
        uVar2 = (ulong)param_3;
        goto LAB_0014cadc;
      }
      pcVar3 = "field \'%s\' missing in date table";
    }
    else {
      pcVar3 = "field \'%s\' is not an integer";
    }
  }
  else {
    uVar4 = (ulong)param_4;
    if ((long)uVar2 < 0) {
      if ((long)(uVar4 - 0x80000000) <= (long)uVar2) goto LAB_0014cad8;
    }
    else if (uVar2 <= uVar4 + 0x7fffffff) {
LAB_0014cad8:
      uVar2 = uVar2 - uVar4;
LAB_0014cadc:
      FUN_00c5db00(param_1,0xfffffffe);
      goto LAB_0014cae8;
    }
    pcVar3 = "field \'%s\' is out-of-bound";
  }
  uVar2 = FUN_00123a70(param_1,pcVar3,param_2);
  uVar2 = uVar2 & 0xffffffff;
LAB_0014cae8:
  return uVar2 & 0xffffffff;
}


