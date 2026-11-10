/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f9b2a4; name: FUN_02f9b2a4
 */


void FUN_02f9b2a4(long param_1,long param_2,long *param_3,long *param_4,int param_5,long param_6,
                 long param_7,long param_8,long param_9)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_98;
  
  iVar5 = *(int *)(param_9 + 0x1c);
  if (iVar5 != 0) {
    local_98 = nn::os::GetSystemTick();
  }
  *(int *)(param_9 + 0x18) = *(int *)(param_9 + 0x18) + param_5;
  lVar20 = *(long *)(param_6 + 8);
  if (*(int *)(param_7 + 0x18) < 0xec1) {
    puVar12 = (uint *)(*(long *)(param_7 + 0x10) + (long)*(int *)(param_7 + 0x18) + 0x20);
  }
  else {
    puVar12 = (uint *)FUN_031c36f4(param_7);
  }
  if (0 < param_5) {
    uVar8 = *(ushort *)(*param_4 + 0x5a);
    uVar9 = *(ushort *)(*param_4 + 0x5c);
    uVar10 = *(ushort *)(*param_3 + 0x5a);
    uVar11 = *(ushort *)(*param_3 + 0x5c);
    do {
      lVar15 = 0;
      iVar14 = *(byte *)(lVar20 + 9) + 1;
      do {
        puVar17 = (undefined8 *)(lVar20 + lVar15);
        iVar14 = iVar14 + -1;
        uVar2 = *(undefined4 *)(puVar17 + 1);
        uVar3 = *(undefined4 *)((long)puVar17 + 0xc);
        puVar13 = (undefined8 *)((long)puVar12 + lVar15);
        lVar15 = lVar15 + 0x10;
        *puVar13 = *puVar17;
        *(undefined4 *)(puVar13 + 1) = uVar2;
        *(undefined4 *)((long)puVar13 + 0xc) = uVar3;
      } while (1 < iVar14);
      iVar14 = *(int *)(param_6 + 0x14);
      bVar7 = *(byte *)(lVar20 + 9);
      *(int *)(param_6 + 0x14) = iVar14 + -1;
      if (iVar14 < 2) {
        lVar20 = FUN_031c3900(param_6);
      }
      else {
        lVar20 = *(long *)(param_6 + 8) + (ulong)bVar7 * 0x10;
        *(long *)(param_6 + 8) = lVar20;
      }
      Hint_Prefetch(lVar20 + 0x100,0,0,0);
      Hint_Prefetch(lVar20 + 0x140,0,0,0);
      if (*(long *)(param_8 + 0x18) == 0) {
        puVar12[8] = 0;
        puVar12[9] = 0;
        *(undefined2 *)(puVar12 + 10) = 0;
      }
      else if ((2 < *(byte *)((long)puVar12 + 9)) && (*(long *)(puVar12 + 8) != 0)) {
        iVar14 = (uint)(ushort)puVar12[0x25] - ((uint)uVar10 + (uint)uVar8);
        uVar6 = *puVar12;
        *(ushort *)(puVar12 + 0x25) = (ushort)iVar14 & ((ushort)(iVar14 >> 0x1f) ^ 0xffff);
        lVar15 = *(long *)(*param_4 + 0x78);
        *(uint *)(param_4 + 3) = uVar6;
        if (*(char *)(lVar15 + 0x18) == '\x15') {
          plVar16 = (long *)(lVar15 + ((ulong)(uVar6 >> 0x1a) & 0x38) + 0x48);
          lVar18 = *plVar16;
          lVar15 = 0;
          if (lVar18 != 0) {
            lVar15 = lVar18 + (long)plVar16;
          }
        }
        param_4[4] = lVar15;
        param_4[2] = *(long *)(param_1 + 0x20) + (ulong)*(ushort *)((long)puVar12 + 0x16) * 0x50;
        if ((*(char *)(param_8 + 0x79) == '\0') &&
           ((*(char *)(param_8 + 0x7a) == '\0' || (*(short *)((long)puVar12 + 0x9a) == -1)))) {
          plVar16 = *(long **)(*(long *)(param_1 + 8) + 0x658);
          (**(code **)(*plVar16 + 0x68))
                    (plVar16,param_1,*(undefined8 *)(param_2 + 8),puVar12,param_3,param_4,0,
                     *(undefined8 *)(param_8 + 0x10),*(undefined8 *)(param_8 + 0x18));
        }
        else {
          puVar17 = *(undefined8 **)(param_8 + 0x60);
          if (*(char *)((long)puVar17 + 0xe) == '\0') {
            if (*(int *)(puVar17 + 1) != 0) {
              iVar14 = *(int *)(*(long *)(param_8 + 0x48) + 0x18);
              if (iVar14 < 0xf91) {
                puVar13 = (undefined8 *)
                          (*(long *)(*(long *)(param_8 + 0x48) + 0x10) + (long)iVar14 + 0x20);
              }
              else {
                puVar13 = (undefined8 *)FUN_031c36f4();
                puVar17 = *(undefined8 **)(param_8 + 0x60);
              }
              uVar4 = puVar17[1];
              *puVar13 = *puVar17;
              puVar13[1] = uVar4;
              lVar15 = *(long *)(param_8 + 0x48);
              *(undefined8 **)(param_8 + 0x60) = puVar13;
              *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 0x10;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              puVar17 = *(undefined8 **)(param_8 + 0x60);
            }
            iVar14 = 1;
            *(undefined1 *)((long)puVar17 + 0xe) = 1;
            puVar17 = *(undefined8 **)(param_8 + 0x60);
          }
          else {
            iVar14 = *(int *)(puVar17 + 1) + 1;
          }
          *(int *)(puVar17 + 1) = iVar14;
          *(undefined1 *)(param_8 + 0x7b) = 0;
          lVar15 = param_3[2];
          lVar19 = *(long *)(param_1 + 0x20);
          lVar18 = param_4[2];
          iVar14 = *(int *)(*(long *)(param_8 + 0x48) + 0x18);
          if (iVar14 < 0xf91) {
            puVar17 = (undefined8 *)
                      (*(long *)(*(long *)(param_8 + 0x48) + 0x10) + (long)iVar14 + 0x20);
          }
          else {
            puVar17 = (undefined8 *)FUN_031c36f4();
          }
          *puVar17 = puVar12;
          *(short *)(puVar17 + 1) = (short)(lVar15 - lVar19 >> 4) * -0x3333;
          *(short *)((long)puVar17 + 10) = (short)(lVar18 - lVar19 >> 4) * -0x3333;
          lVar15 = *(long *)(param_8 + 0x48);
          *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 0x10;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        }
      }
      iVar14 = (uint)(ushort)puVar12[3] - ((uint)uVar11 + (uint)uVar9);
      *(ushort *)(puVar12 + 3) = (ushort)iVar14 & ((ushort)(iVar14 >> 0x1f) ^ 0xffff);
      puVar12[6] = 0x7f7f7f;
      *(undefined1 *)((long)puVar12 + 0x1b) = *(undefined1 *)((long)puVar12 + 0x1b);
      lVar15 = (long)*(int *)(param_7 + 0x18) + (ulong)*(byte *)((long)puVar12 + 9) * 0x10;
      iVar14 = (int)lVar15;
      *(int *)(param_7 + 0x18) = iVar14;
      *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
      if (iVar14 < 0xec1) {
        puVar12 = (uint *)(*(long *)(param_7 + 0x10) + lVar15 + 0x20);
      }
      else {
        puVar12 = (uint *)FUN_031c36f4(param_7);
      }
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  if (iVar5 != 0) {
    lVar20 = nn::os::GetSystemTick();
    *(long *)(param_9 + 8) = (lVar20 - local_98) + *(long *)(param_9 + 8);
    *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
  }
  return;
}


