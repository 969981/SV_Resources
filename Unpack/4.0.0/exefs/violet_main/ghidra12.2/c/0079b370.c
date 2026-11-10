/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079b370; name: FUN_0079b370
 */


void FUN_0079b370(undefined8 param_1,long *param_2)

{
  int *piVar1;
  ErrorResultVariant *this;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  if (*(char *)((long)param_2 + 0x114c) == '\0') {
    (**(code **)(*param_2 + 0x220))(local_40);
    if (local_40[0] == 0) {
      FUN_007a4f9c(local_50,param_2[0x22b]);
      FUN_018ff39c(local_40,local_50);
      if (local_40[0] == 0) {
        FUN_0078cd58(param_2[0x22b],0);
        FUN_007ab5a8(local_50,param_2[0x31]);
        FUN_018ff39c(local_40,local_50);
        if (local_40[0] == 0) {
          FUN_0078cd58(param_2[0x31],0);
          FUN_007ab5a8(local_50,param_2[0x32]);
          FUN_018ff39c(local_40,local_50);
          if (local_40[0] == 0) {
            FUN_0078cd58(param_2[0x32],0);
            *(char *)((long)param_2 + 0x114c) = '\x01';
            this = (ErrorResultVariant *)((ulong)local_50 | 4);
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
            FUN_018ff39c(param_2 + 0x33,local_50);
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
            FUN_018ff39c(param_2 + 0x35,local_50);
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
            goto LAB_0079b454;
          }
        }
      }
    }
  }
  else {
    local_40[0] = 0x10402;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  piVar1 = local_40;
LAB_0079b454:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


