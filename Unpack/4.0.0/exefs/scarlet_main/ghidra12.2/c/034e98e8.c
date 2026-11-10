/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e98e8; name: FUN_034e98e8
 */


undefined8 FUN_034e98e8(uint *param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = param_3 + 1U;
  puVar2 = PTR_DAT_047e2fd0;
  uVar1 = (param_3 + 1U) * 2;
  if (uVar1 != 0) {
    lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 2) = lVar3;
    if (lVar3 != 0) {
      param_1[5] = uVar1;
    }
  }
  uVar1 = *param_1 << 1;
  if (uVar1 != 0) {
    lVar3 = (**(code **)(puVar2 + 0x10))(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 6) = lVar3;
    if (lVar3 != 0) {
      param_1[9] = uVar1;
    }
  }
  uVar1 = *param_1 << 1;
  if (uVar1 != 0) {
    lVar3 = (**(code **)(puVar2 + 0x10))(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 10) = lVar3;
    if (lVar3 != 0) {
      param_1[0xd] = uVar1;
    }
  }
  uVar1 = *param_1 << 1;
  if (uVar1 != 0) {
    lVar3 = (**(code **)(puVar2 + 0x10))(5,(ulong)uVar1 * 0x18);
    *(long *)(param_1 + 0xe) = lVar3;
    if (lVar3 != 0) {
      param_1[0x11] = uVar1;
    }
  }
  uVar4 = (**(code **)(*param_2 + 0x10))
                    (param_2,(ulong)*param_1 * 0xc,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/AkAudiolib/Common/AkVBAP.cpp"
                     ,0x188);
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x10))
                    (param_2,(ulong)*param_1 << 3,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/AkAudiolib/Common/AkVBAP.cpp"
                     ,0x189);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  lVar3 = (**(code **)(*param_2 + 0x10))
                    (param_2,(ulong)*param_1 << 3,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/AkAudiolib/Common/AkVBAP.cpp"
                     ,0x18a);
  *(long *)(param_1 + 0x16) = lVar3;
  if (((*(long *)(param_1 + 0x12) == 0) || (lVar3 == 0)) || (*(long *)(param_1 + 0x14) == 0)) {
    FUN_034e9a70(param_1,param_2);
    uVar4 = 0x34;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


