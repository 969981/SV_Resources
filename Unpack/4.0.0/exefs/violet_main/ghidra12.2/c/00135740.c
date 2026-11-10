/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00135740; name: FUN_00135740
 */


undefined8 FUN_00135740(long param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double local_60;
  char local_58;
  double local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (param_3[4] != param_3[5]) {
    return 0;
  }
  if (*param_3 == 5) {
    local_40 = *(undefined8 *)(param_3 + 2);
    local_38 = 0x13;
    if (param_4[4] != param_4[5]) {
      return 0;
    }
  }
  else {
    if (*param_3 != 6) {
      return 0;
    }
    local_40 = *(undefined8 *)(param_3 + 2);
    local_38 = 3;
    if (param_4[4] != param_4[5]) {
      return 0;
    }
  }
  if (*param_4 == 5) {
    local_50 = *(double *)(param_4 + 2);
    bVar2 = false;
    local_48 = 0x13;
  }
  else {
    if (*param_4 != 6) {
      return 0;
    }
    local_50 = *(double *)(param_4 + 2);
    bVar2 = true;
    local_48 = 3;
  }
  if (param_2 < 0xe) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & 0x2f80) == 0) {
      if ((uVar1 & 0x68) != 0) {
        dVar4 = (double)(long)local_50;
        if (!bVar2) {
          dVar4 = local_50;
        }
        if (dVar4 == 0.0) {
          return 0;
        }
      }
    }
    else {
      uVar3 = FUN_0013ff30(&local_40,&local_60,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_0013ff30(&local_50,&local_60,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
  }
  FUN_0012d8b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),param_2,&local_40,&local_50,
               &local_60);
  if (local_58 == '\x03') {
    *param_3 = 6;
    *(double *)(param_3 + 2) = local_60;
  }
  else {
    if (local_60 == 0.0) {
      return 0;
    }
    if (NAN(local_60)) {
      return 0;
    }
    *param_3 = 5;
    *(double *)(param_3 + 2) = local_60;
  }
  return 1;
}


