/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121660; name: FUN_00121660
 */


void FUN_00121660(long param_1,int param_2,uint param_3)

{
  WaveBuffer *pWVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = param_1 + 0x73U & 0xfffffffffffffff8;
  pWVar1 = (WaveBuffer *)(*(long *)(uVar6 + 0x10) + (long)param_2 * 0x40);
  iVar2 = *(int *)(uVar6 + 0x54);
  lVar5 = *(long *)(uVar6 + 0x28);
  *(undefined4 *)(pWVar1 + 0x10) = 0;
  *(ulong *)pWVar1 = lVar5 + (ulong)(uint)(iVar2 * param_2);
  *(ulong *)(pWVar1 + 8) = (ulong)param_3;
  iVar2 = *(int *)(param_1 + 0x38);
  *(undefined2 *)(pWVar1 + 0x18) = 0;
  *(undefined8 *)(pWVar1 + 0x20) = 0;
  *(undefined8 *)(pWVar1 + 0x28) = 0;
  uVar4 = 1;
  if (iVar2 == 2) {
    uVar4 = 2;
  }
  *(uint *)(pWVar1 + 0x14) = param_3 >> (ulong)uVar4;
  FUN_001209d0(&DAT_047ecc40);
  if ((*(int *)(uVar6 + 0x5c) != 0) &&
     (uVar3 = nn::audio::AppendWaveBuffer((VoiceType *)(uVar6 + 8),pWVar1), (uVar3 & 1) != 0)) {
    nn::audio::RequestUpdateAudioRenderer(DAT_047ec9c0,DAT_047ec9c8,&DAT_047eca58);
    *(int *)(uVar6 + 0x60) = *(int *)(uVar6 + 0x60) + 1;
  }
  FUN_00120750(&DAT_047ecc40);
  return;
}


