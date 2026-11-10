/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299d96c; name: FUN_0299d96c
 */


undefined8
FUN_0299d96c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  plVar2 = (long *)FUN_01479658(param_1,param_2);
  if ((plVar2 == (long *)0x0) || (uVar3 = FUN_029a0278(plVar2,param_4,param_5), (uVar3 & 1) == 0)) {
    uVar4 = 0;
  }
  else if ((param_3 & 1) == 0) {
    uVar4 = 1;
    FUN_029a02c4(plVar2,1);
    puVar1 = PTR_DAT_047d8b70;
    if (*plVar2 != 0) {
      puVar1 = (undefined *)(*plVar2 + 0x30);
    }
    FUN_029a07c8(param_1 + 8,puVar1);
  }
  else {
    uVar4 = 1;
    *(undefined1 *)((long)plVar2 + 0x11) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return uVar4;
}


