/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a64b68; name: FUN_00a64b68
 */


void FUN_00a64b68(ushort *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if ((param_2 & 0xff) < 0x20) {
    uVar2 = *param_1;
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar6 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar6;
    plVar1 = *(long **)(lVar6 + 0x1c8);
    plVar3 = *(long **)(lVar6 + 0x1c0);
    do {
      if (plVar3 == plVar1) {
        return;
      }
      lVar6 = *plVar3;
      uVar5 = FUN_00a669dc(lVar6 + 0x28);
      plVar3 = plVar3 + 1;
    } while ((uVar5 & 1) == 0);
    if (uVar2 < 0x402) {
      lVar6 = lVar6 + 0x28 + (ulong)uVar2 * 0x20;
      *(uint *)(lVar6 + 0x24) = *(uint *)(lVar6 + 0x24) | 1 << (ulong)(param_2 & 0x1f);
    }
  }
  return;
}


