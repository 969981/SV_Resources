/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00248ab8; name: FUN_00248ab8
 */


void FUN_00248ab8(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  nn::os::AcquireSemaphore((SemaphoreType *)PTR_DAT_047cc120);
  puVar1 = PTR_DAT_047cc128;
  iVar5 = *(int *)PTR_DAT_047cc128;
  if (iVar5 == 0) {
    plVar2 = (long *)FUN_01cf7e20();
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x40,8);
    puVar3[1] = 0;
    uVar4 = FUN_01cf7e20();
    puVar3[2] = uVar4;
    puVar3[3] = 0;
    *puVar3 = puVar3 + 1;
    nn::os::InitializeMutex((MutexType *)(puVar3 + 4),true,0);
    *(undefined8 **)PTR_DAT_047cc130 = puVar3;
    iVar5 = *(int *)puVar1;
  }
  *(int *)puVar1 = iVar5 + 1;
  nn::os::ReleaseSemaphore((SemaphoreType *)PTR_DAT_047cc120);
  return;
}


