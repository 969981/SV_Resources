/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


