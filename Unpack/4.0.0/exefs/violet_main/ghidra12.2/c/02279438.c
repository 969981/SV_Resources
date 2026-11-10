/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02279438; name: FUN_02279438
 */


long FUN_02279438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_48;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_48 = *(long *)(param_1 + 0xf8) + lVar2;
      uVar1 = FUN_02279fd4(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar2),&local_48,
                           param_2,param_3,param_4);
      if ((uVar1 & 1) == 0) break;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(ulong *)(param_1 + 0x130));
  }
  return param_1 + 0xb8;
}


