/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea39ec; name: FUN_01ea39ec
 */


bool FUN_01ea39ec(long *param_1)

{
  long lVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  
  lVar1 = *param_1;
  psVar4 = *(short **)(lVar1 + 0x4058);
  psVar3 = *(short **)(lVar1 + 0x4060);
  if ((psVar4 != psVar3) && (sVar2 = *(short *)param_1[1], *psVar4 != sVar2)) {
    do {
      psVar4 = psVar4 + 0x58;
      if (psVar3 == psVar4) {
        psVar4 = psVar3;
        goto LAB_01ea3a10;
      }
    } while (*psVar4 != sVar2);
  }
LAB_01ea3a10:
  if (psVar3 != psVar4) {
    return true;
  }
  psVar4 = *(short **)(lVar1 + 0x4090);
  psVar3 = *(short **)(lVar1 + 0x4098);
  if ((psVar4 != psVar3) && (sVar2 = *(short *)param_1[1], *psVar4 != sVar2)) {
    do {
      psVar4 = psVar4 + 0xe4;
      if (psVar3 == psVar4) {
        psVar4 = psVar3;
        goto LAB_01ea3a40;
      }
    } while (*psVar4 != sVar2);
  }
LAB_01ea3a40:
  return psVar3 != psVar4;
}


