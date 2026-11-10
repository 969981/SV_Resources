/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d10e4; name: FUN_029d10e4
 */


void FUN_029d10e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(long **)(param_1 + 0x80) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x70))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0xb0))
              (*(long **)(param_1 + 0x80),param_2,param_3,param_1);
  }
  for (lVar2 = *(long *)(param_1 + 0x50); lVar2 != param_1 + 0x48; lVar2 = *(long *)(lVar2 + 8)) {
    uVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0xe0))();
    if ((uVar1 & 1) != 0) {
      FUN_029d1180(*(undefined8 *)(lVar2 + 0x10),param_2,param_3);
    }
  }
  return;
}


