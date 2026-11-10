/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e0ccc; name: FUN_007e0ccc
 */


void FUN_007e0ccc(undefined8 param_1,long param_2,char param_3,long *param_4,int *param_5,
                 long *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((*(char *)(param_2 + 4) == -1) || (*(char *)(param_2 + 5) == -3)) {
    local_28[0] = 0x4c11;
  }
  else if (param_3 == -1) {
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
    lVar3 = *(long *)(param_2 + 0x20);
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = *(undefined4 *)(param_2 + 0x2c);
    *param_4 = lVar3;
    *param_5 = iVar1;
    *param_6 = lVar3 + (long)iVar1 * 0x30;
    *param_7 = uVar2;
    local_28[0] = 0;
  }
  else {
    if ((param_3 != -3) && (*(char *)(param_2 + 5) != param_3)) {
      FUN_007e0b74(param_1);
      return;
    }
    local_28[0] = 0x2c0a;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


