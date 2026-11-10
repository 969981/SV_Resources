/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f6dd8; name: FUN_018f6dd8
 */


void FUN_018f6dd8(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  
  bVar3 = *(byte *)(param_1 + 6);
  if (bVar3 != 0) {
    uVar6 = 0;
    plVar7 = param_1;
    do {
      if (*plVar7 == param_2) {
        lVar4 = *plVar7;
        iVar5 = (int)uVar6;
        if (iVar5 < (int)(bVar3 - 1)) {
          *plVar7 = plVar7[1];
          uVar1 = iVar5 + 1;
          uVar6 = (ulong)uVar1;
          if ((int)(uVar1 & 0xff) < (int)(*(byte *)(param_1 + 6) - 1)) {
            param_1[uVar6 & 0xff] = param_1[(uVar1 & 0xff) + 1];
            uVar1 = iVar5 + 2;
            uVar6 = (ulong)uVar1;
            if ((int)(uVar1 & 0xff) < (int)(*(byte *)(param_1 + 6) - 1)) {
              do {
                uVar2 = uVar1 & 0xff;
                uVar1 = uVar2 + 1;
                uVar6 = (ulong)uVar1;
                param_1[uVar2] = param_1[uVar6];
              } while ((int)(uVar1 & 0xff) < (int)(*(byte *)(param_1 + 6) - 1));
            }
          }
          uVar6 = uVar6 & 0xff;
        }
        param_1[uVar6] = lVar4;
        param_1[(ulong)*(byte *)(param_1 + 6) - 1] = 0;
        *(char *)(param_1 + 6) = (char)param_1[6] + -1;
        return;
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 1;
    } while (bVar3 != uVar6);
  }
  return;
}


