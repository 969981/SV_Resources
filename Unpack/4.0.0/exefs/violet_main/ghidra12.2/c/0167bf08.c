/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167bf08; name: FUN_0167bf08
 */


void FUN_0167bf08(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  
  bVar3 = *(byte *)((long)param_1 + 0xa6);
  if ((ulong)bVar3 != 0) {
    uVar2 = 0;
    plVar4 = param_1;
    do {
      if (*plVar4 == param_2) {
        iVar1 = (int)uVar2;
        if (iVar1 + 1U < (uint)bVar3) {
          *plVar4 = plVar4[1];
          bVar3 = *(byte *)((long)param_1 + 0xa6);
          while (iVar1 + 2U < (uint)bVar3) {
            param_1[uVar2 + 1] = param_1[uVar2 + 2];
            bVar3 = *(byte *)((long)param_1 + 0xa6);
            iVar1 = (int)(uVar2 + 1);
            uVar2 = uVar2 + 1;
          }
        }
        *(byte *)((long)param_1 + 0xa6) = bVar3 - 1;
        *(char *)(param_1 + 0x15) = (char)param_1[0x15] + -1;
        return;
      }
      uVar2 = uVar2 + 1;
      plVar4 = plVar4 + 1;
    } while (bVar3 != uVar2);
  }
  return;
}


