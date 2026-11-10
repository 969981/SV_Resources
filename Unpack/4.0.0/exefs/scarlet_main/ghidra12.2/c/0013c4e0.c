/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013c4e0; name: FUN_0013c4e0
 */


void FUN_0013c4e0(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined1 auStack_a8 [11];
  byte local_9d;
  undefined8 *local_90;
  undefined *local_88;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar17 = (ulong)param_3;
  uVar20 = *(uint *)(param_2 + 0xc);
  if (((char)*(byte *)(param_2 + 10) < '\0') &&
     (uVar10 = uVar20 - (uVar20 >> 1 & 0x55555555),
     uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333),
     1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
    uVar20 = uVar20 | uVar20 >> 1;
    uVar20 = uVar20 | uVar20 >> 2;
    uVar20 = uVar20 | uVar20 >> 4;
    uVar20 = uVar20 | uVar20 >> 8;
    uVar20 = (uVar20 | uVar20 >> 0x10) + 1;
  }
  *(uint *)(param_2 + 0xc) = uVar20;
  *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0x7f;
  if (param_4 == 0) {
    local_90 = (undefined8 *)&DAT_03cb6498;
    local_9d = 0;
    local_88 = (undefined *)0x0;
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_0012d860(param_4);
    if ((0x1e < (int)uVar10) || (0x1e < uVar10)) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"table overflow");
    }
    uVar8 = 1 << (ulong)(uVar10 & 0x1f);
    local_90 = (undefined8 *)FUN_0012d7b0(param_1,((ulong)uVar8 + (ulong)uVar8 * 2) * 8,0);
    uVar2 = uVar8;
    if ((int)uVar8 < 2) {
      uVar2 = 1;
    }
    if ((int)uVar8 < 2) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      puVar16 = (undefined4 *)((long)local_90 + 0x24);
      do {
        uVar13 = uVar13 + 2;
        puVar16[-6] = 0;
        *(undefined2 *)(puVar16 + -7) = 0x10;
        *puVar16 = 0;
        *(undefined2 *)(puVar16 + -1) = 0x10;
        puVar16 = puVar16 + 0xc;
      } while (((ulong)uVar2 & 0x7ffffffe) != uVar13);
    }
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)((long)local_90 + uVar13 * 0x18 + 0xc) = 0;
      *(undefined2 *)((long)local_90 + uVar13 * 0x18 + 8) = 0x10;
    }
    local_88 = (undefined *)((long)local_90 + (ulong)uVar8 * 0x18);
    local_9d = (byte)uVar10;
  }
  uVar19 = (undefined1)uVar10;
  if (param_3 < uVar20) {
    uVar7 = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(param_2 + 0xb) = uVar19;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 **)(param_2 + 0x18) = local_90;
    *(undefined **)(param_2 + 0x20) = local_88;
    *(uint *)(param_2 + 0xc) = param_3;
    uVar13 = uVar17;
    local_9d = uVar7;
    local_90 = (undefined8 *)uVar3;
    local_88 = (undefined *)uVar5;
    do {
      lVar11 = uVar13 * 0x10;
      uVar13 = uVar13 + 1;
      if ((*(byte *)(*(long *)(param_2 + 0x10) + lVar11 + 8) & 0xf) != 0) {
        FUN_0013c890(param_1,param_2,uVar13);
      }
    } while (uVar13 != uVar20);
    local_9d = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(param_2 + 0xb) = uVar7;
    *(uint *)(param_2 + 0xc) = uVar20;
    local_90 = *(undefined8 **)(param_2 + 0x18);
    local_88 = *(undefined **)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = uVar5;
    uVar19 = local_9d;
  }
  puVar9 = local_88;
  puVar18 = local_90;
  uVar13 = (ulong)uVar20;
  lVar11 = FUN_0012d700(param_1,*(undefined8 *)(param_2 + 0x10),uVar13 << 4,uVar17 << 4);
  if ((param_3 != 0) && (lVar11 == 0)) {
    FUN_0013c9b0(param_1,auStack_a8);
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(param_1,4);
  }
  local_9d = *(byte *)(param_2 + 0xb);
  *(undefined1 *)(param_2 + 0xb) = uVar19;
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  *(undefined8 **)(param_2 + 0x18) = puVar18;
  *(undefined **)(param_2 + 0x20) = puVar9;
  *(long *)(param_2 + 0x10) = lVar11;
  *(uint *)(param_2 + 0xc) = param_3;
  if (uVar20 < param_3) {
    *(undefined1 *)(lVar11 + uVar13 * 0x10 + 8) = 0x10;
    uVar14 = uVar13 + 1;
    if (uVar14 != uVar17) {
      if ((param_3 + ~uVar20 & 1) != 0) {
        *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar14 * 0x10 + 8) = 0x10;
        uVar14 = uVar13 + 2;
      }
      if (uVar17 - 2 != uVar13) {
        lVar15 = uVar17 - uVar14;
        lVar11 = uVar14 << 4;
        do {
          *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar11 + 8) = 0x10;
          lVar1 = *(long *)(param_2 + 0x10) + lVar11;
          lVar15 = lVar15 + -2;
          lVar11 = lVar11 + 0x20;
          *(undefined1 *)(lVar1 + 0x18) = 0x10;
        } while (lVar15 != 0);
      }
    }
  }
  uVar20 = 1 << (ulong)(local_9d & 0x1f);
  local_90 = puVar4;
  local_88 = (undefined *)lVar6;
  if (local_9d != 0x1f) {
    uVar10 = uVar20;
    if ((int)uVar20 < 2) {
      uVar10 = 1;
    }
    uVar17 = (ulong)uVar10;
    puVar18 = puVar4;
    do {
      if ((*(byte *)(puVar18 + 1) & 0xf) != 0) {
        local_70 = puVar18[2];
        local_68 = *(undefined1 *)((long)puVar18 + 9);
        puVar12 = (undefined8 *)FUN_0013d560(param_2,&local_70);
        if (*(char *)(puVar12 + 1) == ' ') {
          FUN_0013cb10(param_1,param_2,&local_70,puVar18);
        }
        else {
          *puVar12 = *puVar18;
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar18 + 1);
        }
      }
      puVar18 = puVar18 + 3;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (lVar6 != 0) {
    FUN_0012d6c0(param_1,puVar4,(long)(int)uVar20 * 0x18);
  }
  return;
}


