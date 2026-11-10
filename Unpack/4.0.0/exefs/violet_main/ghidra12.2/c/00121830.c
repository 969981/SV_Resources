/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121830; name: FUN_00121830
 */


void FUN_00121830(long param_1)

{
  MemoryPoolType *pMVar1;
  ulong uVar2;
  
  uVar2 = param_1 + 0x73U & 0xfffffffffffffff8;
  if (*(int *)(uVar2 + 0x5c) == 0) {
    return;
  }
  *(undefined4 *)(uVar2 + 0x5c) = 0;
  FUN_001209d0(&DAT_047ecc40);
  nn::audio::SetVoicePlayState((VoiceType *)(uVar2 + 8),1);
  pMVar1 = (MemoryPoolType *)(uVar2 + 0x18);
  nn::audio::RequestDetachMemoryPool(pMVar1);
  nn::audio::ReleaseVoiceSlot((AudioRendererConfig *)&DAT_047eca58,(VoiceType *)(uVar2 + 8));
  do {
    nn::audio::RequestUpdateAudioRenderer(DAT_047ec9c0,DAT_047ec9c8,&DAT_047eca58);
    nn::os::WaitSystemEvent((SystemEventType *)&DAT_047ecb10);
    uVar2 = nn::audio::IsMemoryPoolAttached(pMVar1);
  } while ((uVar2 & 1) != 0);
  nn::audio::ReleaseMemoryPool((AudioRendererConfig *)&DAT_047eca58,pMVar1);
  FUN_00120750(&DAT_047ecc40);
  return;
}


