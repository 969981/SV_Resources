/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213379c; name: thunk_FUN_021337a0
 */


bool thunk_FUN_021337a0(void)

{
  ushort uVar1;
  undefined1 auStack_4 [4];
  
  auStack_4[0] = 1;
  FUN_02133818("main.simple_demo.SimpleDemoUtil","CFunc_Tml_IsStartRemember",auStack_4);
  uVar1 = FUN_0213393c("main.simple_demo.SimpleDemoUtil","CFunc_Tml_IstmlPause");
  if (0xff < uVar1) {
    FUN_0212f80c("main.simple_demo.SimpleDemoUtil","CFunc_Tml_ResetFlag");
  }
  return 0xff < uVar1;
}


