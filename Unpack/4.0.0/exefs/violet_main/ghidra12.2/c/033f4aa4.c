/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f4aa4; name: FUN_033f4aa4
 */


undefined8 FUN_033f4aa4(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  iVar8 = 0;
  if (*(uint *)(param_1 + 0x194) != 0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                      (*(long **)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x194) * 0x18,
                       "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkHarmonizer/AkHarmonizerFX.cpp"
                       ,0xb8);
    *(long *)(param_1 + 0xe8) = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    uVar5 = (ulong)*(uint *)(param_1 + 0x194);
    iVar8 = 0;
    if (*(uint *)(param_1 + 0x194) != 0) {
      lVar6 = 0;
      uVar7 = 1;
      while( true ) {
        if (lVar2 != 0) {
          puVar1 = (undefined4 *)(lVar2 + lVar6);
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          uVar5 = (ulong)*(uint *)(param_1 + 0x194);
        }
        iVar8 = (int)uVar5;
        if (uVar5 <= uVar7) break;
        lVar2 = *(long *)(param_1 + 0xe8);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
      }
    }
  }
  if (((*(char *)(param_1 + 0x139) != '\0') && (*(char *)(param_1 + 0x19c) != '\0')) && (iVar8 != 0)
     ) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x134) & 0xfffffffc;
    lVar2 = 0;
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xe8);
      plVar3 = *(long **)(param_1 + 0x10);
      iVar8 = (int)uVar7;
      *(int *)(lVar6 + lVar2) = iVar8;
      if (iVar8 != 0) {
        lVar4 = (**(code **)(*plVar3 + 0x10))
                          (plVar3,uVar7 << 2,
                           "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/Common/DelayLineLight.cpp"
                           ,0x1c);
        *(long *)(lVar6 + lVar2 + 8) = lVar4;
        if (lVar4 == 0) {
          return 0x34;
        }
      }
      lVar6 = lVar6 + lVar2;
      lVar2 = lVar2 + 0x18;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x194));
  }
  return 1;
}


