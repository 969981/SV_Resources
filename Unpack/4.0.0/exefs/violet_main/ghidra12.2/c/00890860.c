/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00890860; name: FUN_00890860
 */


undefined8
FUN_00890860(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  char local_130 [4];
  int iStack_12c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  
  local_18 = (undefined1)((ulong)param_3 >> 0x18);
  local_17 = (undefined1)((ulong)param_3 >> 0x10);
  local_16 = (undefined1)((ulong)param_3 >> 8);
  local_15 = (undefined1)param_3;
  local_14 = 0;
  if ((*param_2 == '.') && (param_2[1] == '\0')) {
    nn::util::SNPrintf(local_130,0xff,"%s/%s",&local_18,param_4);
  }
  else {
    nn::util::SNPrintf(local_130,0xff,"%s/%s/%s",param_2,&local_18);
  }
  iVar1 = FUN_00892230(param_1 + 8,local_130);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    _local_130 = 0;
    uVar2 = FUN_008921c8(param_1 + 8,local_130,iVar1);
    if (param_5 != (long *)0x0) {
      *param_5 = (long)iStack_12c;
    }
  }
  return uVar2;
}


