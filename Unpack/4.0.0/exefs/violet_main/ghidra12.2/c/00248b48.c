/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00248b48; name: FUN_00248b48
 */


void FUN_00248b48(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  nn::os::AcquireSemaphore((SemaphoreType *)PTR_DAT_047cc120);
  iVar1 = *(int *)PTR_DAT_047cc128;
  *(int *)PTR_DAT_047cc128 = iVar1 + -1;
  puVar2 = PTR_DAT_047cc130;
  if (iVar1 + -1 == 0) {
    FUN_00248bd8(*(undefined8 *)PTR_DAT_047cc130);
    plVar3 = (long *)FUN_01cf7e20();
    lVar4 = *(long *)puVar2;
    nn::os::FinalizeMutex((MutexType *)(lVar4 + 0x20));
    FUN_027bee38(lVar4,*(undefined8 *)(lVar4 + 8));
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,0x40,8);
    *(undefined8 *)puVar2 = 0;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)PTR_DAT_047cc120);
  return;
}


