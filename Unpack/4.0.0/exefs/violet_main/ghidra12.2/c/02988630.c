/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988630; name: FUN_02988630
 */


bool FUN_02988630(long param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0298c7a8(*(undefined8 *)(param_1 + 0x20));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x4d,param_2,param_3,param_4);
  }
  return bVar1;
}


