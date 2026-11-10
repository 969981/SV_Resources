/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121720; name: FUN_00121720
 */


void FUN_00121720(long param_1,int param_2)

{
  VoiceType *pVVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = param_1 + 0x73U & 0xfffffffffffffff8;
  FUN_001209d0(&DAT_047ecc40);
  if (*(int *)(uVar2 + 0x5c) != 0) {
    pVVar1 = (VoiceType *)(uVar2 + 8);
    nn::audio::SetVoiceVolume(pVVar1,(float)*(int *)(uVar2 + 0x30) * 3.0517578e-05);
    if (*(int *)(uVar2 + 100) == 0) {
      fVar4 = (float)*(int *)(uVar2 + 0x34) * 3.0517578e-05;
      fVar3 = 1.0;
      if (0x7fff < *(int *)(uVar2 + 0x34)) {
        fVar3 = 2.0 - fVar4;
      }
      nn::audio::SetVoiceMixVolume(pVVar1,(FinalMixType *)&DAT_047eca10,fVar3,0,0);
      if (0x7fff < *(int *)(uVar2 + 0x34)) {
        fVar4 = 1.0;
      }
      nn::audio::SetVoiceMixVolume
                (pVVar1,(FinalMixType *)&DAT_047eca10,fVar4,(uint)(*(int *)(param_1 + 0x38) == 2),1)
      ;
    }
    if (param_2 != 0) {
      nn::audio::RequestUpdateAudioRenderer(DAT_047ec9c0,DAT_047ec9c8,&DAT_047eca58);
    }
  }
  FUN_00120750(&DAT_047ecc40);
  return;
}


