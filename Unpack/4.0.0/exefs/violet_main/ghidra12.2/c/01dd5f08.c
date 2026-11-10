/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd5f08; name: FUN_01dd5f08
 */


void FUN_01dd5f08(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01195854();
  uVar2 = FUN_0196c644(*param_2);
  FUN_01dd5f58(lVar1,uVar2,*(undefined1 *)(lVar1 + 0x570));
  FUN_014e7bf0(param_1,*(undefined1 *)(lVar1 + 0x570));
  return;
}


