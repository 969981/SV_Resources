/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212df4c; name: FUN_0212df4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0212df4c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined2 local_18;
  undefined1 local_16;
  
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar3;
  fVar4 = (float)*param_1;
  fVar5 = (float)((ulong)*param_1 >> 0x20);
  local_16 = 0;
  local_18 = 0;
  uVar1 = FUN_00d6fedc(CONCAT44(fVar5 + (float)((ulong)_DAT_03cab2e0 >> 0x20),
                                fVar4 + (float)_DAT_03cab2e0),
                       CONCAT44(fVar5 + (float)((ulong)_DAT_03cac060 >> 0x20),
                                fVar4 + (float)_DAT_03cac060),*(undefined8 *)(lVar3 + 0x70),0x60046,
                       param_2,1,&local_18);
  return uVar1 & 1;
}


