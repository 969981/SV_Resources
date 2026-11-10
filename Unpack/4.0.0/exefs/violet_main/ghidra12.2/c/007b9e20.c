/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b9e20; name: FUN_007b9e20
 */


void FUN_007b9e20(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong local_68;
  undefined4 local_60;
  int local_58 [4];
  undefined4 local_48 [2];
  
  FUN_0079d8a4(local_58);
  if (local_58[0] == 0) {
    nn::os::LockMutex((MutexType *)(param_2 + 0x1f8));
    plVar2 = *(long **)(param_2 + 0x218);
    uVar1 = FUN_00796620(plVar2 + 0x57);
    FUN_007a33d8(param_3,param_2 + 0xc40,uVar1);
    FUN_007966e4(&local_68,plVar2 + 0x57,param_2 + 0xc40,uVar1);
    local_60 = 0;
    local_68 = 0x8000000;
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_68);
    local_68 = local_68 & 0xffffffff00000000;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
    FUN_00cbd7c0(param_1,&local_68);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f8));
  }
  else {
    FUN_00cbd7c0(param_1,local_58);
  }
  return;
}


