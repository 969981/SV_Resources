/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00131f40; name: FUN_00131f40
 */


void FUN_00131f40(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  char cVar13;
  int iVar14;
  
  plVar12 = *(long **)(param_1 + 0x30);
  uVar4 = (uint)*(byte *)((long)plVar12 + 0x42);
  uVar7 = uVar4;
  do {
    if ((int)uVar7 < 1) {
      cVar13 = '\0';
      if (param_2 < 1) {
        return;
      }
      goto LAB_00131fe0;
    }
    iVar14 = uVar7 + (int)plVar12[7] + -1;
    uVar7 = uVar7 - 1;
  } while (*(char *)(**(long **)(plVar12[2] + 0x58) + (long)iVar14 * 0x18 + 9) == '\x03');
  cVar13 = *(char *)(**(long **)(plVar12[2] + 0x58) + (long)iVar14 * 0x18 + 10) + '\x01';
  if (0 < param_2) {
LAB_00131fe0:
    iVar14 = 0;
    while( true ) {
      *(char *)((long)plVar12 + 0x42) = (char)uVar4 + '\x01';
      iVar1 = (int)plVar12[7] + uVar4;
      lVar8 = **(long **)(plVar12[2] + 0x58);
      lVar5 = lVar8 + (long)iVar1 * 0x18;
      *(char *)(lVar5 + 10) = cVar13;
      lVar10 = *plVar12;
      lVar9 = *(long *)(lVar5 + 0x10);
      piVar11 = (int *)(lVar10 + 0x24);
      iVar2 = *piVar11;
      lVar5 = (long)iVar2;
      lVar3 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar10 + 0x68),
                           (long)(short)plVar12[8],piVar11,0x10,0x7fff,"local variables");
      *(long *)(lVar10 + 0x68) = lVar3;
      if (iVar2 < *piVar11) {
        lVar6 = lVar5 << 4;
        do {
          *(undefined8 *)(lVar3 + lVar6) = 0;
          lVar3 = *(long *)(lVar10 + 0x68);
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar5 < *(int *)(lVar10 + 0x24));
      }
      *(long *)(lVar3 + (long)(short)plVar12[8] * 0x10) = lVar9;
      *(int *)(*(long *)(lVar10 + 0x68) + (long)(short)plVar12[8] * 0x10 + 8) = (int)plVar12[4];
      if (((*(byte *)(lVar10 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar9 + 9) & 0x18) != 0)) {
        FUN_00129d70(*(undefined8 *)(param_1 + 0x38),lVar10,lVar9);
      }
      lVar5 = plVar12[8];
      iVar14 = iVar14 + 1;
      *(short *)(plVar12 + 8) = (short)lVar5 + 1;
      *(short *)(lVar8 + (long)iVar1 * 0x18 + 0xc) = (short)lVar5;
      if (iVar14 == param_2) break;
      uVar4 = (uint)*(byte *)((long)plVar12 + 0x42);
      cVar13 = cVar13 + '\x01';
    }
  }
  return;
}


