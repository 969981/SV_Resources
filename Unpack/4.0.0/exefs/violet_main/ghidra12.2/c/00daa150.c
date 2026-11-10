/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00daa150; name: FUN_00daa150
 */


void FUN_00daa150(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar17 = (int)param_2;
    fVar18 = *(float *)(param_1 + ((long)((ulong)(iVar17 + param_3) << 0x20) >> 0x21) * 0x80 + 0x20)
    ;
    uVar12 = (ulong)param_3;
    do {
      uVar13 = -(param_2 >> 0x1f) & 0xffffff8000000000 | param_2 << 7;
      do {
        fVar20 = *(float *)(param_1 + uVar13 + 0x20);
        uVar14 = (uint)param_2;
        param_2 = (ulong)(uVar14 + 1);
        uVar13 = uVar13 + 0x80;
      } while (fVar20 < fVar18);
      lVar1 = param_1 + uVar13;
      uVar13 = -(uVar12 >> 0x1f) & 0xffffff8000000000 | uVar12 << 7;
      uVar12 = (ulong)((int)uVar12 + 1);
      do {
        lVar2 = param_1 + uVar13;
        uVar13 = uVar13 - 0x80;
        fVar19 = *(float *)(lVar2 + 0x20);
        iVar11 = (int)uVar12;
        uVar10 = iVar11 - 1;
        uVar12 = (ulong)uVar10;
      } while (fVar18 < fVar19);
      if ((int)uVar14 <= (int)uVar10) {
        if (uVar14 != uVar10) {
          lVar2 = param_1 + uVar13;
          uVar22 = *(undefined8 *)(lVar2 + 0x88);
          uVar21 = *(undefined8 *)(lVar2 + 0x80);
          uVar24 = *(undefined8 *)(lVar2 + 0x98);
          uVar23 = *(undefined8 *)(lVar2 + 0x90);
          local_50 = (undefined4)*(undefined8 *)(lVar2 + 0xa4);
          uStack_4c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0xa4) >> 0x20);
          uStack_48 = (undefined4)*(undefined8 *)(lVar2 + 0xac);
          local_44 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0xac) >> 0x20);
          uVar3 = *(undefined4 *)(lVar2 + 0xb8);
          uVar6 = *(undefined1 *)(lVar2 + 0xbc);
          uVar8 = *(undefined2 *)(lVar2 + 0xc0);
          uStack_58 = (undefined6)((ulong)*(undefined8 *)(lVar2 + 200) >> 0x10);
          uStack_60 = (undefined6)*(undefined8 *)(lVar2 + 0xc2);
          local_5a = (undefined2)((ulong)*(undefined8 *)(lVar2 + 0xc2) >> 0x30);
          local_68 = *(undefined4 *)(lVar2 + 0xd8);
          local_70 = *(undefined8 *)(lVar2 + 0xd0);
          uVar4 = *(undefined4 *)(lVar2 + 0xe0);
          uVar7 = *(undefined1 *)(lVar2 + 0xe4);
          uVar9 = *(undefined2 *)(lVar2 + 0xe8);
          uStack_78 = (undefined6)((ulong)*(undefined8 *)(lVar2 + 0xf0) >> 0x10);
          uStack_80 = (undefined6)*(undefined8 *)(lVar2 + 0xea);
          local_7a = (undefined2)((ulong)*(undefined8 *)(lVar2 + 0xea) >> 0x30);
          uVar16 = *(undefined8 *)(lVar1 + -0x80);
          *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar1 + -0x78);
          *(undefined8 *)(lVar2 + 0x80) = uVar16;
          uVar25 = *(undefined8 *)(lVar1 + -0x68);
          uVar16 = *(undefined8 *)(lVar1 + -0x70);
          *(float *)(lVar2 + 0xa0) = fVar20;
          uVar15 = *(undefined8 *)(lVar2 + 0xf8);
          *(undefined8 *)(lVar2 + 0x98) = uVar25;
          *(undefined8 *)(lVar2 + 0x90) = uVar16;
          uVar16 = *(undefined8 *)(lVar1 + -0x58);
          *(undefined4 *)(lVar2 + 0xb0) = *(undefined4 *)(lVar1 + -0x50);
          *(undefined8 *)(lVar2 + 0xa8) = uVar16;
          *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(lVar1 + -0x48);
          *(undefined1 *)(lVar2 + 0xbc) = *(undefined1 *)(lVar1 + -0x44);
          *(undefined2 *)(lVar2 + 0xc0) = *(undefined2 *)(lVar1 + -0x40);
          uVar16 = *(undefined8 *)(lVar1 + -0x3c);
          *(undefined4 *)(lVar2 + 0xcc) = *(undefined4 *)(lVar1 + -0x34);
          *(undefined8 *)(lVar2 + 0xc4) = uVar16;
          uVar5 = *(undefined4 *)(lVar1 + -0x28);
          *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar1 + -0x30);
          *(undefined4 *)(lVar2 + 0xd8) = uVar5;
          *(undefined4 *)(lVar2 + 0xe0) = *(undefined4 *)(lVar1 + -0x20);
          *(undefined1 *)(lVar2 + 0xe4) = *(undefined1 *)(lVar1 + -0x1c);
          *(undefined2 *)(lVar2 + 0xe8) = *(undefined2 *)(lVar1 + -0x18);
          uVar16 = *(undefined8 *)(lVar1 + -0x14);
          *(undefined4 *)(lVar2 + 0xf4) = *(undefined4 *)(lVar1 + -0xc);
          *(undefined8 *)(lVar2 + 0xec) = uVar16;
          *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(lVar1 + -8);
          *(undefined8 *)(lVar1 + -0x78) = uVar22;
          *(undefined8 *)(lVar1 + -0x80) = uVar21;
          *(undefined8 *)(lVar1 + -0x68) = uVar24;
          *(undefined8 *)(lVar1 + -0x70) = uVar23;
          *(float *)(lVar1 + -0x60) = fVar19;
          *(undefined4 *)(lVar1 + -0x50) = local_44;
          *(ulong *)(lVar1 + -0x58) = CONCAT44(uStack_48,uStack_4c);
          *(undefined4 *)(lVar1 + -0x48) = uVar3;
          *(undefined1 *)(lVar1 + -0x44) = uVar6;
          *(undefined2 *)(lVar1 + -0x40) = uVar8;
          uVar16 = *(undefined8 *)((ulong)&uStack_60 | 2);
          *(undefined4 *)(lVar1 + -0x34) =
               *(undefined4 *)((undefined8 *)((ulong)&uStack_60 | 2) + 1);
          *(undefined8 *)(lVar1 + -0x3c) = uVar16;
          *(undefined4 *)(lVar1 + -0x28) = local_68;
          *(undefined8 *)(lVar1 + -0x30) = local_70;
          *(undefined4 *)(lVar1 + -0x20) = uVar4;
          *(undefined1 *)(lVar1 + -0x1c) = uVar7;
          *(undefined2 *)(lVar1 + -0x18) = uVar9;
          uVar16 = *(undefined8 *)((ulong)&uStack_80 | 2);
          *(undefined4 *)(lVar1 + -0xc) = *(undefined4 *)((undefined8 *)((ulong)&uStack_80 | 2) + 1)
          ;
          *(undefined8 *)(lVar1 + -0x14) = uVar16;
          *(undefined8 *)(lVar1 + -8) = uVar15;
        }
        uVar12 = (ulong)(iVar11 - 2);
        uVar14 = uVar14 + 1;
      }
      param_2 = (ulong)uVar14;
    } while ((int)uVar14 <= (int)uVar12);
    if (iVar17 < (int)uVar12) {
      FUN_00daa150(param_1);
    }
  } while ((int)uVar14 < (int)param_3);
  return;
}


