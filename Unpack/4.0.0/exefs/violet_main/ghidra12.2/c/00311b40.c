/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00311b40; name: FUN_00311b40
 */


void FUN_00311b40(ulong param_1)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)(param_1 & 0xfffffffffffffffc);
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  uStack_28 = puVar2[3];
  uStack_30 = puVar2[2];
  __ptr = (void *)FUN_00366f90(&local_40);
  iVar1 = FUN_003748a0(puVar2);
  if (iVar1 == 0) {
    uStack_58 = puVar2[5];
    local_60 = puVar2[4];
    uStack_48 = puVar2[7];
    uStack_50 = puVar2[6];
    __ptr_00 = (void *)FUN_00366f90(&local_60);
  }
  else {
    __ptr_00 = (void *)FUN_0036a0b0(puVar2 + 4,1);
  }
  free(__ptr);
  free(__ptr_00);
  return;
}


