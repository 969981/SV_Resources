/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003736f0; name: FUN_003736f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003736f0(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_20 = DAT_03cd77f8;
  uStack_28 = _UNK_03cd77f0;
  local_30 = _DAT_03cd77e8;
  (*(code *)PTR_FUN_04496940)(&PTR_s_Default_Factory_04496928,&local_30);
  return;
}


