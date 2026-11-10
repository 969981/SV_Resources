/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4189c; name: FUN_00f4189c
 */


undefined8 FUN_00f4189c(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  int local_28 [4];
  undefined8 local_18;
  
  if (*param_2 == 0) {
    return 0;
  }
  if (*(short *)(*param_2 + 0x1a) == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  if (*(short *)(*param_2 + 0x1a) == 0) {
    return 0;
  }
  puVar3 = *(ushort **)(param_1 + 0x4058);
  puVar4 = *(ushort **)(param_1 + 0x4060);
  if (puVar3 != puVar4) {
    do {
      if (((*(long *)(puVar3 + 4) != 0) && (*(short *)(*(long *)(puVar3 + 4) + 0x1a) != 0)) &&
         (*(long *)(puVar3 + 4) == *param_2)) goto LAB_00f41930;
      puVar3 = puVar3 + 0x58;
    } while (puVar4 != puVar3);
    puVar3 = puVar4;
LAB_00f41930:
    if (puVar3 != *(ushort **)(param_1 + 0x4060)) goto LAB_00f41990;
  }
  puVar3 = *(ushort **)(param_1 + 0x4090);
  puVar4 = *(ushort **)(param_1 + 0x4098);
  if (puVar3 == puVar4) {
    return 0;
  }
  do {
    if (((*(long *)(puVar3 + 4) != 0) && (*(short *)(*(long *)(puVar3 + 4) + 0x1a) != 0)) &&
       (*(long *)(puVar3 + 4) == *param_2)) goto LAB_00f41984;
    puVar3 = puVar3 + 0xe4;
  } while (puVar4 != puVar3);
  puVar3 = puVar4;
LAB_00f41984:
  if (puVar3 == *(ushort **)(param_1 + 0x4098)) {
    return 0;
  }
LAB_00f41990:
  uVar1 = *puVar3;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x70) != 0)) {
    if (*(long *)PTR_DAT_047d0860 == 0) {
      return 0;
    }
    if ((uVar1 & 3) < DAT_045dfcb0) {
      local_18 = 0;
      FUN_00da4118(local_28,*(long *)PTR_DAT_047d0860,&local_18);
      if (local_28[0] != 0) {
        local_18 = 0;
      }
      return local_18;
    }
  }
  return 0;
}


