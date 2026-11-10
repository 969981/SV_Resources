/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03374ae8; name: FUN_03374ae8
 */


void FUN_03374ae8(undefined8 param_1,ulong *param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  short *psVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if (0 < *param_3) {
    FUN_03374798(param_1,param_2 + 1,*param_3,param_4,param_5);
  }
  if (0 < param_3[1]) {
    if (((uint)*param_2 >> 1 & 1) == 0) {
      puVar1 = (ulong *)0x0;
    }
    else {
      puVar1 = param_2 + (ulong)(byte)POPCOUNT((byte)*param_2 & 1) + 2;
    }
    FUN_03374798(param_1,puVar1,param_3[1],param_4,param_5);
  }
  uVar2 = (uint)*param_2;
  if ((uVar2 >> 0x17 & 1) != 0) {
    uVar4 = CONCAT44(uVar2,uVar2) & 0x7fffff007fffff;
    psVar5 = (short *)param_2[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                                           POPCOUNT((char)(uVar4 >> 0x10))) + 2];
    if ((psVar5 != (short *)0x0) && (0 < *psVar5)) {
      lVar8 = 0;
      do {
        FUN_03374798(param_1,*(long *)(psVar5 + lVar8 * 4 + 4) + 8,
                     *(undefined4 *)(*(long *)(param_3 + 2) + lVar8 * 4),param_4,param_5);
        lVar8 = lVar8 + 1;
      } while (lVar8 < *psVar5);
    }
  }
  iVar3 = param_3[0x28];
  if (0 < iVar3) {
    puVar1 = param_2;
    do {
      uVar2 = (uint)*puVar1;
      if ((uVar2 >> 0xf & 1) != 0) {
        uVar4 = CONCAT44(uVar2,uVar2) & 0x7fff00007fff;
        uVar4 = puVar1[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) + 2];
        goto LAB_03374c48;
      }
      if ((*puVar1 & 9) != 0) {
        uVar4 = 0;
        goto LAB_03374c48;
      }
      puVar1 = (ulong *)puVar1[1];
    } while (puVar1 != (ulong *)0x0);
    uVar4 = 0;
LAB_03374c48:
    iVar7 = 0;
    do {
      if (**(char **)(uVar4 + 0x18) == 't') {
        FUN_03374798(param_1,uVar4 + 0x10,
                     *(undefined4 *)(*(long *)(param_3 + 0x26) + (long)iVar7 * 4),param_4,param_5);
        iVar3 = param_3[0x28];
        iVar7 = iVar7 + 1;
      }
      uVar4 = uVar4 + 0x10;
    } while (iVar7 < iVar3);
  }
  if (0 < param_3[0x4c]) {
    lVar6 = 0;
    uVar4 = CONCAT44((int)*param_2,(int)*param_2) & 0x3fff00003fff;
    lVar8 = param_2[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) + 2] + 8;
    do {
      FUN_03374798(param_1,lVar8,*(undefined4 *)(*(long *)(param_3 + 0x4a) + lVar6 * 4),param_4,
                   param_5);
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 < param_3[0x4c]);
  }
  return;
}


