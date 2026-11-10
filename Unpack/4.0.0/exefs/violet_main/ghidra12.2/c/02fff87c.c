/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fff87c; name: FUN_02fff87c
 */


void FUN_02fff87c(undefined8 *param_1)

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
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x30);
      uVar3 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar3) {
        __src = (void *)*param_1;
        pvVar2 = pvVar1;
        if (uVar3 != 1) {
          iVar4 = -(uVar3 & 0xfffffffe);
          do {
            memcpy(pvVar2,__src,0x30);
            memcpy((void *)((long)pvVar2 + 0x30),(void *)((long)__src + 0x30),0x30);
            pvVar2 = (void *)((long)pvVar2 + 0x60);
            __src = (void *)((long)__src + 0x60);
            iVar4 = iVar4 + 2;
          } while (iVar4 != 0);
        }
        if ((uVar3 & 1) != 0) {
          memcpy(pvVar2,__src,0x30);
        }
        uVar3 = *(uint *)(param_1 + 1);
      }
      *param_1 = pvVar1;
      *(uint *)((long)param_1 + 0xc) = uVar3;
    }
  }
  return;
}


