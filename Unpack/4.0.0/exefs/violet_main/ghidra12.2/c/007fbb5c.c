/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fbb5c; name: FUN_007fbb5c
 */


void FUN_007fbb5c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_70 [4];
  SystemEventType aSStack_60 [40];
  char local_38;
  int local_30 [4];
  undefined4 local_18 [2];
  
  (**(code **)(*param_2 + 0x38))(local_30,param_2,param_3,0);
  if (local_30[0] == 0) {
    local_38 = '\0';
    iVar1 = nn::account::AsyncContext::GetSystemEvent((SystemEvent *)(param_2 + 0x18d));
    if (iVar1 != 0) {
      local_70[0] = 0xec63;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
      FUN_00cbd7c0(param_1,local_70);
      if (local_38 == '\0') {
        return;
      }
      nn::os::DestroySystemEvent(aSStack_60);
      return;
    }
    nn::os::WaitSystemEvent(aSStack_60);
    (**(code **)(*param_2 + 0x48))(local_70,param_2);
    FUN_018ff39c(local_30,local_70);
    if (local_38 != '\0') {
      nn::os::DestroySystemEvent(aSStack_60);
    }
  }
  FUN_00cbd7c0(param_1,local_30);
  return;
}


