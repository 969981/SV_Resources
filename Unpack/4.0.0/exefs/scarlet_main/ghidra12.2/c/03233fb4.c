/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03233fb4; name: FUN_03233fb4
 */


void FUN_03233fb4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047e6010 + 0x10);
  if (*(char *)((long)param_1 + 0x174) != '\0') {
    if (0 < (int)param_1[4]) {
      iVar4 = 0;
      do {
        nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x29));
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1[4]);
    }
    *(undefined1 *)((long)param_1 + 0x174) = 0;
  }
  param_1[0x27] = 0;
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1[0x28] + 0x380) = 0;
    param_1[0x28] = 0;
  }
  if (0 < (int)*(uint *)(param_1 + 4)) {
    lVar3 = 0;
    lVar5 = (ulong)*(uint *)(param_1 + 4) * 8;
    do {
      lVar2 = *(long *)(param_1[3] + lVar3);
      *(undefined1 *)(lVar2 + 0x18) = 1;
      nn::os::ReleaseSemaphore((SemaphoreType *)(lVar2 + 0x20),1);
      puVar1 = PTR_DAT_047d1a08;
      lVar3 = lVar3 + 8;
    } while (lVar5 != lVar3);
    lVar3 = 0;
    do {
      lVar2 = *(long *)(param_1[3] + lVar3);
      if (lVar2 != 0) {
        if (*(long **)(lVar2 + 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar2 + 0x58) + 8))();
        }
        nn::os::FinalizeSemaphore((SemaphoreType *)(lVar2 + 0x20));
        (**(code **)(puVar1 + 8))(0,lVar2,0);
      }
      lVar3 = lVar3 + 8;
    } while (lVar5 != lVar3);
  }
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x29));
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 3);
  }
  param_1[3] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


