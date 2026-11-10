/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317fe88; name: FUN_0317fe88
 */


void FUN_0317fe88(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  void *__dest;
  uint *puVar3;
  void *__src;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  puVar1 = PTR_PTR_047d1a50;
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x50);
      iVar4 = *(int *)(param_1 + 1);
      if (0 < iVar4) {
        pvVar5 = (void *)*param_1;
        __dest = pvVar2;
        __src = pvVar5;
        iVar6 = iVar4;
        do {
          memcpy(__dest,__src,0x40);
          FUN_0317ffac((long)__src + 0x40);
          *(undefined8 *)((long)__dest + 0x40) = *(undefined8 *)((long)__src + 0x40);
          *(undefined4 *)((long)__dest + 0x48) = *(undefined4 *)((long)__src + 0x48);
          *(undefined4 *)((long)__dest + 0x4c) = *(undefined4 *)((long)__src + 0x4c);
          iVar6 = iVar6 + -1;
          *(undefined8 *)((long)__src + 0x40) = 0;
          *(undefined8 *)((long)__src + 0x48) = 0;
          __dest = (void *)((long)__dest + 0x50);
          __src = (void *)((long)__src + 0x50);
        } while (iVar6 != 0);
        puVar3 = (uint *)((long)pvVar5 + 0x4c);
        do {
          puVar3[-1] = 0;
          if ((-1 < (int)*puVar3) && (*(long *)(puVar3 + -3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar3 + -3),(ulong)*puVar3 * 0x108);
          }
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          iVar4 = iVar4 + -1;
          *puVar3 = 0x80000000;
          puVar3 = puVar3 + 0x14;
        } while (iVar4 != 0);
        iVar4 = *(int *)(param_1 + 1);
      }
      *param_1 = pvVar2;
      *(int *)((long)param_1 + 0xc) = iVar4;
    }
  }
  return;
}


