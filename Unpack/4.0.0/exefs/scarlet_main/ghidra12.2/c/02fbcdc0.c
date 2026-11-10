/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbcdc0; name: FUN_02fbcdc0
 */


void FUN_02fbcdc0(long param_1,int param_2,long param_3,undefined8 param_4)

{
  ushort *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  *(undefined1 *)(param_3 + param_2) = 1;
  lVar8 = *(long *)(param_1 + 0x38);
  lVar9 = lVar8 + (long)param_2 * 0x70;
  sVar3 = *(short *)(lVar9 + 0xc);
  sVar4 = *(short *)(lVar9 + 0xe);
  lVar10 = *(long *)(param_1 + 8);
  lVar9 = lVar10 + (long)sVar3 * 0x10;
  uVar5 = (int)param_4 - (int)param_3;
  if (*(char *)(lVar9 + 0xf) == '\0') {
    sVar2 = *(short *)(lVar9 + 0xc);
    uVar7 = (ulong)sVar2;
    if ((-1 < sVar2) && (uVar5 != (int)sVar2 && (int)sVar2 <= (int)uVar5)) {
      uVar11 = (ulong)(uint)(int)sVar2;
      while( true ) {
        if (*(char *)(param_3 + (uVar11 & 0xffff)) == '\0') {
          FUN_02fbcdc0(param_1,uVar7,param_3,param_4);
        }
        else {
          lVar8 = lVar8 + (uVar11 & 0xffff) * 0x70;
          puVar1 = (ushort *)(lVar8 + 0x10);
          if (*(short *)(lVar8 + 0xc) != sVar3) {
            puVar1 = (ushort *)(lVar8 + 0x12);
          }
          uVar11 = (ulong)*puVar1;
        }
        uVar6 = (uint)(short)uVar11;
        uVar7 = (ulong)uVar6;
        if (((int)uVar6 < 0) || ((int)uVar5 <= (int)uVar6)) break;
        lVar8 = *(long *)(param_1 + 0x38);
      }
      lVar10 = *(long *)(param_1 + 8);
    }
  }
  lVar10 = lVar10 + (long)sVar4 * 0x10;
  if (*(char *)(lVar10 + 0xf) == '\0') {
    sVar3 = *(short *)(lVar10 + 0xc);
    uVar7 = (ulong)sVar3;
    if ((-1 < sVar3) && (uVar5 != (int)sVar3 && (int)sVar3 <= (int)uVar5)) {
      uVar11 = (ulong)(uint)(int)sVar3;
      do {
        if (*(char *)(param_3 + (uVar11 & 0xffff)) == '\0') {
          FUN_02fbcdc0(param_1,uVar7,param_3,param_4);
        }
        else {
          lVar9 = *(long *)(param_1 + 0x38) + (uVar11 & 0xffff) * 0x70;
          puVar1 = (ushort *)(lVar9 + 0x10);
          if (*(short *)(lVar9 + 0xc) != sVar4) {
            puVar1 = (ushort *)(lVar9 + 0x12);
          }
          uVar11 = (ulong)*puVar1;
        }
        uVar6 = (uint)(short)uVar11;
        uVar7 = (ulong)uVar6;
      } while ((-1 < (int)uVar6) && ((int)uVar6 < (int)uVar5));
    }
  }
  return;
}


