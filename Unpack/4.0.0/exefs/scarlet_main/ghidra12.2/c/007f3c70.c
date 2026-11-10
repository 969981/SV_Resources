/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3c70; name: FUN_007f3c70
 */


int FUN_007f3c70(long param_1,byte param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  int aiStack_60 [10];
  __less a_Stack_38 [8];
  
  cVar6 = FUN_007ec4f0();
  if (cVar6 == -3) {
    iVar7 = -1;
  }
  else {
    iVar7 = -1;
    if ((param_2 < *(byte *)(param_1 + 0x5a)) && (param_3 < 10)) {
      uVar10 = *(uint *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x40);
      if (uVar10 != 0) {
        lVar2 = *(long *)(param_1 + 0x60) + (ulong)param_2 * 0x40;
        if (*(uint *)(lVar2 + 0x38) == param_3) {
          iVar7 = *(int *)(lVar2 + 0x3c);
        }
        else {
          uVar3 = uVar10;
          if (param_3 <= uVar10) {
            uVar3 = param_3;
          }
          if (uVar3 == 0) {
            uVar8 = 0;
          }
          else {
            lVar9 = *(long *)(lVar2 + 8);
            uVar8 = (ulong)uVar3;
            uVar4 = *(uint *)(lVar2 + 4);
            piVar11 = aiStack_60;
            uVar13 = (ulong)*(uint *)(lVar2 + 0x10);
            uVar12 = uVar8;
            do {
              piVar11 = piVar11 + 1;
              uVar10 = uVar10 - 1;
              uVar1 = (ulong)uVar4 + (ulong)uVar10;
              uVar12 = uVar12 - 1;
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar1 / uVar13;
              }
              *piVar11 = *(int *)(lVar9 + (uVar1 - uVar5 * uVar13) * 4);
            } while (uVar12 != 0);
          }
          std::__sort<std::__less<int,int>&,int*>(aiStack_60 + 1,aiStack_60 + uVar8 + 1,a_Stack_38);
          uVar10 = uVar3 >> 1;
          if ((uVar3 & 1) == 0) {
            iVar7 = aiStack_60[(ulong)uVar10 + 1] + aiStack_60[uVar10];
            if (iVar7 < 0) {
              iVar7 = iVar7 + 1;
            }
            iVar7 = iVar7 >> 1;
          }
          else {
            iVar7 = aiStack_60[(ulong)uVar10 + 1];
          }
          *(int *)(lVar2 + 0x3c) = iVar7;
          *(uint *)(lVar2 + 0x38) = param_3;
        }
      }
    }
  }
  return iVar7;
}


