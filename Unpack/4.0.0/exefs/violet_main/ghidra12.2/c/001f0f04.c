/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f0f04; name: FUN_001f0f04
 */


undefined8 FUN_001f0f04(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  long local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = 0;
  local_38 = param_1;
  local_28 = param_2;
  uStack_24 = param_3;
  FUN_001f8ecc(param_1,&LAB_001f3e8c,&local_38);
  lVar2 = local_30;
  do {
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x98) = 0;
    uVar1 = FUN_001eea24(param_1,*(undefined4 *)(lVar2 + 0xb8),7);
    lVar2 = lVar3;
  } while (-0x385 < (int)uVar1);
  while (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x98);
    *(undefined8 *)(lVar3 + 0x98) = 0;
    lVar3 = lVar2;
  }
  return uVar1;
}


