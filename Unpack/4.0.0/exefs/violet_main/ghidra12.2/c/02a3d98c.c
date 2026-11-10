/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3d98c; name: FUN_02a3d98c
 */


void FUN_02a3d98c(ulong param_1,long param_2)

{
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("condition","Abort",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/util/assert_api.cpp"
               ,0xe,*(char **)(param_2 + 8));
  }
  return;
}


