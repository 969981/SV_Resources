/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ff288; name: FUN_028ff288
 */


void FUN_028ff288(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte *__s;
  undefined1 *puVar11;
  
  if ((ulong)(*(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138) >> 3) <=
      (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar10 = *(long *)(*(long *)(param_2 + 0x138) + (param_3 & 0xffffffff) * 8);
  lVar8 = *(long *)(lVar10 + 0xb8);
  if ((lVar8 == 0) && (lVar8 = *(long *)(lVar10 + 0xf8), lVar8 == 0)) {
    __s = &DAT_03c886bc;
  }
  else {
    puVar1 = (undefined8 *)PTR_PTR_047d4508;
    if (*(long *)(lVar8 + 0x40) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x40) + 0x38);
    }
    __s = (byte *)*puVar1;
    if (__s == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar5 = PTR_DAT_047d3e30;
      uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
      *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
      param_1[1] = uVar2;
      plVar3 = *(long **)(puVar5 + 0x18);
      param_1[2] = *(undefined8 *)(puVar5 + 0x10);
      param_1[3] = plVar3;
      if (plVar3 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028ff32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  puVar11 = &DAT_cbf29ce484222645;
  sVar7 = strlen((char *)__s);
  bVar4 = *__s;
  pbVar9 = __s;
  while (bVar4 != 0) {
    pbVar9 = pbVar9 + 1;
    puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
    bVar4 = *pbVar9;
  }
  *param_1 = puVar11;
  param_1[1] = __s;
  param_1[2] = sVar7;
  param_1[3] = 0;
  return;
}


