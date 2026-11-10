/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088da20; name: FUN_0088da20
 */


void FUN_0088da20(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  ushort uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar13 = *(long *)(param_1 + 0x18);
  if (*(short *)(lVar13 + 0xe) != 0) {
    plVar1 = param_3 + 0x16;
    uVar14 = 0;
    lVar2 = lVar13 + (ulong)*(uint *)(lVar13 + 0x10);
    if (param_2 == (long *)0x0) {
      do {
        lVar5 = lVar13 + (ulong)*(uint *)(lVar2 + uVar14 * 4);
        cVar6 = *(char *)(lVar5 + 0x1d);
        if (cVar6 == '\0') {
          uVar10 = FUN_0088fc10(plVar1,lVar5);
          if ((uVar10 & 1) != 0) {
            uVar7 = *(ushort *)(param_1 + 0x38);
            if (*(ushort *)(param_1 + 0x3a) <= uVar7) {
              return;
            }
            *(ushort *)(param_1 + 0x38) = uVar7 + 1;
            puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 0x10);
            *puVar4 = 0;
            puVar4[1] = lVar5;
          }
        }
        else if (cVar6 == '\x01') {
          bVar8 = (**(code **)(*param_3 + 0x50))(param_3);
          if (bVar8 != 0) {
            uVar12 = 0;
            do {
              lVar9 = (**(code **)(*param_3 + 0x58))(param_3,uVar12);
              if (((lVar9 != 0) &&
                  (uVar10 = FUN_0088fe00(*(undefined8 *)(lVar9 + 0x28),lVar5), (uVar10 & 1) != 0))
                 && ((lVar9 = (**(code **)(lRam0000000000000000 + 0x58))(0,uVar12), lVar9 != 0 &&
                     (uVar10 = FUN_0088d418(param_1,lVar9,lVar5), (uVar10 & 1) == 0)))) {
                return;
              }
              uVar12 = uVar12 + 1;
            } while (bVar8 != uVar12);
          }
        }
        else if (cVar6 == '\x02') {
          FUN_0088fc10(plVar1,lVar5);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(lVar13 + 0xe));
    }
    else {
      do {
        lVar5 = lVar13 + (ulong)*(uint *)(lVar2 + uVar14 * 4);
        cVar6 = *(char *)(lVar5 + 0x1d);
        if (cVar6 == '\x02') {
          uVar10 = FUN_0088fc10(plVar1,lVar5);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar5 + 0x1d) == '\x04' || *(char *)(lVar5 + 0x1d) == '\x02') {
              puVar3 = (uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x24));
              lVar9 = FUN_00fa5b78(param_2,(long)puVar3 + (ulong)*puVar3);
            }
            else {
              lVar9 = FUN_00fa5b78(param_2,0);
            }
            if (lVar9 != 0) {
              uVar7 = *(ushort *)(param_1 + 0x38);
              if (*(ushort *)(param_1 + 0x3a) <= uVar7) {
                return;
              }
              *(ushort *)(param_1 + 0x38) = uVar7 + 1;
              plVar11 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 0x10);
              *plVar11 = lVar9;
              goto LAB_0088da6c;
            }
          }
        }
        else if (cVar6 == '\x01') {
          bVar8 = (**(code **)(*param_3 + 0x50))(param_3);
          if (bVar8 != 0) {
            uVar12 = 0;
            do {
              lVar9 = (**(code **)(*param_3 + 0x58))(param_3,uVar12);
              if ((((lVar9 != 0) &&
                   (uVar10 = FUN_0088fe00(*(undefined8 *)(lVar9 + 0x28),lVar5), (uVar10 & 1) != 0))
                  && (lVar9 = (**(code **)(*param_2 + 0x58))(param_2,uVar12), lVar9 != 0)) &&
                 (uVar10 = FUN_0088d418(param_1,lVar9,lVar5), (uVar10 & 1) == 0)) {
                return;
              }
              uVar12 = uVar12 + 1;
            } while (bVar8 != uVar12);
          }
        }
        else if ((cVar6 == '\0') && (uVar10 = FUN_0088fc10(plVar1,lVar5), (uVar10 & 1) != 0)) {
          uVar7 = *(ushort *)(param_1 + 0x38);
          if (*(ushort *)(param_1 + 0x3a) <= uVar7) {
            return;
          }
          *(ushort *)(param_1 + 0x38) = uVar7 + 1;
          plVar11 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 0x10);
          *plVar11 = (long)param_2;
LAB_0088da6c:
          plVar11[1] = lVar5;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(lVar13 + 0xe));
    }
  }
  return;
}


