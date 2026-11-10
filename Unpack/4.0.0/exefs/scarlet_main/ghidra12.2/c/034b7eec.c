/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b7eec; name: FUN_034b7eec
 */


void FUN_034b7eec(undefined8 param_1,undefined8 param_2,long param_3,int param_4,float *param_5,
                 float *param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 local_54;
  
  if (*(int *)(param_3 + 0x4c) == 3) {
    *param_5 = 1.0;
    *param_6 = 1.0;
    uVar1 = *(uint *)(param_3 + 0x58);
    if (uVar1 != 0) {
      lVar2 = *(long *)(param_3 + 0x50);
      lVar3 = lVar2;
      do {
        if (*(int *)(lVar3 + 4) == param_4) {
          local_54 = *(undefined4 *)(lVar3 + 0x18);
          fVar4 = (float)FUN_03447dcc(param_2,lVar3 + 8,&local_54);
          *(undefined4 *)(lVar3 + 0x18) = local_54;
          *param_6 = *param_6 * fVar4;
          local_54 = *(undefined4 *)(lVar3 + 0x18);
          fVar4 = (float)FUN_03447dcc(param_1,lVar3 + 8,&local_54);
          *(undefined4 *)(lVar3 + 0x18) = local_54;
          *param_5 = *param_5 * fVar4;
          lVar2 = *(long *)(param_3 + 0x50);
          uVar1 = *(uint *)(param_3 + 0x58);
        }
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != lVar2 + (ulong)uVar1 * 0x20);
    }
  }
  else {
    *param_5 = 0.0;
    *param_6 = 0.0;
    uVar1 = *(uint *)(param_3 + 0x58);
    if (uVar1 != 0) {
      lVar2 = *(long *)(param_3 + 0x50);
      lVar3 = lVar2;
      do {
        if (*(int *)(lVar3 + 4) == param_4) {
          local_54 = *(undefined4 *)(lVar3 + 0x18);
          fVar4 = (float)FUN_03447dcc(param_2,lVar3 + 8,&local_54);
          *(undefined4 *)(lVar3 + 0x18) = local_54;
          *param_6 = *param_6 + fVar4;
          local_54 = *(undefined4 *)(lVar3 + 0x18);
          fVar4 = (float)FUN_03447dcc(param_1,lVar3 + 8,&local_54);
          *(undefined4 *)(lVar3 + 0x18) = local_54;
          *param_5 = *param_5 + fVar4;
          lVar2 = *(long *)(param_3 + 0x50);
          uVar1 = *(uint *)(param_3 + 0x58);
        }
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != lVar2 + (ulong)uVar1 * 0x20);
    }
  }
  return;
}


