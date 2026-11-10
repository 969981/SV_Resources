/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03200094; name: FUN_03200094
 */


void FUN_03200094(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  void *__dest;
  long *__src;
  int iVar4;
  int iVar5;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x38);
      iVar4 = *(int *)(param_1 + 1);
      if (0 < iVar4) {
        plVar3 = (long *)*param_1;
        puVar1 = PTR_DAT_047e5a20 + 0x10;
        __dest = pvVar2;
        __src = plVar3;
        iVar5 = iVar4;
        do {
          memcpy(__dest,__src,0x38);
          *(undefined1 *)(__src + 1) = 0;
          __dest = (void *)((long)__dest + 0x38);
          iVar5 = iVar5 + -1;
          *(undefined4 *)((long)__src + 10) = 0;
          __src[2] = 0;
          *__src = (long)puVar1;
          __src = __src + 7;
        } while (iVar5 != 0);
        do {
          (**(code **)(*plVar3 + 8))(plVar3);
          iVar4 = iVar4 + -1;
          plVar3 = plVar3 + 7;
        } while (iVar4 != 0);
        iVar4 = *(int *)(param_1 + 1);
      }
      *param_1 = pvVar2;
      *(int *)((long)param_1 + 0xc) = iVar4;
    }
  }
  return;
}


