/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155e1a8; name: FUN_0155e1a8
 */


undefined4 FUN_0155e1a8(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  if (**(char **)(param_1 + 0x238) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x60))
                      (*(long **)(param_1 + 200),param_1 + 0x130);
    fVar6 = (float)*(undefined8 *)(param_1 + 0x2f0) + (float)uVar7;
    bVar1 = (float)((ulong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20) - (float)((ulong)uVar7 >> 0x20)
            < -540.0;
    uVar4 = 3;
    if (bVar1) {
      uVar4 = 1;
    }
    bVar2 = true;
    bVar3 = false;
    if (bVar1) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6)) {
        bVar2 = fVar6 < 960.0;
        bVar3 = false;
      }
    }
    uVar5 = 0;
    if (bVar2 != bVar3) {
      uVar5 = 2;
    }
    if (fVar6 < 960.0) {
      uVar5 = uVar4;
    }
  }
  return uVar5;
}


