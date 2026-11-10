/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc63b4; name: FUN_01dc63b4
 */


void FUN_01dc63b4(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  void *__dest;
  ulong uVar1;
  void *__src;
  long *plVar2;
  void *__src_00;
  long lVar3;
  uint local_68;
  uint uStack_64;
  uint local_48;
  uint uStack_44;
  
  if (0x20 < param_2) {
    return;
  }
  if (0x1d < param_3) {
    return;
  }
  if (0x20 < param_4) {
    return;
  }
  if (0x1d < param_5) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x9d0);
  __dest = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x158,8);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("tmp","SwapPokemon",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/game_data/savedata_accessor/box_pokemon_savedata_accessor.cpp"
               ,0x1a9);
  }
  __src_00 = (void *)(lVar3 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158);
  __src = (void *)(lVar3 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158);
  memcpy(__dest,__src_00,0x158);
  memcpy(__src_00,__src,0x158);
  memcpy(__src,__dest,0x158);
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,__dest,0x158,8);
  }
  else {
    FUN_00c48fe8(plVar2,__dest,0x158,8);
  }
  local_68 = param_4;
  uStack_64 = param_5;
  local_48 = param_2;
  uStack_44 = param_3;
  FUN_020ea9a4(param_1 + 0x40,&local_48,&local_68);
  return;
}


