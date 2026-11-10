/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1eb54; name: FUN_01e1eb54
 */


int FUN_01e1eb54(long param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  
  if (*(char *)(param_1 + 0x570) != '\0') {
    lVar5 = *(long *)(param_1 + 0x578);
    lVar18 = *(long *)(param_1 + 0x580) - lVar5;
    if (lVar18 != 0) {
      uVar6 = 0;
      while (*(int *)(lVar5 + uVar6 * 0x2dc + 4) != param_3) {
        uVar6 = (ulong)((int)uVar6 + 1);
        if ((ulong)((lVar18 >> 2) * 0x6fe99e1395aedd07) <= uVar6) {
          return -1;
        }
      }
      if ((-1 < (int)uVar6) && (param_4 - 1U < 0xc)) {
        lVar18 = lVar5 + uVar6 * 0x2dc;
        piVar7 = (int *)(lVar18 + 0xc);
        piVar1 = (int *)(lVar18 + 0x10);
        piVar4 = (int *)(lVar18 + 0x14);
        piVar3 = (int *)(lVar18 + 0x18);
        piVar2 = (int *)(lVar18 + 0x1c);
        piVar13 = (int *)(lVar18 + 0x20);
        piVar17 = (int *)(lVar18 + 0x24);
        piVar16 = (int *)(lVar18 + 0x28);
        piVar15 = (int *)(lVar18 + 0x2c);
        piVar14 = (int *)(lVar18 + 0x30);
        piVar8 = (int *)(lVar18 + 0x34);
        piVar12 = (int *)(lVar18 + 0x38);
        piVar11 = (int *)(lVar18 + 0x3c);
        piVar10 = (int *)(lVar18 + 0x40);
        piVar9 = (int *)(lVar18 + 0x44);
        switch(param_4) {
        case 2:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x80);
          piVar8 = (int *)(lVar5 + 0x70);
          piVar7 = (int *)(lVar5 + 0x48);
          piVar10 = (int *)(lVar5 + 0x7c);
          piVar11 = (int *)(lVar5 + 0x78);
          piVar12 = (int *)(lVar5 + 0x74);
          piVar14 = (int *)(lVar5 + 0x6c);
          piVar13 = (int *)(lVar5 + 0x5c);
          piVar15 = (int *)(lVar5 + 0x68);
          piVar16 = (int *)(lVar5 + 100);
          piVar17 = (int *)(lVar5 + 0x60);
          piVar2 = (int *)(lVar5 + 0x58);
          piVar3 = (int *)(lVar5 + 0x54);
          piVar4 = (int *)(lVar5 + 0x50);
          piVar1 = (int *)(lVar5 + 0x4c);
          break;
        case 3:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0xbc);
          piVar8 = (int *)(lVar5 + 0xac);
          piVar7 = (int *)(lVar5 + 0x84);
          piVar10 = (int *)(lVar5 + 0xb8);
          piVar11 = (int *)(lVar5 + 0xb4);
          piVar12 = (int *)(lVar5 + 0xb0);
          piVar14 = (int *)(lVar5 + 0xa8);
          piVar13 = (int *)(lVar5 + 0x98);
          piVar15 = (int *)(lVar5 + 0xa4);
          piVar16 = (int *)(lVar5 + 0xa0);
          piVar17 = (int *)(lVar5 + 0x9c);
          piVar2 = (int *)(lVar5 + 0x94);
          piVar3 = (int *)(lVar5 + 0x90);
          piVar4 = (int *)(lVar5 + 0x8c);
          piVar1 = (int *)(lVar5 + 0x88);
          break;
        case 4:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0xf8);
          piVar8 = (int *)(lVar5 + 0xe8);
          piVar7 = (int *)(lVar5 + 0xc0);
          piVar10 = (int *)(lVar5 + 0xf4);
          piVar11 = (int *)(lVar5 + 0xf0);
          piVar12 = (int *)(lVar5 + 0xec);
          piVar14 = (int *)(lVar5 + 0xe4);
          piVar13 = (int *)(lVar5 + 0xd4);
          piVar15 = (int *)(lVar5 + 0xe0);
          piVar16 = (int *)(lVar5 + 0xdc);
          piVar17 = (int *)(lVar5 + 0xd8);
          piVar2 = (int *)(lVar5 + 0xd0);
          piVar3 = (int *)(lVar5 + 0xcc);
          piVar4 = (int *)(lVar5 + 200);
          piVar1 = (int *)(lVar5 + 0xc4);
          break;
        case 5:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x134);
          piVar8 = (int *)(lVar5 + 0x124);
          piVar7 = (int *)(lVar5 + 0xfc);
          piVar10 = (int *)(lVar5 + 0x130);
          piVar11 = (int *)(lVar5 + 300);
          piVar12 = (int *)(lVar5 + 0x128);
          piVar14 = (int *)(lVar5 + 0x120);
          piVar13 = (int *)(lVar5 + 0x110);
          piVar15 = (int *)(lVar5 + 0x11c);
          piVar16 = (int *)(lVar5 + 0x118);
          piVar17 = (int *)(lVar5 + 0x114);
          piVar2 = (int *)(lVar5 + 0x10c);
          piVar3 = (int *)(lVar5 + 0x108);
          piVar4 = (int *)(lVar5 + 0x104);
          piVar1 = (int *)(lVar5 + 0x100);
          break;
        case 6:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x170);
          piVar8 = (int *)(lVar5 + 0x160);
          piVar7 = (int *)(lVar5 + 0x138);
          piVar10 = (int *)(lVar5 + 0x16c);
          piVar11 = (int *)(lVar5 + 0x168);
          piVar12 = (int *)(lVar5 + 0x164);
          piVar14 = (int *)(lVar5 + 0x15c);
          piVar13 = (int *)(lVar5 + 0x14c);
          piVar15 = (int *)(lVar5 + 0x158);
          piVar16 = (int *)(lVar5 + 0x154);
          piVar17 = (int *)(lVar5 + 0x150);
          piVar2 = (int *)(lVar5 + 0x148);
          piVar3 = (int *)(lVar5 + 0x144);
          piVar4 = (int *)(lVar5 + 0x140);
          piVar1 = (int *)(lVar5 + 0x13c);
          break;
        case 7:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x1ac);
          piVar8 = (int *)(lVar5 + 0x19c);
          piVar7 = (int *)(lVar5 + 0x174);
          piVar10 = (int *)(lVar5 + 0x1a8);
          piVar11 = (int *)(lVar5 + 0x1a4);
          piVar12 = (int *)(lVar5 + 0x1a0);
          piVar14 = (int *)(lVar5 + 0x198);
          piVar13 = (int *)(lVar5 + 0x188);
          piVar15 = (int *)(lVar5 + 0x194);
          piVar16 = (int *)(lVar5 + 400);
          piVar17 = (int *)(lVar5 + 0x18c);
          piVar2 = (int *)(lVar5 + 0x184);
          piVar3 = (int *)(lVar5 + 0x180);
          piVar4 = (int *)(lVar5 + 0x17c);
          piVar1 = (int *)(lVar5 + 0x178);
          break;
        case 8:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x1e8);
          piVar8 = (int *)(lVar5 + 0x1d8);
          piVar7 = (int *)(lVar5 + 0x1b0);
          piVar10 = (int *)(lVar5 + 0x1e4);
          piVar11 = (int *)(lVar5 + 0x1e0);
          piVar12 = (int *)(lVar5 + 0x1dc);
          piVar14 = (int *)(lVar5 + 0x1d4);
          piVar13 = (int *)(lVar5 + 0x1c4);
          piVar15 = (int *)(lVar5 + 0x1d0);
          piVar16 = (int *)(lVar5 + 0x1cc);
          piVar17 = (int *)(lVar5 + 0x1c8);
          piVar2 = (int *)(lVar5 + 0x1c0);
          piVar3 = (int *)(lVar5 + 0x1bc);
          piVar4 = (int *)(lVar5 + 0x1b8);
          piVar1 = (int *)(lVar5 + 0x1b4);
          break;
        case 9:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x224);
          piVar8 = (int *)(lVar5 + 0x214);
          piVar7 = (int *)(lVar5 + 0x1ec);
          piVar10 = (int *)(lVar5 + 0x220);
          piVar11 = (int *)(lVar5 + 0x21c);
          piVar12 = (int *)(lVar5 + 0x218);
          piVar14 = (int *)(lVar5 + 0x210);
          piVar13 = (int *)(lVar5 + 0x200);
          piVar15 = (int *)(lVar5 + 0x20c);
          piVar16 = (int *)(lVar5 + 0x208);
          piVar17 = (int *)(lVar5 + 0x204);
          piVar2 = (int *)(lVar5 + 0x1fc);
          piVar3 = (int *)(lVar5 + 0x1f8);
          piVar4 = (int *)(lVar5 + 500);
          piVar1 = (int *)(lVar5 + 0x1f0);
          break;
        case 10:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x260);
          piVar8 = (int *)(lVar5 + 0x250);
          piVar7 = (int *)(lVar5 + 0x228);
          piVar10 = (int *)(lVar5 + 0x25c);
          piVar11 = (int *)(lVar5 + 600);
          piVar12 = (int *)(lVar5 + 0x254);
          piVar14 = (int *)(lVar5 + 0x24c);
          piVar13 = (int *)(lVar5 + 0x23c);
          piVar15 = (int *)(lVar5 + 0x248);
          piVar16 = (int *)(lVar5 + 0x244);
          piVar17 = (int *)(lVar5 + 0x240);
          piVar2 = (int *)(lVar5 + 0x238);
          piVar3 = (int *)(lVar5 + 0x234);
          piVar4 = (int *)(lVar5 + 0x230);
          piVar1 = (int *)(lVar5 + 0x22c);
          break;
        case 0xb:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x29c);
          piVar8 = (int *)(lVar5 + 0x28c);
          piVar7 = (int *)(lVar5 + 0x264);
          piVar10 = (int *)(lVar5 + 0x298);
          piVar11 = (int *)(lVar5 + 0x294);
          piVar12 = (int *)(lVar5 + 0x290);
          piVar14 = (int *)(lVar5 + 0x288);
          piVar13 = (int *)(lVar5 + 0x278);
          piVar15 = (int *)(lVar5 + 0x284);
          piVar16 = (int *)(lVar5 + 0x280);
          piVar17 = (int *)(lVar5 + 0x27c);
          piVar2 = (int *)(lVar5 + 0x274);
          piVar3 = (int *)(lVar5 + 0x270);
          piVar4 = (int *)(lVar5 + 0x26c);
          piVar1 = (int *)(lVar5 + 0x268);
          break;
        case 0xc:
          lVar5 = lVar5 + uVar6 * 0x2dc;
          piVar9 = (int *)(lVar5 + 0x2d8);
          piVar8 = (int *)(lVar5 + 0x2c8);
          piVar7 = (int *)(lVar5 + 0x2a0);
          piVar10 = (int *)(lVar5 + 0x2d4);
          piVar11 = (int *)(lVar5 + 0x2d0);
          piVar12 = (int *)(lVar5 + 0x2cc);
          piVar14 = (int *)(lVar5 + 0x2c4);
          piVar13 = (int *)(lVar5 + 0x2b4);
          piVar15 = (int *)(lVar5 + 0x2c0);
          piVar16 = (int *)(lVar5 + 700);
          piVar17 = (int *)(lVar5 + 0x2b8);
          piVar2 = (int *)(lVar5 + 0x2b0);
          piVar3 = (int *)(lVar5 + 0x2ac);
          piVar4 = (int *)(lVar5 + 0x2a8);
          piVar1 = (int *)(lVar5 + 0x2a4);
        }
        if (param_2 != 1) {
          if (param_2 == 3) {
            piVar1 = piVar12;
            piVar2 = piVar9;
            piVar3 = piVar10;
            piVar4 = piVar11;
            piVar7 = piVar8;
          }
          else {
            piVar1 = piVar17;
            piVar2 = piVar14;
            piVar3 = piVar15;
            piVar4 = piVar16;
            piVar7 = piVar13;
            if (param_2 != 2) {
              return -1;
            }
          }
        }
        if (*piVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)(param_5 != 0);
          if (param_5 == 0) {
            return *piVar7;
          }
        }
        if (*piVar1 != 0) {
          if (uVar6 == param_5) {
            return *piVar1;
          }
          uVar6 = uVar6 + 1;
        }
        if (*piVar4 != 0) {
          if (uVar6 == param_5) {
            return *piVar4;
          }
          uVar6 = uVar6 + 1;
        }
        if (*piVar3 != 0) {
          if (uVar6 == param_5) {
            return *piVar3;
          }
          uVar6 = uVar6 + 1;
        }
        if ((*piVar2 != 0) && (uVar6 == param_5)) {
          return *piVar2;
        }
      }
    }
  }
  return -1;
}


