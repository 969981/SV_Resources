/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f719c; name: FUN_020f719c
 */


void FUN_020f719c(long param_1,long *param_2)

{
  if (7 < *(ushort *)(*param_2 + 0x52)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","SetDownloadCode",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/battle/rental_team/rental_team_client.cpp"
               ,0x30);
  }
  FUN_01e74ef0(param_1 + 0x847,7,*(undefined8 *)(*param_2 + 0x30));
  return;
}


