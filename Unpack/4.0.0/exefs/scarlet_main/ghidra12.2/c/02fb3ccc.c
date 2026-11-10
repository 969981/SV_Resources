/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb3ccc; name: FUN_02fb3ccc
 */


void FUN_02fb3ccc(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
                 ushort param_7,uint param_8,ushort param_9,ushort param_10,ushort param_11,
                 ushort param_12,undefined1 param_13,byte param_14)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  ushort uVar7;
  long lVar8;
  
  if (*(char *)(param_5 + 0x18) == -1) {
    *(undefined4 *)(param_5 + 8) = 0x7fffffff;
  }
  else {
    iVar3 = *(int *)(param_6 + 0x50);
    lVar5 = (long)iVar3;
    if ((int)(*(uint *)(param_6 + 0x54) & 0x7fffffff) <= iVar3) {
      FUN_02fb3b44(param_6 + 0x48,PTR_PTR_047d1a50,lVar5 + 1);
      iVar3 = *(int *)(param_6 + 0x50);
    }
    lVar8 = *(long *)(param_6 + 0x48);
    uVar7 = 0x4000;
    if ((param_8 & 1) == 0) {
      uVar7 = 0;
    }
    puVar6 = (undefined2 *)(lVar8 + (long)iVar3 * 0xc);
    *(int *)(param_6 + 0x50) = (int)(lVar5 + 1);
    *puVar6 = (short)((uint)ABS(param_1) >> 0x10);
    puVar6[2] = uVar7 | param_7 & 0x3f | (param_9 & 3) << 6 | (param_10 & 3) << 8 |
                        (param_11 & 3) << 10 | (param_12 & 3) << 0xc;
    puVar6[1] = (short)((uint)ABS(param_2) >> 0x10);
    *(undefined1 *)(puVar6 + 4) = param_13;
    if ((param_14 & 1) != 0) {
      iVar2 = *(int *)(param_6 + 0x60);
      iVar4 = iVar2;
      if ((int)(*(uint *)(param_6 + 100) & 0x7fffffff) <= iVar2) {
        FUN_02fb874c(param_6 + 0x58,(long)iVar2 + 1);
        iVar4 = *(int *)(param_6 + 0x60);
      }
      pfVar1 = (float *)(*(long *)(param_6 + 0x58) + (long)iVar4 * 8);
      *(int *)(param_6 + 0x60) = (int)((long)iVar2 + 1);
      *pfVar1 = param_3;
      pfVar1[1] = param_4;
      *(char *)(lVar8 + (long)iVar3 * 0xc + 9) = (char)iVar2;
      *(bool *)(param_5 + 0x61) = param_3 != param_4 || *(char *)(param_5 + 0x61) != '\0';
    }
    *(char *)(param_5 + 0x18) = *(char *)(param_5 + 0x18) + '\x01';
    *(char *)(param_5 + 0x19) = *(char *)(param_5 + 0x19) + (char)param_9;
  }
  return;
}


