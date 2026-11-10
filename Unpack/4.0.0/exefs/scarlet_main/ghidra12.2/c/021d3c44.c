/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d3c44; name: FUN_021d3c44
 */


void FUN_021d3c44(long param_1)

{
  if (*(char *)(param_1 + 0x7c6) == '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_isDestroyed","OnZeroReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_object.cpp"
               ,0x156);
  }
  if (*(char *)(param_1 + 0x7c5) == '\0') {
    FUN_00e5fbe0();
    return;
  }
  return;
}


