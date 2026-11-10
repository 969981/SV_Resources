/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a4d10; name: FUN_030a4d10
 */


void FUN_030a4d10(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  
  do {
    uVar1 = param_2 + param_3 >> 1;
    fVar9 = *(float *)(param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3))
    ;
    iVar8 = param_2;
    iVar2 = param_3;
    do {
      pfVar5 = (float *)(param_1 + -8 + (long)iVar8 * 8);
      do {
        iVar4 = iVar8;
        pfVar5 = pfVar5 + 2;
        iVar8 = iVar4 + 1;
      } while (*pfVar5 < fVar9);
      pfVar7 = (float *)(param_1 + 8 + (long)iVar2 * 8);
      iVar2 = iVar2 + 1;
      do {
        iVar3 = iVar2;
        pfVar7 = pfVar7 + -2;
        iVar2 = iVar3 + -1;
      } while (fVar9 < *pfVar7);
      iVar8 = iVar4;
      if (iVar4 <= iVar2) {
        if (iVar4 != iVar2) {
          uVar6 = *(undefined8 *)pfVar7;
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar5;
          *(undefined8 *)pfVar5 = uVar6;
        }
        iVar2 = iVar3 + -2;
        iVar8 = iVar4 + 1;
      }
    } while (iVar8 <= iVar2);
    if (param_2 < iVar2) {
      FUN_030a4d10(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


