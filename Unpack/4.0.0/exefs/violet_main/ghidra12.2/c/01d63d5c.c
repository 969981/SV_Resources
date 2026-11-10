/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d63d5c; name: FUN_01d63d5c
 */


undefined8 * FUN_01d63d5c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04830b88 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04830b88);
      if (iVar1 != 0) {
        DAT_04830b20 = 0;
        DAT_04830b10 = &DAT_03c886bc;
        DAT_04830b08 = &DAT_cbf29ce484222645;
        DAT_04830b18 = 0;
        DAT_04830b28 = &DAT_cbf29ce484222645;
        DAT_04830908 = &DAT_cbf29ce484222645;
        DAT_04830910 = &DAT_03c886bc;
        DAT_04830b30 = &DAT_03c886bc;
        DAT_04830b40 = 0;
        DAT_04830b38 = 0;
        DAT_04830b48 = &DAT_cbf29ce484222645;
        DAT_04830b50 = &DAT_03c886bc;
        DAT_04830b60 = 0;
        DAT_04830b58 = 0;
        DAT_04830b68 = &DAT_cbf29ce484222645;
        DAT_04830b70 = &DAT_03c886bc;
        DAT_04830b80 = 0;
        DAT_04830b78 = 0;
        DAT_04830918 = 0;
        DAT_04830920 = 0;
        DAT_04830928 = &DAT_cbf29ce484222645;
        DAT_04830930 = &DAT_03c886bc;
        DAT_04830938 = 0;
        DAT_04830940 = 0;
        DAT_04830948 = &DAT_cbf29ce484222645;
        DAT_04830950 = &DAT_03c886bc;
        DAT_04830958 = 0;
        DAT_04830960 = 0;
        DAT_04830968 = &DAT_cbf29ce484222645;
        DAT_04830970 = &DAT_03c886bc;
        DAT_04830978 = 0;
        DAT_04830980 = 0;
        DAT_04830988 = &DAT_cbf29ce484222645;
        DAT_04830990 = &DAT_03c886bc;
        DAT_04830998 = 0;
        DAT_048309a0 = 0;
        DAT_048309a8 = &DAT_cbf29ce484222645;
        DAT_048309b0 = &DAT_03c886bc;
        DAT_048309b8 = 0;
        DAT_048309c0 = 0;
        DAT_048309c8 = &DAT_cbf29ce484222645;
        DAT_048309d0 = &DAT_03c886bc;
        DAT_048309d8 = 0;
        DAT_048309e0 = 0;
        DAT_048309e8 = &DAT_cbf29ce484222645;
        DAT_048309f0 = &DAT_03c886bc;
        DAT_048309f8 = 0;
        DAT_04830a00 = 0;
        DAT_04830a08 = &DAT_cbf29ce484222645;
        DAT_04830a10 = &DAT_03c886bc;
        DAT_04830a18 = 0;
        DAT_04830a20 = 0;
        DAT_04830a28 = &DAT_cbf29ce484222645;
        DAT_04830a30 = &DAT_03c886bc;
        DAT_04830a38 = 0;
        DAT_04830a40 = 0;
        DAT_04830a48 = &DAT_cbf29ce484222645;
        DAT_04830a50 = &DAT_03c886bc;
        DAT_04830a58 = 0;
        DAT_04830a60 = 0;
        DAT_04830a68 = &DAT_cbf29ce484222645;
        DAT_04830a70 = &DAT_03c886bc;
        DAT_04830a78 = 0;
        DAT_04830a80 = 0;
        DAT_04830a88 = &DAT_cbf29ce484222645;
        DAT_04830a90 = &DAT_03c886bc;
        DAT_04830a98 = 0;
        DAT_04830aa0 = 0;
        DAT_04830aa8 = &DAT_cbf29ce484222645;
        DAT_04830ab0 = &DAT_03c886bc;
        DAT_04830ab8 = 0;
        DAT_04830ac0 = 0;
        DAT_04830ac8 = &DAT_cbf29ce484222645;
        DAT_04830ad0 = &DAT_03c886bc;
        DAT_04830ad8 = 0;
        DAT_04830ae0 = 0;
        DAT_04830ae8 = &DAT_cbf29ce484222645;
        DAT_04830af0 = &DAT_03c886bc;
        DAT_04830af8 = 0;
        DAT_04830b00 = 0;
        FUN_00100190(FUN_01d48234,&DAT_04830908,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04830b88);
      }
      puVar2 = &DAT_04830908;
    }
    else {
      puVar2 = &DAT_04830908;
    }
  }
  return puVar2;
}


