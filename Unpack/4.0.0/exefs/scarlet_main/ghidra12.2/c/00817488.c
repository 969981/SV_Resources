/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00817488; name: FUN_00817488
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00817488(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  short *psVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 auStack_160 [24];
  undefined2 local_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined2 local_128;
  undefined2 uStack_126;
  undefined *local_120;
  undefined1 local_118;
  undefined2 local_117;
  undefined1 local_115 [197];
  undefined4 local_50 [4];
  
  if ((char)param_1[0xf8] != '\x04' && (char)param_1[0xf8] != '\x01') {
    return;
  }
  local_50[0] = 0;
  local_140 = (undefined1  [8])((ulong)local_140 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_140);
  lVar10 = *(long *)(param_2 + 0x20);
  if ((lVar10 != 0) && (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50))) {
    uVar11 = 0;
    do {
      if (*(long *)(param_1[0x10c] + (uVar11 & 0xffff) * 0xb0 + 8) == lVar10) goto LAB_00817524;
      uVar3 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar3;
    } while ((int)(uVar3 & 0xffff) < (int)(*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1));
  }
  uVar11 = (ulong)*(ushort *)(param_1 + 0xc);
LAB_00817524:
  local_120 = PTR_DAT_047d0c98 + 0x68;
  local_140 = (undefined1  [8])(PTR_DAT_047d0c98 + 0x10);
  local_138 = &local_118;
  local_130 = 0xc0;
  local_118 = 0;
  lVar12 = 0;
  puVar9 = (undefined8 *)local_140;
  do {
    *(undefined2 *)((long)puVar9 + 0x29) = 0;
    lVar1 = lVar12 + 4;
    *(undefined1 *)((long)puVar9 + 0x2b) = 0;
    puVar9 = (undefined8 *)((long)local_140 + lVar1);
    local_115[lVar12 + 1] = 0;
    lVar12 = lVar1;
  } while (lVar1 != 0xc0);
  uStack_12c = 0;
  local_128 = 0;
  uStack_126 = 0;
  FUN_0078a4fc(param_4,local_140);
  cVar2 = *(char *)(param_2 + 8);
  uVar3 = (uint)uVar11;
  if (cVar2 == '\a') {
    if ((uint)*(ushort *)(param_1 + 0xc) == (uVar3 & 0xffff)) {
LAB_008177cc:
      uVar3 = FUN_00815460(param_1,lVar10,*(undefined2 *)(param_2 + 0x28));
      if (0x16 < (uVar3 & 0xffff)) {
        return;
      }
      uVar11 = (ulong)uVar3;
      FUN_007935cc(param_1 + 0x109);
      cVar2 = (char)param_1[0xf8];
    }
    else {
      uVar13 = uVar11 & 0xffff;
      psVar8 = (short *)(param_1[0x10c] + uVar13 * 0xb0 + 0x10);
      if (*psVar8 != *(short *)(param_2 + 0x28)) {
        puVar14 = (undefined1 *)(param_1[0x10c] + uVar13 * 0xb0);
        *puVar14 = 0;
        *(undefined8 *)(puVar14 + 8) = 0;
        *psVar8 = 0;
        FUN_0078b160(puVar14 + 0x18);
        FUN_0078b160(puVar14 + 0x38);
        *(undefined4 *)(puVar14 + 0x58) = 0x50004000;
        FUN_00817eec(puVar14 + 0x60,&DAT_03c886bc);
        FUN_00817eec(puVar14 + 0x78,&DAT_03c886bc);
        *(undefined2 *)(puVar14 + 0x90) = 0;
        FUN_007935cc(puVar14 + 0x98);
        FUN_007935cc(puVar14 + 0xa0);
        *(undefined2 *)(puVar14 + 0xa8) = 2;
        goto LAB_008177cc;
      }
      FUN_0284e338(local_140);
      FUN_0284e360(local_140,*(undefined4 *)(param_2 + 0xc));
      local_128 = *(undefined2 *)(param_2 + 0x10);
      FUN_0284e338(auStack_160);
      FUN_0284e360(auStack_160,*(undefined4 *)(param_2 + 0x14));
      local_148 = *(undefined2 *)(param_2 + 0x10);
      uVar4 = FUN_0078b278(param_1[0x10c] + uVar13 * 0xb0 + 0x18,local_140);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = FUN_0078b278(param_1[0x10c] + uVar13 * 0xb0 + 0x38,auStack_160), (uVar4 & 1) == 0)
         ) {
        puVar14 = (undefined1 *)(param_1[0x10c] + uVar13 * 0xb0);
        *puVar14 = 0;
        *(undefined8 *)(puVar14 + 8) = 0;
        *(undefined2 *)(puVar14 + 0x10) = 0;
        FUN_0078b160(puVar14 + 0x18);
        FUN_0078b160(puVar14 + 0x38);
        *(undefined4 *)(puVar14 + 0x58) = 0x50004000;
        FUN_00817eec(puVar14 + 0x60,&DAT_03c886bc);
        FUN_00817eec(puVar14 + 0x78,&DAT_03c886bc);
        *(undefined2 *)(puVar14 + 0x90) = 0;
        FUN_007935cc(puVar14 + 0x98);
        FUN_007935cc(puVar14 + 0xa0);
        *(undefined2 *)(puVar14 + 0xa8) = 2;
        uVar11 = (ulong)*(ushort *)(param_1 + 0xc);
      }
      FUN_0284e3d4(auStack_160);
      FUN_0284e3d4(local_140);
      if ((uint)*(ushort *)(param_1 + 0xc) == ((uint)uVar11 & 0xffff)) goto LAB_008177cc;
      cVar2 = (char)param_1[0xf8];
    }
    if (cVar2 != '\x04') {
      return;
    }
    uVar11 = uVar11 & 0xffff;
    uVar13 = FUN_0078b12c(param_1[0x10c] + uVar11 * 0xb0 + 0x18);
    if (((uVar13 & 1) == 0) ||
       (uVar13 = FUN_0078b12c(param_1[0x10c] + uVar11 * 0xb0 + 0x38), (uVar13 & 1) == 0)) {
      lVar12 = uVar11 * 0xb0;
      FUN_00817234(param_1,8,lVar10,*(undefined2 *)(param_1[0x10c] + lVar12 + 0x10));
      FUN_007935cc(param_1[0x10c] + lVar12 + 0x98);
      lVar10 = param_1[0x10c];
      *(undefined1 *)(lVar10 + lVar12) = 1;
    }
    else {
      FUN_00817234(param_1,9,lVar10,*(undefined2 *)(param_1[0x10c] + uVar11 * 0xb0 + 0x10));
      lVar10 = param_1[0x10c];
    }
    uVar13 = FUN_0078b12c(lVar10 + uVar11 * 0xb0 + 0x38);
    if ((uVar13 & 1) == 0) {
      return;
    }
    lVar10 = param_1[0x10c] + uVar11 * 0xb0;
