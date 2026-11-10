/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f5f50; name: FUN_033f5f50
 */


int FUN_033f5f50(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar3 = FUN_033cb84c();
  if (iVar3 == 1) {
    if (param_3 != 0) {
      lVar4 = (**(code **)(*param_2 + 0x10))
                        (param_2,(ulong)param_3 << 5,
                         "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkResamplingPhaseVocoder.cpp"
                         ,0x36);
      *(long *)(param_1 + 0x40) = lVar4;
      if (lVar4 == 0) {
        return 0x34;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    if (uVar6 != 0) {
      lVar4 = 0;
      uVar7 = 0;
      do {
        if (*(long *)(param_1 + 0x40) != 0) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar4);
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar6 = *(uint *)(param_1 + 0x28);
        }
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + 0x20;
      } while (uVar7 < uVar6);
      if (uVar6 != 0) {
        lVar4 = 0;
        uVar7 = 0;
        do {
          uVar6 = *(uint *)(param_1 + 0x30) + (*(uint *)(param_1 + 0x30) >> 2);
          puVar2 = (uint *)(*(long *)(param_1 + 0x40) + lVar4);
          puVar2[3] = 0;
          *puVar2 = uVar6;
          puVar2[1] = 0;
          puVar2[2] = 0;
          lVar5 = (**(code **)(*param_2 + 0x10))
                            (param_2,(ulong)uVar6 << 2,
                             "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/CircularBuffer.cpp"
                             ,0x1b);
          *(long *)(puVar2 + 4) = lVar5;
          if (lVar5 == 0) {
            return 0x34;
          }
          uVar7 = uVar7 + 1;
          lVar4 = lVar4 + 0x20;
        } while (uVar7 < *(uint *)(param_1 + 0x28));
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}


