/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a4f8c; name: FUN_004a4f8c
 */


long FUN_004a4f8c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong *puVar5;
  long extraout_x1;
  long extraout_x1_00;
  long lVar6;
  undefined *local_88;
  undefined *local_80;
  undefined ***local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  
  if (*(int *)(param_2 + 0x7c) != 0) {
    iVar4 = FUN_004a2370(*(undefined8 *)(param_1 + 0x20),param_1);
    if ((((iVar4 == 2) && (extraout_x1 != 0)) && (*(char *)(extraout_x1 + 0x43) != '\0')) &&
       (*(long *)(extraout_x1 + 0x50) == param_2)) {
      return extraout_x1;
    }
    if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
      iVar4 = FUN_004a2370(*(undefined8 *)(param_1 + 0x20),param_1,param_3);
      puVar3 = PTR_LAB_047cd728;
      if (extraout_x1_00 == 0) {
        return 0;
      }
      if (iVar4 != 1) {
        return 0;
      }
      uVar2 = *(uint *)(extraout_x1_00 + 0x80);
      if (0 < (int)uVar2) {
        lVar6 = 0;
        do {
          puVar1 = (undefined *)(*(long *)(extraout_x1_00 + 0x50) + lVar6);
          if (*(long *)(puVar1 + 0x50) == param_2) {
            puVar5 = *(ulong **)(puVar1 + 0x30);
            if ((puVar5 != (ulong *)0x0) &&
               (local_80 = puVar3, local_88 = puVar1, *puVar5 != 0xffffffffffffffff)) {
              local_78 = &local_70;
              local_70 = &local_80;
              ppuStack_68 = &local_88;
              std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004c0750);
            }
            if ((*(int *)(puVar1 + 0x38) == 0xb) && (*(int *)(puVar1 + 0x3c) == 1)) {
              puVar5 = *(ulong **)(puVar1 + 0x30);
              if ((puVar5 != (ulong *)0x0) && (*puVar5 != 0xffffffffffffffff)) {
                local_70 = (undefined **)puVar3;
                local_80 = puVar1;
                local_78 = &local_70;
                ppuStack_68 = &local_80;
                std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004c9500);
              }
              if (*(long *)(puVar1 + 0x68) == extraout_x1_00) {
                return (long)puVar1;
              }
            }
          }
          lVar6 = lVar6 + 0x98;
        } while ((ulong)uVar2 * 0x98 != lVar6);
      }
    }
  }
  return 0;
}


