/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d63a08; name: FUN_01d63a08
 */


undefined * FUN_01d63a08(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if ((DAT_048308d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048308d0);
      if (iVar1 != 0) {
        memset(&DAT_048303d0,0,0x500);
        DAT_048305e8 = 0;
        DAT_048305e0 = &DAT_03c886bc;
        DAT_048305d8 = &DAT_cbf29ce484222645;
        DAT_048305f0 = 0;
        DAT_04830618 = &DAT_cbf29ce484222645;
        DAT_048303d8 = &DAT_cbf29ce484222645;
        DAT_048303e0 = &DAT_03c886bc;
        DAT_04830620 = &DAT_03c886bc;
        DAT_04830630 = 0;
        DAT_04830628 = 0;
        DAT_04830658 = &DAT_cbf29ce484222645;
        DAT_04830660 = &DAT_03c886bc;
        DAT_04830670 = 0;
        DAT_04830668 = 0;
        DAT_04830698 = &DAT_cbf29ce484222645;
        DAT_048306a0 = &DAT_03c886bc;
        DAT_048306b0 = 0;
        DAT_048306a8 = 0;
        DAT_048306d8 = &DAT_cbf29ce484222645;
        DAT_048306e0 = &DAT_03c886bc;
        DAT_048306f0 = 0;
        DAT_048306e8 = 0;
        DAT_04830718 = &DAT_cbf29ce484222645;
        DAT_04830720 = &DAT_03c886bc;
        DAT_04830730 = 0;
        DAT_04830728 = 0;
        DAT_04830758 = &DAT_cbf29ce484222645;
        DAT_04830760 = &DAT_03c886bc;
        DAT_04830770 = 0;
        DAT_04830768 = 0;
        DAT_04830798 = &DAT_cbf29ce484222645;
        DAT_048307a0 = &DAT_03c886bc;
        DAT_048307b0 = 0;
        DAT_048307a8 = 0;
        DAT_048307d8 = &DAT_cbf29ce484222645;
        DAT_048307e0 = &DAT_03c886bc;
        DAT_048307f0 = 0;
        DAT_048307e8 = 0;
        DAT_04830818 = &DAT_cbf29ce484222645;
        DAT_04830820 = &DAT_03c886bc;
        DAT_04830830 = 0;
        DAT_04830828 = 0;
        DAT_04830858 = &DAT_cbf29ce484222645;
        DAT_04830860 = &DAT_03c886bc;
        DAT_04830870 = 0;
        DAT_04830868 = 0;
        DAT_04830898 = &DAT_cbf29ce484222645;
        DAT_048308a0 = &DAT_03c886bc;
        DAT_048308b0 = 0;
        DAT_048308a8 = 0;
        DAT_048303e8 = 0;
        DAT_048303f0 = 0;
        DAT_04830418 = &DAT_cbf29ce484222645;
        DAT_04830420 = &DAT_03c886bc;
        DAT_04830428 = 0;
        DAT_04830430 = 0;
        DAT_04830458 = &DAT_cbf29ce484222645;
        DAT_04830460 = &DAT_03c886bc;
        DAT_04830468 = 0;
        DAT_04830470 = 0;
        DAT_04830498 = &DAT_cbf29ce484222645;
        DAT_048304a0 = &DAT_03c886bc;
        DAT_048304a8 = 0;
        DAT_048304b0 = 0;
        DAT_048304d8 = &DAT_cbf29ce484222645;
        DAT_048304e0 = &DAT_03c886bc;
        DAT_048304e8 = 0;
        DAT_048304f0 = 0;
        DAT_04830518 = &DAT_cbf29ce484222645;
        DAT_04830520 = &DAT_03c886bc;
        DAT_04830528 = 0;
        DAT_04830530 = 0;
        DAT_04830558 = &DAT_cbf29ce484222645;
        DAT_04830560 = &DAT_03c886bc;
        DAT_04830568 = 0;
        DAT_04830570 = 0;
        DAT_04830598 = &DAT_cbf29ce484222645;
        DAT_048305a0 = &DAT_03c886bc;
        DAT_048305a8 = 0;
        DAT_048305b0 = 0;
        FUN_00100190(FUN_01d61f44,&DAT_048303d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048308d0);
      }
      puVar2 = &DAT_048303d0;
    }
    else {
      puVar2 = &DAT_048303d0;
    }
  }
  return puVar2;
}


