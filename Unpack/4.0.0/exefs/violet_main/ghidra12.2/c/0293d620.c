/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d620; name: FUN_0293d620
 */


void FUN_0293d620(long param_1,undefined4 param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  uVar1 = FUN_0107bb74(*(undefined8 *)(param_1 + 0x48));
  lVar2 = FUN_014df9d4(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  if (lVar2 != 0) {
    FUN_021050a8();
  }
  return;
}


