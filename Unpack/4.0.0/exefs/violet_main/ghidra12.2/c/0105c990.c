/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105c990; name: FUN_0105c990
 */


void FUN_0105c990(long param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *__src;
  int *piVar14;
  
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  cVar3 = *(char *)(*(long *)(param_1 + 0x40) + 0xe2);
  if ((cVar3 == -1) || (*(char *)(*(long *)(param_1 + 0x40) + 0xe3) == '\0')) {
LAB_0105ca70:
    lVar7 = *param_2;
    if (lVar7 != 0) {
      piVar14 = *(int **)(lVar7 + 0x40);
      __src = piVar14 + 8;
      if (*piVar14 == 0x1f) {
LAB_0105ca8c:
        if ((char)piVar14[0x94] != '\0') {
          *(undefined1 *)(param_1 + 0x174) = 1;
        }
        if (*(char *)((long)piVar14 + 0x251) != '\0') {
          *(undefined1 *)(param_1 + 0x175) = 1;
        }
        if (*(char *)((long)piVar14 + 0x252) != '\0') {
          *(undefined1 *)(param_1 + 0x176) = 1;
        }
        if (*(char *)((long)piVar14 + 0x253) != '\0') {
          *(undefined1 *)(param_1 + 0x177) = 1;
        }
        if ((char)piVar14[0x95] != '\0') {
          *(undefined1 *)(param_1 + 0x178) = 1;
        }
        uVar5 = (uint)*(ushort *)(piVar14 + 0x96);
        __src = piVar14 + 0x97;
      }
      else {
        uVar5 = *piVar14 - 0x11;
        uVar8 = (ulong)uVar5;
        if (0x3c < uVar5) {
          return;
        }
        if ((1L << (uVar8 & 0x3f) & 0x401U) == 0) {
          if ((1L << (uVar8 & 0x3f) & 0x1000000000140154U) != 0) goto LAB_0105ca8c;
          if (uVar8 != 0xc) {
            return;
          }
          uVar4 = FUN_010b00b8(*(undefined8 *)(param_1 + 0x70));
          FUN_0105ce10(uVar4,__src);
          __src = piVar14 + 0x96b;
          uVar5 = (uint)*(ushort *)(piVar14 + 0x96a);
        }
        else {
          uVar5 = *(int *)(lVar7 + 0x48) - 0x20;
        }
      }
      lVar7 = *(long *)(param_1 + 0x50);
      memcpy((void *)(lVar7 + 0x70),__src,(ulong)(uVar5 & 0xffff));
      uVar9 = 0;
      *(uint *)(lVar7 + 0x68) = uVar5 & 0xffff;
      *(undefined4 *)(lVar7 + 0x6c) = 0;
      goto LAB_0105c9dc;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x30);
    lVar7 = *(long *)(lVar10 + 0xb8);
    if (((((lVar7 == 0) || (*(char *)(lVar7 + 0xe3) != '\0')) &&
         ((lVar11 = *(long *)(lVar10 + 0xc0), lVar11 == 0 || (*(char *)(lVar11 + 0xe3) != '\0'))))
        && ((lVar12 = *(long *)(lVar10 + 200), lVar12 == 0 || (*(char *)(lVar12 + 0xe3) != '\0'))))
       && ((lVar13 = *(long *)(lVar10 + 0xd0), lVar13 == 0 || (*(char *)(lVar13 + 0xe3) != '\0'))))
    {
      if (*(long *)(lVar10 + 0xd8) == 0) {
        if (((lVar7 == 0 && lVar11 == 0) && lVar12 == 0) && (lVar13 == 0)) goto LAB_0105c9d8;
        cVar2 = '\x02';
        if (lVar7 != 0 || lVar11 != 0) {
          cVar2 = lVar7 == 0;
        }
        cVar6 = '\x03';
        if ((lVar7 != 0 || lVar11 != 0) || lVar12 != 0) {
          cVar6 = cVar2;
        }
      }
      else {
        uVar9 = 4;
        if (*(char *)(*(long *)(lVar10 + 0xd8) + 0xe3) == '\0') goto LAB_0105c9dc;
        cVar2 = '\x02';
        if (lVar7 != 0 || lVar11 != 0) {
          cVar2 = lVar7 == 0;
        }
        cVar1 = '\x03';
        if ((lVar7 != 0 || lVar11 != 0) || lVar12 != 0) {
          cVar1 = cVar2;
        }
        cVar6 = '\x04';
        if (((lVar7 != 0 || lVar11 != 0) || lVar12 != 0) || lVar13 != 0) {
          cVar6 = cVar1;
        }
      }
      if (cVar6 == cVar3) goto LAB_0105ca70;
    }
  }
LAB_0105c9d8:
  uVar9 = 4;
LAB_0105c9dc:
  *(undefined4 *)(param_1 + 0x170) = uVar9;
  return;
}


