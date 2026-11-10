/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a4fc0; name: FUN_003a4fc0
 */


undefined8 FUN_003a4fc0(long param_1,int param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if ((param_4 < *(ulong *)(param_1 + 0x18c0)) ||
     ((((*(byte *)(param_1 + 0x698) >> 1 & 1) == 0 && (*(long *)(param_1 + 0x18d8) != param_3)) ||
      (*(int *)(param_1 + 0x18c8) != param_2)))) {
    FUN_003c3950(param_1,0x50,0x9f,0x7f,"external/openssl/ssl/record/rec_layer_s3.c",0x475);
    return 0xffffffff;
  }
  lVar9 = 0;
  uVar10 = 0;
  do {
    lVar7 = param_1 + uVar10 * 0x28;
    plVar1 = (long *)(lVar7 + 0x9b0);
    plVar2 = (long *)(lVar7 + 0x9a8);
    lVar8 = *(long *)(lVar7 + 0x9b0);
    while ((lVar8 != 0 || (*(long *)(param_1 + 0x960) - 1U <= uVar10))) {
      piVar5 = __errno_location();
      *piVar5 = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_003c3950(param_1,0x50,0x9f,0x80,"external/openssl/ssl/record/rec_layer_s3.c",0x48c);
        uVar6 = 0xffffffff;
LAB_003a5130:
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          return uVar6;
        }
        *plVar1 = 0;
        return uVar6;
      }
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar6 = FUN_003e8f00(*(long *)(param_1 + 0x18),*(long *)(lVar7 + 0x990) + *plVar2,
                           *(undefined4 *)plVar1);
      iVar4 = (int)uVar6;
      lVar3 = (long)iVar4;
      if (iVar4 < 0) {
        lVar3 = lVar9;
      }
      if (iVar4 < 1) goto LAB_003a5130;
      lVar8 = *plVar1 - lVar3;
      lVar9 = lVar3;
      if (lVar8 == 0) {
        *plVar1 = 0;
        *plVar2 = *plVar2 + lVar3;
        if (*(ulong *)(param_1 + 0x960) <= uVar10 + 1) {
          *(undefined4 *)(param_1 + 0x28) = 1;
          *param_5 = *(undefined8 *)(param_1 + 0x18d0);
          return 1;
        }
      }
      else {
        *plVar2 = *plVar2 + lVar3;
        *plVar1 = lVar8;
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}


