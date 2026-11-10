/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001218f0; name: FUN_001218f0
 */


void FUN_001218f0(long param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  
  uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
  FUN_001209d0(&DAT_047ecc40);
  if ((*(int *)(uVar3 + 0x5c) != 0) && (*(int *)(uVar3 + 100) != 0)) {
    lVar2 = 0;
    pfVar4 = (float *)(uVar3 + 0x6c);
    do {
      bVar1 = *(int *)(param_1 + 0x38) != 2;
      if (bVar1) {
        fVar5 = *(float *)(uVar3 + 0x68 + lVar2 * 4);
      }
      else {
        nn::audio::SetVoiceMixVolume
                  ((VoiceType *)(uVar3 + 8),(FinalMixType *)&DAT_047eca10,pfVar4[-1],0,(int)lVar2);
        fVar5 = *pfVar4;
      }
      nn::audio::SetVoiceMixVolume
                ((VoiceType *)(uVar3 + 8),(FinalMixType *)&DAT_047eca10,fVar5,(uint)!bVar1,
                 (int)lVar2);
      lVar2 = lVar2 + 1;
      pfVar4 = pfVar4 + 2;
    } while (lVar2 != 6);
    if (param_2 != 0) {
      nn::audio::RequestUpdateAudioRenderer(DAT_047ec9c0,DAT_047ec9c8,&DAT_047eca58);
    }
  }
  FUN_00120750(&DAT_047ecc40);
  return;
}


