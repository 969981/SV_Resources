/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317edf0; name: FUN_0317edf0
 */


void FUN_0317edf0(undefined8 *param_1)

{
  void *pvVar1;
  void *__src;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      pvVar1 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0xc4);
      uVar3 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar3) {
        __src = (void *)*param_1;
        pvVar2 = pvVar1;
        if (uVar3 != 1) {
          iVar4 = -(uVar3 & 0xfffffffe);
          do {
            memcpy(pvVar2,__src,0xc4);
            memcpy((void *)((long)pvVar2 + 0xc4),(void *)((long)__src + 0xc4),0xc4);
            pvVar2 = (void *)((long)pvVar2 + 0x188);
            __src = (void *)((long)__src + 0x188);
            iVar4 = iVar4 + 2;
          } while (iVar4 != 0);
        }
        if ((uVar3 & 1) != 0) {
          memcpy(pvVar2,__src,0xc4);
        }
        uVar3 = *(uint *)(param_1 + 1);
      }
      *param_1 = pvVar1;
      *(uint *)((long)param_1 + 0xc) = uVar3;
    }
  }
  return;
}


