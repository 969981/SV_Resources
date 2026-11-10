/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bd710; name: FUN_008bd710
 */


void FUN_008bd710(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  float *pfVar6;
  long *plVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  int *piVar11;
  byte bVar12;
  long lVar13;
  char *__string;
  ulong uVar14;
  float fVar15;
  
  cVar5 = *(char *)(param_2 + 0x1d);
  if (cVar5 == '\x04') {
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    uVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_2 + 0x10),1);
    lVar13 = FUN_008a6694(uVar8,0x13);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 8) == 0)) {
      lVar13 = FUN_008a6694(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0x13);
    }
    else {
      lVar13 = FUN_008a6694(uVar8,0x13);
    }
    if ((((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 8), lVar13 != 0)) &&
        (**(int **)(param_2 + 0x28) == 0x4d535046)) &&
       (uVar3 = (*(int **)(param_2 + 0x28))[1], 0 < (int)uVar3)) {
      uVar14 = 0;
      do {
        if ((uint)uVar14 < 4) {
          lVar10 = *(long *)(*(long *)(param_3 + 0x18) + 8);
          __string = *(char **)(param_2 + 0x30);
          switch(uVar14 & 0xffffffff) {
          case 0:
            if (__string == (char *)0x0) goto LAB_008bd92c;
            break;
          case 1:
            __string = __string + 0x20;
            sVar9 = strnlen(__string,0x20);
            if (sVar9 == 0) goto LAB_008bd92c;
            goto LAB_008bd9ac;
          case 2:
            __string = __string + 0x40;
            break;
          case 3:
            __string = __string + 0x60;
            sVar9 = strnlen(__string,0x20);
            goto joined_r0x008bd9a8;
          }
          sVar9 = strnlen(__string,0x20);
joined_r0x008bd9a8:
          if (sVar9 != 0) {
LAB_008bd9ac:
            FUN_008bdc88(*(undefined4 *)(lVar10 + uVar14 * 4),lVar13,__string);
          }
        }
LAB_008bd92c:
        uVar14 = uVar14 + 1;
      } while (uVar3 != uVar14);
    }
  }
  else if (cVar5 == '\x01') {
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    lVar13 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined8 *)(param_2 + 0x10),1);
    piVar11 = *(int **)(param_2 + 0x28);
    if (*piVar11 == 0x53544c46) {
      uVar3 = piVar11[1];
      if (((0 < (int)uVar3) && (*(byte *)(param_2 + 0x1c) < (*(byte *)(lVar13 + 0x14) & 3))) &&
         (*(undefined4 *)
           (*(long *)(lVar13 + 0x18) + ((ulong)(uint)(*(int *)(lVar13 + 0x10) << 4) & 0x30) +
            (ulong)*(byte *)(param_2 + 0x1c) * 0x14 + (ulong)**(byte **)(piVar11 + 2) * 4) =
               **(undefined4 **)(*(long *)(param_3 + 0x18) + 8), uVar3 != 1)) {
        uVar14 = 1;
        do {
          pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar14);
          lVar10 = uVar14 * 4;
          uVar14 = uVar14 + 1;
          *(undefined4 *)
           (*(long *)(lVar13 + 0x18) + ((ulong)(uint)(*(int *)(lVar13 + 0x10) << 4) & 0x30) +
            (ulong)*(byte *)(param_2 + 0x1c) * 0x14 + (ulong)*pbVar1 * 4) =
               *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar10);
        } while (uVar3 != uVar14);
      }
    }
    else if (*piVar11 == 0x434d4c46) {
      FUN_008bd5b8(lVar13,lVar13,param_2,param_3,0);
      return;
    }
  }
  else if (cVar5 == '\0') {
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_2 + 0x10),1);
    piVar11 = *(int **)(param_2 + 0x28);
    iVar2 = *piVar11;
    if (iVar2 < 0x49564c46) {
      if (iVar2 == 0x41504c46) {
        uVar3 = piVar11[1];
        if (0 < (int)uVar3) {
          *(undefined4 *)((long)plVar7 + (ulong)**(byte **)(piVar11 + 2) * 4 + 0x30) =
               **(undefined4 **)(*(long *)(param_3 + 0x18) + 8);
          *(byte *)(plVar7 + 0xb) = *(byte *)(plVar7 + 0xb) | 0x10;
          if (uVar3 != 1) {
            uVar14 = 1;
            do {
              pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar14);
              lVar13 = uVar14 * 4;
              uVar14 = uVar14 + 1;
              *(undefined4 *)((long)plVar7 + (ulong)*pbVar1 * 4 + 0x30) =
                   *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar13);
              *(byte *)(plVar7 + 0xb) = *(byte *)(plVar7 + 0xb) | 0x10;
            } while (uVar3 != uVar14);
          }
        }
      }
      else if (iVar2 == 0x43434c46) {
        uVar3 = piVar11[1];
        if ((0 < (int)uVar3) &&
           (FUN_008b2ff0(**(undefined4 **)(*(long *)(param_3 + 0x18) + 8),plVar7,
                         **(undefined1 **)(piVar11 + 2)), uVar3 != 1)) {
          uVar14 = 1;
          do {
            FUN_008b2ff0(*(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar14 * 4),
                         plVar7,*(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar14));
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
        }
      }
      else if ((iVar2 == 0x43564c46) && (uVar3 = piVar11[1], 0 < (int)uVar3)) {
        lVar13 = 0;
        while( true ) {
          fVar15 = *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar13 * 4) + 0.5;
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if (255.0 < fVar15) {
            fVar15 = 255.0;
          }
          (**(code **)(*plVar7 + 0x38))
                    (plVar7,*(undefined1 *)(*(long *)(piVar11 + 2) + lVar13),(int)fVar15);
          if ((ulong)uVar3 - 1 == lVar13) break;
          piVar11 = *(int **)(param_2 + 0x28);
          lVar13 = lVar13 + 1;
        }
      }
    }
    else if (iVar2 == 0x49564c46) {
      uVar3 = piVar11[1];
      if (0 < (int)uVar3) {
        bVar12 = *(byte *)(plVar7 + 0xb);
        lVar13 = 0;
        do {
          pfVar6 = (float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar13);
          lVar13 = lVar13 + 4;
          bVar12 = bVar12 & 0xfe | *pfVar6 != 0.0;
          *(byte *)(plVar7 + 0xb) = bVar12;
        } while ((ulong)uVar3 * 4 != lVar13);
      }
    }
    else if (iVar2 == 0x53504c46) {
      uVar3 = piVar11[1];
      if (0 < (int)uVar3) {
        lVar13 = 0;
        while( true ) {
          bVar12 = *(byte *)(*(long *)(piVar11 + 2) + lVar13);
          uVar4 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar13 * 4);
          lVar10 = FUN_00d36bcc(plVar7,6);
          if (lVar10 != 0) {
            *(undefined4 *)(lVar10 + (ulong)bVar12 * 4 + 0x1c) = uVar4;
          }
          if ((ulong)uVar3 - 1 == lVar13) break;
          piVar11 = *(int **)(param_2 + 0x28);
          lVar13 = lVar13 + 1;
        }
      }
    }
    else if ((iVar2 == 0x544d4c46) && (uVar3 = piVar11[1], 0 < (int)uVar3)) {
      lVar13 = 0;
      while( true ) {
        bVar12 = *(byte *)(*(long *)(piVar11 + 2) + lVar13);
        uVar4 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar13 * 4);
        lVar10 = FUN_00d36bcc(plVar7,3);
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + (ulong)bVar12 * 4 + 0x18) = uVar4;
        }
        if ((ulong)uVar3 - 1 == lVar13) break;
        piVar11 = *(int **)(param_2 + 0x28);
        lVar13 = lVar13 + 1;
      }
    }
  }
  return;
}


