/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3efc; name: FUN_001f3efc
 */


undefined8
FUN_001f3efc(long param_1,int *param_2,int *param_3,char param_4,undefined4 param_5,long param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x7fffffffU - param_6 < (ulong)(long)*param_2) {
    uVar2 = FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),3,0);
    return uVar2;
  }
  iVar1 = *param_2 + (int)param_6;
  *param_2 = iVar1;
  if (param_4 == '\0') {
    if (*param_3 <= iVar1) {
      iVar1 = *param_3;
    }
    uVar2 = FUN_001ed6e8(param_7,iVar1);
    if (((int)uVar2 != 0) && (uVar2 = FUN_001f3450(param_1,0,param_5,iVar1), (int)uVar2 == 0)) {
      *param_3 = *param_3 - iVar1;
      *param_2 = *param_2 - iVar1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


