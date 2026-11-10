/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120430; name: FUN_00120430
 */


ulong FUN_00120430(ulong param_1)

{
  ulong uVar1;
  ThreadType *pTVar2;
  uint uVar3;
  
  uVar1 = 0x10;
  switch(param_1) {
  case 1:
    return 0x1f;
  case 2:
    return 0x17;
  case 3:
    goto switchD_00120454_caseD_3;
  case 4:
    return 8;
  case 5:
    return 0;
  case 6:
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    uVar1 = nn::os::GetThreadCurrentPriority(pTVar2);
    return uVar1;
  default:
    uVar3 = 0xffffffff;
    if ((~(uint)param_1 & 0xf) == 0) {
      uVar3 = (uint)(param_1 >> 4);
    }
    uVar1 = (ulong)uVar3;
switchD_00120454_caseD_3:
    return uVar1;
  }
}


