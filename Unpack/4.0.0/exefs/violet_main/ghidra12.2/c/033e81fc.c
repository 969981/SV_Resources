/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e81fc; name: FUN_033e81fc
 */


undefined8 FUN_033e81fc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x30) & 0xff;
  lVar2 = *(long *)(param_1 + 0x18);
  iVar4 = (int)uVar5;
  *(int *)(param_1 + 0x38) = iVar4;
  if (((*(uint *)(param_1 + 0x30) >> 0xf & 1) != 0) && (*(char *)(lVar2 + 0x20) == '\0')) {
    iVar4 = iVar4 + -1;
    *(int *)(param_1 + 0x38) = iVar4;
  }
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
  if (*(char *)(lVar2 + 0x21) != '\0') {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x3c) = iVar4;
  fVar7 = *(float *)(lVar2 + 0x1c) * fVar7;
  uVar6 = (uint)fVar7;
  *(uint *)(param_1 + 0x40) = uVar6;
  fVar7 = expf(-4.4 / (float)(int)fVar7);
  *(float *)(param_1 + 0x68) = fVar7;
  lVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (*(long **)(param_1 + 0x20),uVar5 * uVar6 * 4,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkPeakLimiter/AkPeakLimiterFX.cpp"
                     ,0xf6);
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar2 == 0) {
LAB_033e834c:
    uVar1 = 0x34;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(char *)(lVar2 + 0x21) == '\0') || (*(int *)(param_1 + 0x38) == 1)) {
      puVar3 = &LAB_033e8b94;
    }
    else {
      puVar3 = &LAB_033e90ac;
      if ((*(char *)(param_1 + 0x31) < '\0') &&
         (puVar3 = &LAB_033e9708, *(char *)(lVar2 + 0x20) != '\0')) {
        puVar3 = &LAB_033e90ac;
      }
    }
    *(undefined1 **)(param_1 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(uint *)(param_1 + 0x3c) != 0) {
      lVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                        (*(long **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x3c) << 4,
                         "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkPeakLimiter/AkPeakLimiterFX.cpp"
                         ,0x10c);
      *(long *)(param_1 + 0x48) = lVar2;
      if (lVar2 == 0) goto LAB_033e834c;
      lVar2 = *(long *)(param_1 + 0x18);
    }
    uVar1 = 1;
    *(undefined1 *)(lVar2 + 0x22) = 0;
  }
  return uVar1;
}


