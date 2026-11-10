/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d71fc; name: FUN_007d71fc
 */


void FUN_007d71fc(long param_1,long param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  short sVar12;
  ushort uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined4 local_128 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined4 local_98 [4];
  int local_88 [4];
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  
  puVar9 = PTR_DAT_047d0860;
  if (param_3 < 4) {
    return;
  }
  uVar1 = *(undefined1 *)(param_2 + 1);
  bVar2 = *(byte *)(param_2 + 2);
  cVar3 = *(char *)(param_2 + 3);
  lVar14 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar14 = *(long *)(lVar14 + 0x98);
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x28) != -3)) {
    return;
  }
  uVar15 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xa8));
  puVar10 = PTR_DAT_047d0a08;
  if ((uVar15 & 1) == 0) {
    return;
  }
  if (cVar3 == '\x03') {
    lVar14 = *(long *)puVar9;
    local_128[0] = 0;
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_128 | 4),(Result *)local_88);
    plVar21 = *(long **)(*(long *)PTR_DAT_047d0a08 + 0x18);
    bVar11 = FUN_007ed1b8(lVar14 + 0x10,uVar1);
    if (bVar11 < bVar2) {
      uVar15 = (**(code **)(*plVar21 + 0x168))(plVar21);
      if ((uVar15 & 1) == 0) {
        local_98[0] = 0x6467;
      }
      else {
        local_98[0] = 0x641e;
      }
    }
    else {
      uVar15 = (**(code **)(*plVar21 + 0x168))(plVar21);
      if ((uVar15 & 1) == 0) {
        local_98[0] = 0x6468;
      }
      else {
        local_98[0] = 0x641f;
      }
    }
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_88);
    FUN_00cbd7c0(local_88,local_98);
    FUN_018ff39c(local_128,local_88);
    uVar20 = *(undefined8 *)(param_1 + 0xa8);
    FUN_00cbd7c0(auStack_a8,local_128);
    puVar17 = auStack_a8;
  }
  else if (cVar3 == '\v') {
    uVar20 = *(undefined8 *)(param_1 + 0xa8);
    local_128[0] = 0x647d;
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_128 | 4),(Result *)local_88);
    FUN_00cbd7c0(auStack_78,local_128);
    puVar17 = auStack_78;
  }
  else {
    if (cVar3 == '\n') {
      (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x1b0))();
      FUN_007da650(*(undefined8 *)(param_1 + 0xa8));
      return;
    }
    if (param_3 != 0x29) {
      return;
    }
    switch(cVar3) {
    case '\x02':
      uVar8 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
      *(uint *)(*(long *)PTR_DAT_047d0a08 + 0x11c) = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      local_128[0] = 0x6c38;
      local_88[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_128 | 4),(Result *)local_88);
      FUN_00cbd7c0(auStack_b8,local_128);
      puVar17 = auStack_b8;
      break;
    default:
      uVar15 = (*(ulong *)(param_2 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2 + 0x18) & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      bVar2 = *(byte *)(param_2 + 0x24);
      uVar18 = (ulong)bVar2;
      uVar6 = *(ushort *)(param_2 + 0x25);
      uVar22 = *(ulong *)(param_2 + 0xc);
      uVar5 = *(ushort *)(param_2 + 0x16);
      uVar1 = *(undefined1 *)(param_2 + 0x22);
      uVar4 = *(undefined1 *)(param_2 + 0x23);
      uVar7 = *(ushort *)(param_2 + 0x27);
      lVar19 = *(long *)PTR_DAT_047d0a08;
      uVar16 = FUN_007e5328(lVar19 + 0x178);
      if (uVar16 != (uVar15 >> 0x20 | uVar15 << 0x20)) {
        return;
      }
      sVar12 = FUN_007e5330(lVar19 + 0x178);
      if (CONCAT11(uVar1,uVar4) != sVar12) {
        return;
      }
      FUN_007e5190(local_128);
      (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0x108))
                (local_88,*(long **)(*(long *)puVar10 + 0x18),local_128);
      if (((local_88[0] == 0) &&
          (uVar15 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8,
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10,
          uVar16 = FUN_007e5328(local_128), uVar16 == (uVar15 >> 0x20 | uVar15 << 0x20))) &&
         (uVar13 = FUN_007e5330(local_128), (ushort)(uVar5 >> 8 | uVar5 << 8) == uVar13)) {
        switch(cVar3) {
        case '\x01':
          uVar5 = uVar6 >> 8 | uVar6 << 8;
          uVar20 = *(undefined8 *)(param_1 + 0xa8);
          local_98[0] = 0;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_68);
          FUN_00cbd7c0(auStack_138,local_98);
          FUN_007da5dc(uVar20,auStack_138);
          uVar20 = FUN_01f7c4e8(*(undefined8 *)puVar9);
          FUN_007e3854(uVar20,lVar14,uVar18);
          if ((ushort)bVar2 < *(ushort *)(*(long *)puVar9 + 0x50)) {
            *(undefined1 *)(*(long *)(param_1 + 0x788) + uVar18) = 1;
          }
          *(ushort *)(lVar14 + 0xf0) = uVar5;
          if (*(ushort *)(param_1 + 0x790) <= uVar5) {
            *(ushort *)(param_1 + 0x790) = uVar5 + 1;
          }
          FUN_007e05c4(*(undefined8 *)PTR_DAT_047d11a0,lVar14,uVar18);
          *(ushort *)(param_1 + 0xde) = uVar7 >> 8 | uVar7 << 8;
          goto LAB_007d7770;
        default:
          uVar20 = *(undefined8 *)(param_1 + 0xa8);
          local_98[0] = 0x10408;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_68);
          FUN_00cbd7c0(auStack_178,local_98);
          puVar17 = auStack_178;
          break;
        case '\x06':
          uVar20 = *(undefined8 *)(param_1 + 0xa8);
          local_98[0] = 0x643f;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_68);
          FUN_00cbd7c0(auStack_148,local_98);
          puVar17 = auStack_148;
          break;
        case '\a':
          uVar20 = *(undefined8 *)(param_1 + 0xa8);
          local_98[0] = 0x6442;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_68);
          FUN_00cbd7c0(auStack_168,local_98);
          puVar17 = auStack_168;
          break;
        case '\b':
          uVar20 = *(undefined8 *)(param_1 + 0xa8);
          local_98[0] = 0x6443;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_98 | 4),(Result *)local_68);
          FUN_00cbd7c0(auStack_158,local_98);
          puVar17 = auStack_158;
        }
        FUN_007da5dc(uVar20,puVar17);
      }
LAB_007d7770:
      FUN_007e51d0(local_128);
      return;
    case '\x04':
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      local_128[0] = 0x6c3d;
      local_88[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_128 | 4),(Result *)local_88);
      FUN_00cbd7c0(auStack_d8,local_128);
      puVar17 = auStack_d8;
      break;
    case '\x05':
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      local_128[0] = 0x647a;
      local_88[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_128 | 4),(Result *)local_88);
      FUN_00cbd7c0(auStack_c8,local_128);
      puVar17 = auStack_c8;
      break;
    case '\t':
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      local_128[0] = 0x647c;
      local_88[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_128 | 4),(Result *)local_88);
      FUN_00cbd7c0(auStack_e8,local_128);
      puVar17 = auStack_e8;
    }
  }
  FUN_007da5dc(uVar20,puVar17);
  return;
}


