/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121490; name: FUN_00121490
 */


bool FUN_00121490(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  
  iVar4 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x38);
  uVar8 = param_1 + 0x73U & 0xfffffffffffffff8;
  *(undefined4 *)(uVar8 + 0x5c) = 0;
  iVar3 = DAT_04483110;
  *(undefined4 *)(uVar8 + 0x38) = 0;
  *(undefined4 *)(uVar8 + 0x60) = 0;
  uVar7 = (((iVar4 * iVar2 * 2 & 0x1ffffffeU) * iVar3) / 4000 + 0x1f & 0x3fffe0) + 0x3f & 0x7fffc0;
  uVar1 = *(uint *)(uVar8 + 0x50);
  if (uVar7 * 2 <= *(uint *)(uVar8 + 0x50)) {
    uVar1 = uVar7 * 2;
  }
  *(undefined4 *)(uVar8 + 0x48) = 0;
  *(uint *)(uVar8 + 0x4c) = uVar1;
  *(uint *)(uVar8 + 0x54) = uVar7;
  *(undefined8 *)(uVar8 + 0x40) = 0xffffffffffffffff;
  if (*(long *)(uVar8 + 0x28) == 0) {
    lVar5 = FUN_0011f570((uVar7 * 4 + 0xfff | 0xfff) + 0xfff & 0x7fff000 | 0x100);
    *(long *)(uVar8 + 0x20) = lVar5;
    if (lVar5 == 0) {
      return false;
    }
    uVar7 = *(uint *)(uVar8 + 0x54);
  }
  else {
    lVar5 = *(long *)(uVar8 + 0x20);
  }
  pvVar6 = (void *)(lVar5 + 0xfffU & 0xfffffffffffff000);
  *(void **)(uVar8 + 0x28) = pvVar6;
  nn::audio::AcquireMemoryPool
            ((AudioRendererConfig *)&DAT_047eca58,(MemoryPoolType *)(uVar8 + 0x18),pvVar6,
             (ulong)(uVar7 << 2) + 0xfff & 0x1fffff000);
  nn::audio::RequestAttachMemoryPool((MemoryPoolType *)(uVar8 + 0x18));
  *(ulong *)(uVar8 + 0x10) =
       *(long *)(uVar8 + 0x28) + ((ulong)(uint)(*(int *)(uVar8 + 0x54) << 2) + 0xfff & 0x1fffff000);
  FUN_001209d0(&DAT_047ecc40);
  nn::audio::AcquireVoiceSlot
            (&DAT_047eca58,(VoiceType *)(uVar8 + 8),*(undefined4 *)(param_1 + 0x34),
             *(undefined4 *)(param_1 + 0x38),2,0,0,0);
  nn::audio::SetVoiceDestination
            ((AudioRendererConfig *)&DAT_047eca58,(VoiceType *)(uVar8 + 8),
             (FinalMixType *)&DAT_047eca10);
  *(undefined4 *)(uVar8 + 0x5c) = 1;
  FUN_00121720(param_1,0);
  FUN_001218f0(param_1,0);
  iVar4 = nn::audio::RequestUpdateAudioRenderer(DAT_047ec9c0,DAT_047ec9c8,&DAT_047eca58);
  if (iVar4 == 0) {
    FUN_00120750(&DAT_047ecc40);
  }
  else {
    FUN_00121830(param_1);
    FUN_00120750(&DAT_047ecc40);
    FUN_0011f610(*(undefined8 *)(uVar8 + 0x20));
    *(undefined8 *)(uVar8 + 0x20) = 0;
  }
  return iVar4 == 0;
}


