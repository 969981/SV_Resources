/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01439990; name: FUN_01439990
 */


void FUN_01439990(long param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t *psVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong local_f0;
  undefined1 auStack_e8 [136];
  
  lVar13 = *(long *)(param_1 + 0x4090);
  lVar16 = *(long *)(param_1 + 0x4098);
  if (lVar13 != lVar16) {
    do {
      if (*(char *)(lVar13 + 0x88) == '\x02') {
        memset(&local_f0,0,0x88);
        if (*(char *)(lVar13 + 0x1c6) == '\0') {
          lVar9 = *(long *)(lVar13 + 0xe8);
          if (lVar9 != 0) {
            if (*(int *)(lVar13 + 0x1c0) == 1) {
              if ((*(long *)(lVar13 + 400) == 0) ||
                 (*(long *)(*(long *)(*(long *)(lVar13 + 0x150) +
                                     (*(ulong *)(lVar13 + 0x188) / 0x1e) * 8) +
                           (*(ulong *)(lVar13 + 0x188) % 0x1e) * 0x88) == 0)) {
                uVar10 = *(long *)(lVar13 + 0xe0) + 1;
                lVar9 = lVar9 + -1;
                *(ulong *)(lVar13 + 0xe0) = uVar10;
                *(long *)(lVar13 + 0xe8) = lVar9;
                if (0xb9 < uVar10) {
                  plVar14 = *(long **)(lVar13 + 0xf0);
                  uVar15 = **(undefined8 **)(lVar13 + 0xa8);
                  uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                  if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar14 + 0x18))(plVar14,uVar15,0xffc,4);
                  }
                  else {
                    FUN_00c48fe8(plVar14,uVar15,0xffc,4);
                  }
                  *(long *)(lVar13 + 0xa8) = *(long *)(lVar13 + 0xa8) + 8;
                  lVar9 = *(long *)(lVar13 + 0xe8);
                  *(long *)(lVar13 + 0xe0) = *(long *)(lVar13 + 0xe0) + -0x5d;
                }
                if (lVar9 == 0) goto LAB_01439b80;
              }
            }
            else if ((*(int *)(lVar13 + 0x1c0) == 2) && (*(char *)(lVar13 + 0x1c4) == '\0')) {
              *(undefined1 *)(lVar13 + 0x1c4) = 1;
              goto LAB_01439b80;
            }
            uVar10 = *(ulong *)(lVar13 + 0xe0);
            puVar11 = (undefined8 *)
                      ((*(undefined8 **)(lVar13 + 0xa8))[uVar10 / 0x5d] + (uVar10 % 0x5d) * 0x2c);
            uVar3 = *(ushort *)(puVar11 + 5);
            uVar5 = *puVar11;
            uVar19 = *(uint *)(puVar11 + 1);
            uVar6 = *(undefined8 *)((long)puVar11 + 0xc);
            uVar15 = *(undefined8 *)((long)puVar11 + 0x14);
            uVar4 = *(undefined8 *)((long)puVar11 + 0x1c);
            uVar18 = *(uint *)((long)puVar11 + 0x24);
            *(ulong *)(lVar13 + 0xe0) = uVar10 + 1;
            *(long *)(lVar13 + 0xe8) = lVar9 + -1;
            if (0xb9 < uVar10 + 1) {
              plVar14 = *(long **)(lVar13 + 0xf0);
              uVar17 = **(undefined8 **)(lVar13 + 0xa8);
              uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
              if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                (**(code **)(*plVar14 + 0x18))(plVar14,uVar17,0xffc,4);
              }
              else {
                FUN_00c48fe8(plVar14,uVar17,0xffc,4);
              }
              *(long *)(lVar13 + 0xa8) = *(long *)(lVar13 + 0xa8) + 8;
              *(long *)(lVar13 + 0xe0) = *(long *)(lVar13 + 0xe0) + -0x5d;
            }
            if ((*(long *)(lVar13 + 8) != 0) &&
               (lVar9 = *(long *)(*(long *)(lVar13 + 8) + 0x10), lVar9 != 0)) {
              plVar14 = (long *)(lVar9 + -0x28);
              if (*(int *)(lVar13 + 0x78) == 5) {
                *(ulong *)(lVar9 + 0xa0) = (ulong)uVar19;
                *(undefined8 *)(lVar9 + 0x98) = uVar5;
                if (*(char *)(lVar9 + 0xcc) == '\0') {
                  *(undefined1 *)(lVar9 + 0xcc) = 1;
                  (**(code **)(*plVar14 + 0x78))(plVar14);
                }
              }
              *(undefined8 *)(lVar9 + 0xb0) = uVar15;
              *(undefined8 *)(lVar9 + 0xa8) = uVar6;
              if (*(char *)(lVar9 + 0xcc) == '\0') {
                *(undefined1 *)(lVar9 + 0xcc) = 1;
                (**(code **)(*plVar14 + 0x78))(plVar14);
                cVar8 = *(char *)(lVar9 + 0xcc);
              }
              else {
                cVar8 = '\x01';
              }
              *(ulong *)(lVar9 + 0xc0) = (ulong)uVar18;
              *(undefined8 *)(lVar9 + 0xb8) = uVar4;
              if (cVar8 == '\0') {
                *(undefined1 *)(lVar9 + 0xcc) = 1;
                (**(code **)(*plVar14 + 0x78))(plVar14);
              }
            }
            uVar1 = uVar3 & 1;
            if (uVar1 != *(byte *)(lVar13 + 0x7e)) {
              if ((uVar3 & 1) == 0) {
                FUN_01ea561c(lVar13);
              }
              else {
                FUN_01ea5434(param_1,lVar13);
              }
            }
            *(char *)(lVar13 + 0x7e) = (char)uVar1;
          }
LAB_01439b80:
          if ((*(char *)(lVar13 + 0x1c6) == '\0') && (lVar9 = *(long *)(lVar13 + 400), lVar9 != 0))
          {
            if (*(int *)(lVar13 + 0x1c0) == 1) {
              uVar10 = *(ulong *)(lVar13 + 0x188);
              if (*(long *)((*(undefined8 **)(lVar13 + 0x150))[uVar10 / 0x1e] +
                           (uVar10 % 0x1e) * 0x88) == 0) {
                lVar9 = lVar9 + -1;
                *(ulong *)(lVar13 + 0x188) = uVar10 + 1;
                *(long *)(lVar13 + 400) = lVar9;
                if (0x3b < uVar10 + 1) {
                  plVar14 = *(long **)(lVar13 + 0x198);
                  uVar15 = **(undefined8 **)(lVar13 + 0x150);
                  uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                  if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar14 + 0x18))(plVar14,uVar15,0xff0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar14,uVar15,0xff0,8);
                  }
                  *(long *)(lVar13 + 0x150) = *(long *)(lVar13 + 0x150) + 8;
                  lVar9 = *(long *)(lVar13 + 400);
                  *(long *)(lVar13 + 0x188) = *(long *)(lVar13 + 0x188) + -0x1e;
                }
                if (lVar9 == 0) goto LAB_01439b90;
              }
            }
            else if ((*(int *)(lVar13 + 0x1c0) == 2) && (*(char *)(lVar13 + 0x1c5) == '\0')) {
              *(undefined1 *)(lVar13 + 0x1c5) = 1;
              goto LAB_01439b90;
            }
            uVar10 = *(ulong *)(lVar13 + 0x188);
            uVar12 = *(ulong *)((*(undefined8 **)(lVar13 + 0x150))[uVar10 / 0x1e] +
                               (uVar10 % 0x1e) * 0x88);
            if (uVar12 == 0) {
              *(ulong *)(lVar13 + 0x188) = uVar10 + 1;
              *(long *)(lVar13 + 400) = lVar9 + -1;
              if (0x3b < uVar10 + 1) {
                plVar14 = *(long **)(lVar13 + 0x198);
                uVar15 = **(undefined8 **)(lVar13 + 0x150);
                uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                  (**(code **)(*plVar14 + 0x18))(plVar14,uVar15,0xff0,8);
                }
                else {
                  FUN_00c48fe8(plVar14,uVar15,0xff0,8);
                }
                *(long *)(lVar13 + 0x150) = *(long *)(lVar13 + 0x150) + 8;
                *(long *)(lVar13 + 0x188) = *(long *)(lVar13 + 0x188) + -0x1e;
              }
            }
            else {
              psVar7 = (size_t *)
                       (*(long *)(*(long *)(lVar13 + 0x150) +
                                 (*(ulong *)(lVar13 + 0x188) / 0x1e) * 8) +
                       (*(ulong *)(lVar13 + 0x188) % 0x1e) * 0x88);
              local_f0 = uVar12;
              memcpy(auStack_e8,psVar7 + 1,*psVar7);
              uVar10 = *(long *)(lVar13 + 0x188) + 1;
              *(ulong *)(lVar13 + 0x188) = uVar10;
              *(long *)(lVar13 + 400) = *(long *)(lVar13 + 400) + -1;
              if (0x3b < uVar10) {
                plVar14 = *(long **)(lVar13 + 0x198);
                uVar15 = **(undefined8 **)(lVar13 + 0x150);
                uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                  (**(code **)(*plVar14 + 0x18))(plVar14,uVar15,0xff0,8);
                }
                else {
                  FUN_00c48fe8(plVar14,uVar15,0xff0,8);
                }
                *(long *)(lVar13 + 0x150) = *(long *)(lVar13 + 0x150) + 8;
                *(long *)(lVar13 + 0x188) = *(long *)(lVar13 + 0x188) + -0x1e;
              }
              lVar9 = *(long *)(lVar13 + 0x68);
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x40) != 0)) &&
                 (*(short *)(*(long *)(lVar9 + 0x40) + 0x1a) != 0)) {
                FUN_01a6a284(lVar9,auStack_e8,local_f0 & 0xffffffff);
              }
            }
          }
        }
LAB_01439b90:
        uVar18 = *(uint *)(lVar13 + 0xe8);
        if (uVar18 < *(byte *)(lVar13 + 0x7d)) {
          bVar2 = *(byte *)(lVar13 + 0x7c);
          if ((bVar2 == 0) || (bVar2 <= uVar18 && uVar18 != bVar2)) {
            *(undefined4 *)(lVar13 + 0x1c0) = 0;
          }
          else {
            *(undefined4 *)(lVar13 + 0x1c0) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar13 + 0x1c0) = 1;
        }
      }
      lVar13 = lVar13 + 0x1c8;
    } while (lVar16 != lVar13);
  }
  return;
}


