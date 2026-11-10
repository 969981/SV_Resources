/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff2f38; name: FUN_00ff2f38
 */


void FUN_00ff2f38(long param_1,long param_2,ushort *param_3)

{
  long lVar1;
  short *psVar2;
  int iVar3;
  long lVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(ushort **)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    sVar5 = 0;
    lVar4 = 0xe;
    do {
      psVar2 = (short *)(param_2 + lVar4);
      lVar4 = lVar4 + 8;
      sVar5 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar5;
    } while (lVar4 != 0x14e);
    *(short *)(param_2 + 6) = sVar5;
    piVar6 = *(int **)(param_1 + 0x10);
    iVar7 = *piVar6;
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 4;
      iVar3 = iVar7 * 0x41c64e6d + 0x6073;
      iVar7 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar6 + lVar4 + 8) =
           *(ushort *)((long)piVar6 + lVar4 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar6 + lVar4 + 10) =
           *(ushort *)((long)piVar6 + lVar4 + 10) ^ (ushort)((uint)iVar7 >> 0x10);
      lVar4 = lVar1;
    } while (lVar1 != 0x140);
    param_3 = *(ushort **)(param_1 + 8);
  }
  if ((param_3 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
    iVar7 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
    iVar3 = iVar7 * 0x41c64e6d + 0x6073;
    *param_3 = *param_3 ^ (ushort)((uint)iVar7 >> 0x10);
    iVar7 = iVar3 * 0x41c64e6d + 0x6073;
    param_3[1] = param_3[1] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar7 * 0x41c64e6d + 0x6073;
    param_3[2] = param_3[2] ^ (ushort)((uint)iVar7 >> 0x10);
    iVar7 = iVar3 * 0x41c64e6d + 0x6073;
    param_3[3] = param_3[3] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar7 * 0x41c64e6d + 0x6073;
    param_3[4] = param_3[4] ^ (ushort)((uint)iVar7 >> 0x10);
    iVar7 = iVar3 * 0x41c64e6d + 0x6073;
    param_3[5] = param_3[5] ^ (ushort)((uint)iVar3 >> 0x10);
    param_3[6] = param_3[6] ^ (ushort)((uint)iVar7 >> 0x10);
    param_3[7] = param_3[7] ^ (ushort)((uint)(iVar7 * 0x41c64e6d + 0x6073) >> 0x10);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


