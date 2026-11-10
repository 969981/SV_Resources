/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017f950; name: FUN_0017f950
 */


long FUN_0017f950(byte *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 auStack_60 [8];
  long local_58;
  long local_48;
  
  if (5 < param_2) {
    uVar3 = *param_1 & 0x7f;
    if (1 < uVar3) {
      if ((char)*param_1 < '\0') {
        lVar1 = FUN_0017e880(param_1,param_1 + param_2,param_3,param_3 + param_4,&local_48,&local_58
                             ,1,auStack_60,1,param_5,param_6);
        if (-1 < lVar1) {
          if (local_58 != param_4) {
            lVar1 = -1;
          }
          return lVar1;
        }
      }
      else {
        pbVar2 = param_1 + 1;
        local_48 = param_3;
        while (lVar1 = FUN_0017f740(&local_48,pbVar2,param_1 + param_2,&local_58,
                                    (param_3 + param_4) - local_48,1,param_5,param_6), -1 < lVar1) {
          pbVar2 = pbVar2 + lVar1;
          uVar3 = uVar3 - 1;
          local_48 = local_48 + local_58;
          if (uVar3 == 0) {
            lVar1 = -1;
            if (local_48 == param_3 + param_4) {
              lVar1 = (long)pbVar2 - (long)param_1;
            }
            return lVar1;
          }
        }
      }
    }
  }
  return -1;
}