LAB_008178bc:
    FUN_008161f0(param_1,0,lVar10 + 0x38,*(undefined2 *)(lVar10 + 0x10));
  }
  else {
    if ((*(short *)(param_2 + 0x2a) != 0) && (*(short *)(param_2 + 0x2a) != (short)param_1[0xfa])) {
      return;
    }
    switch(cVar2) {
    case '\0':
      goto switchD_00817708_caseD_0;
    case '\b':
    case '\t':
      if (0x16 < (uVar3 & 0xffff)) break;
      uVar13 = uVar11 & 0xffff;
      if (*(char *)(param_1[0x10c] + uVar13 * 0xb0) != '\x01') {
        return;
      }
      lVar12 = param_1[0x10c] + uVar13 * 0xb0;
      *(undefined2 *)(lVar12 + 0x10) = *(undefined2 *)(param_2 + 0x28);
      uVar4 = FUN_0078b12c(lVar12 + 0x18);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = FUN_0078b12c(param_1[0x10c] + uVar13 * 0xb0 + 0x38), (uVar4 & 1) == 0)) {
        FUN_00817c5c(param_1,uVar11,param_2);
        FUN_007935cc(param_1[0x10c] + uVar13 * 0xb0 + 0x98);
        *(undefined1 *)(param_1[0x10c] + uVar13 * 0xb0) = 2;
        FUN_007935cc(param_1 + 0x109);
      }
      if (*(char *)(param_2 + 8) == '\b') {
        FUN_00817234(param_1,9,lVar10,*(undefined2 *)(param_1[0x10c] + uVar13 * 0xb0 + 0x10));
      }
      lVar10 = param_1[0x10c] + uVar13 * 0xb0;
      goto LAB_008178bc;
    case '\n':
    case '\f':
    case '\x0e':
      if ((uVar3 & 0xffff) < 0x17) {
        uVar11 = uVar11 & 0xffff;
        uVar13 = FUN_0078b12c(param_1[0x10c] + uVar11 * 0xb0 + 0x38);
        if ((uVar13 & 1) == 0) {
          return;
        }
        if (*(char *)(param_2 + 8) == '\n') {
          lVar10 = param_1[0x10c] + uVar11 * 0xb0;
          uVar7 = *(undefined2 *)(lVar10 + 0x10);
          uVar6 = (undefined2)param_1[0xc];
          lVar10 = lVar10 + 0x38;
          uVar5 = 0xb;
        }
        else {
          lVar10 = param_1[0x10c] + uVar11 * 0xb0;
          uVar6 = (undefined2)param_1[0xc];
          uVar7 = *(undefined2 *)(lVar10 + 0x10);
          lVar10 = lVar10 + 0x38;
          if (*(char *)(param_2 + 8) != '\f') {
            FUN_0081649c(param_1,0xf,lVar10,uVar6,uVar7);
            return;
          }
          uVar5 = 0xd;
        }
        FUN_0081649c(param_1,uVar5,lVar10,uVar6,uVar7);
        return;
      }
      break;
    case '\v':
    case '\r':
    case '\x0f':
      if ((uVar3 & 0xffff) < 0x17) {
        uVar11 = uVar11 & 0xffff;
        lVar10 = param_1[0x10c];
        if (*(char *)(lVar10 + uVar11 * 0xb0) != '\x03') {
          return;
        }
        if (cVar2 == '\r') {
          *(undefined1 *)(lVar10 + uVar11 * 0xb0 + 0xa8) = 0;
        }
        else if (cVar2 == '\v') {
          *(undefined1 *)(lVar10 + uVar11 * 0xb0 + 0xa8) = 1;
        }
        else {
          *(undefined1 *)(lVar10 + uVar11 * 0xb0 + 0xa9) = 1;
        }
        FUN_007935cc(lVar10 + uVar11 * 0xb0 + 0x98);
        *(undefined1 *)(param_1[0x10c] + uVar11 * 0xb0) = 4;
        return;
      }
    }
    local_138 = (undefined1 *)((ulong)local_138 & 0xffffffff00000000);
    local_140 = (undefined1  [8])0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,local_140);
  }
switchD_00817708_caseD_0:
  return;
}


