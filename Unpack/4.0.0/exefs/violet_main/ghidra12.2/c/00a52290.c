/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a52290; name: FUN_00a52290
 */


void FUN_00a52290(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if ((*PTR_DAT_047d89f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d89f8);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar3;
  uVar1 = *(byte *)(lVar3 + 0x2c) - 1;
  if ((9 < uVar1) || ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","GetLanguageFolderName",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/pokedex_data_manager.cpp"
               ,0xada,"out of range langID[%d]");
  }
  FUN_00ddaef8(param_1,(&PTR_DAT_04541030)[(char)uVar1],0);
  return;
}


