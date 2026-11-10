/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d4410; name: FUN_008d4410
 */


void FUN_008d4410(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_047d2548;
  if ((param_2 & 1) == 0) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047d2548);
    puVar3 = PTR_DAT_047d2550;
    iVar1 = *(int *)PTR_DAT_047d2550;
    *(undefined8 *)(*(long *)PTR_DAT_047d2558 + (long)iVar1 * 8) = param_1;
    *(int *)puVar3 = iVar1 + 1;
    nn::os::UnlockMutex((MutexType *)puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008d4444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_047d2540 + 0x18))(*(long **)PTR_DAT_047d2540,param_1);
  return;
}


