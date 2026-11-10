/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de1fd8; name: FUN_01de1fd8
 */


void FUN_01de1fd8(long param_1,uint param_2,uint param_3,long *param_4)

{
  void *__dest;
  ulong uVar1;
  void *__src;
  long lVar2;
  void *__src_00;
  
  if ((0x20 < param_2) || (0x20 < param_3)) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x9d0);
  __dest = (void *)(**(code **)(*param_4 + 0x10))(param_4,0x2850,8);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("tmp","SwapTray",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/game_data/savedata_accessor/box_pokemon_savedata_accessor.cpp"
               ,0x1c2);
  }
  __src = (void *)(lVar2 + (ulong)param_2 * 0x2850);
  memcpy(__dest,__src,0x2850);
  __src_00 = (void *)(lVar2 + (ulong)param_3 * 0x2850);
  memcpy(__src,__src_00,0x2850);
  memcpy(__src_00,__dest,0x2850);
  uVar1 = (**(code **)(*param_4 + 0xf8))(param_4);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(param_4,__dest,0x2850,8);
      goto LAB_01de209c;
    }
  }
  (**(code **)(*param_4 + 0x18))(param_4,__dest,0x2850,8);
LAB_01de209c:
  FUN_020eaaac(param_1 + 0x40,param_2,param_3);
  return;
}


