/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00810740; name: _INIT_91
 */


void _INIT_91(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_047d15f8;
  DAT_047fb4e8 = PTR_DAT_047d15f8 + 0x68;
  DAT_047fb4c8 = PTR_DAT_047d15f8 + 0x10;
  DAT_047fb4d0 = &DAT_047fb4f0;
  DAT_047fb4d8._0_4_ = 0x200;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 3;
    *(undefined2 *)((long)&DAT_047fb4f0 + lVar3) = 0;
    (&DAT_047fb4f2)[lVar3] = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x201);
  DAT_047fb4d8._4_4_ = 0;
  DAT_047fb4e0 = 0;
  FUN_00100190(PTR_LAB_047d1870,&DAT_047fb4c8,&PTR_LOOP_04483000);
  DAT_047fb6f8 = puVar2 + 0x10;
  DAT_047fb718 = puVar2 + 0x68;
  DAT_047fb700 = &DAT_047fb720;
  DAT_047fb708._0_4_ = 0x200;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 3;
    *(undefined2 *)((long)&DAT_047fb720 + lVar3) = 0;
    (&DAT_047fb722)[lVar3] = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x201);
  DAT_047fb708._4_4_ = 0;
  DAT_047fb710 = 0;
  FUN_00100190(PTR_LAB_047d1870,&DAT_047fb6f8,&PTR_LOOP_04483000);
  return;
}


