/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1e6dc; name: FUN_01e1e6dc
 */


char FUN_01e1e6dc(long param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  
  if (*(char *)(param_1 + 0x570) != '\0') {
    lVar7 = *(long *)(param_1 + 0x578);
    lVar8 = *(long *)(param_1 + 0x580) - lVar7;
    if (lVar8 != 0) {
      uVar9 = 0;
      do {
        if (*(int *)(lVar7 + uVar9 * 0x2dc + 4) == param_3) {
          if ((int)uVar9 < 0) {
            return '\0';
          }
          if (0xb < param_4 - 1U) {
            return '\0';
          }
          lVar8 = lVar7 + uVar9 * 0x2dc;
          piVar10 = (int *)(lVar8 + 0xc);
          piVar6 = (int *)(lVar8 + 0x10);
          piVar5 = (int *)(lVar8 + 0x14);
          piVar4 = (int *)(lVar8 + 0x18);
          piVar3 = (int *)(lVar8 + 0x1c);
          piVar16 = (int *)(lVar8 + 0x20);
          piVar20 = (int *)(lVar8 + 0x24);
          piVar19 = (int *)(lVar8 + 0x28);
          piVar18 = (int *)(lVar8 + 0x2c);
          piVar17 = (int *)(lVar8 + 0x30);
          piVar11 = (int *)(lVar8 + 0x34);
          piVar15 = (int *)(lVar8 + 0x38);
          piVar14 = (int *)(lVar8 + 0x3c);
          piVar13 = (int *)(lVar8 + 0x40);
          piVar12 = (int *)(lVar8 + 0x44);
          switch(param_4) {
          case 2:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x80);
            piVar11 = (int *)(lVar7 + 0x70);
            piVar10 = (int *)(lVar7 + 0x48);
            piVar13 = (int *)(lVar7 + 0x7c);
            piVar14 = (int *)(lVar7 + 0x78);
            piVar15 = (int *)(lVar7 + 0x74);
            piVar17 = (int *)(lVar7 + 0x6c);
            piVar16 = (int *)(lVar7 + 0x5c);
            piVar18 = (int *)(lVar7 + 0x68);
            piVar19 = (int *)(lVar7 + 100);
            piVar20 = (int *)(lVar7 + 0x60);
            piVar3 = (int *)(lVar7 + 0x58);
            piVar4 = (int *)(lVar7 + 0x54);
            piVar5 = (int *)(lVar7 + 0x50);
            piVar6 = (int *)(lVar7 + 0x4c);
            break;
          case 3:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0xbc);
            piVar11 = (int *)(lVar7 + 0xac);
            piVar10 = (int *)(lVar7 + 0x84);
            piVar13 = (int *)(lVar7 + 0xb8);
            piVar14 = (int *)(lVar7 + 0xb4);
            piVar15 = (int *)(lVar7 + 0xb0);
            piVar17 = (int *)(lVar7 + 0xa8);
            piVar16 = (int *)(lVar7 + 0x98);
            piVar18 = (int *)(lVar7 + 0xa4);
            piVar19 = (int *)(lVar7 + 0xa0);
            piVar20 = (int *)(lVar7 + 0x9c);
            piVar3 = (int *)(lVar7 + 0x94);
            piVar4 = (int *)(lVar7 + 0x90);
            piVar5 = (int *)(lVar7 + 0x8c);
            piVar6 = (int *)(lVar7 + 0x88);
            break;
          case 4:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0xf8);
            piVar11 = (int *)(lVar7 + 0xe8);
            piVar10 = (int *)(lVar7 + 0xc0);
            piVar13 = (int *)(lVar7 + 0xf4);
            piVar14 = (int *)(lVar7 + 0xf0);
            piVar15 = (int *)(lVar7 + 0xec);
            piVar17 = (int *)(lVar7 + 0xe4);
            piVar16 = (int *)(lVar7 + 0xd4);
            piVar18 = (int *)(lVar7 + 0xe0);
            piVar19 = (int *)(lVar7 + 0xdc);
            piVar20 = (int *)(lVar7 + 0xd8);
            piVar3 = (int *)(lVar7 + 0xd0);
            piVar4 = (int *)(lVar7 + 0xcc);
            piVar5 = (int *)(lVar7 + 200);
            piVar6 = (int *)(lVar7 + 0xc4);
            break;
          case 5:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x134);
            piVar11 = (int *)(lVar7 + 0x124);
            piVar10 = (int *)(lVar7 + 0xfc);
            piVar13 = (int *)(lVar7 + 0x130);
            piVar14 = (int *)(lVar7 + 300);
            piVar15 = (int *)(lVar7 + 0x128);
            piVar17 = (int *)(lVar7 + 0x120);
            piVar16 = (int *)(lVar7 + 0x110);
            piVar18 = (int *)(lVar7 + 0x11c);
            piVar19 = (int *)(lVar7 + 0x118);
            piVar20 = (int *)(lVar7 + 0x114);
            piVar3 = (int *)(lVar7 + 0x10c);
            piVar4 = (int *)(lVar7 + 0x108);
            piVar5 = (int *)(lVar7 + 0x104);
            piVar6 = (int *)(lVar7 + 0x100);
            break;
          case 6:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x170);
            piVar11 = (int *)(lVar7 + 0x160);
            piVar10 = (int *)(lVar7 + 0x138);
            piVar13 = (int *)(lVar7 + 0x16c);
            piVar14 = (int *)(lVar7 + 0x168);
            piVar15 = (int *)(lVar7 + 0x164);
            piVar17 = (int *)(lVar7 + 0x15c);
            piVar16 = (int *)(lVar7 + 0x14c);
            piVar18 = (int *)(lVar7 + 0x158);
            piVar19 = (int *)(lVar7 + 0x154);
            piVar20 = (int *)(lVar7 + 0x150);
            piVar3 = (int *)(lVar7 + 0x148);
            piVar4 = (int *)(lVar7 + 0x144);
            piVar5 = (int *)(lVar7 + 0x140);
            piVar6 = (int *)(lVar7 + 0x13c);
            break;
          case 7:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x1ac);
            piVar11 = (int *)(lVar7 + 0x19c);
            piVar10 = (int *)(lVar7 + 0x174);
            piVar13 = (int *)(lVar7 + 0x1a8);
            piVar14 = (int *)(lVar7 + 0x1a4);
            piVar15 = (int *)(lVar7 + 0x1a0);
            piVar17 = (int *)(lVar7 + 0x198);
            piVar16 = (int *)(lVar7 + 0x188);
            piVar18 = (int *)(lVar7 + 0x194);
            piVar19 = (int *)(lVar7 + 400);
            piVar20 = (int *)(lVar7 + 0x18c);
            piVar3 = (int *)(lVar7 + 0x184);
            piVar4 = (int *)(lVar7 + 0x180);
            piVar5 = (int *)(lVar7 + 0x17c);
            piVar6 = (int *)(lVar7 + 0x178);
            break;
          case 8:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x1e8);
            piVar11 = (int *)(lVar7 + 0x1d8);
            piVar10 = (int *)(lVar7 + 0x1b0);
            piVar13 = (int *)(lVar7 + 0x1e4);
            piVar14 = (int *)(lVar7 + 0x1e0);
            piVar15 = (int *)(lVar7 + 0x1dc);
            piVar17 = (int *)(lVar7 + 0x1d4);
            piVar16 = (int *)(lVar7 + 0x1c4);
            piVar18 = (int *)(lVar7 + 0x1d0);
            piVar19 = (int *)(lVar7 + 0x1cc);
            piVar20 = (int *)(lVar7 + 0x1c8);
            piVar3 = (int *)(lVar7 + 0x1c0);
            piVar4 = (int *)(lVar7 + 0x1bc);
            piVar5 = (int *)(lVar7 + 0x1b8);
            piVar6 = (int *)(lVar7 + 0x1b4);
            break;
          case 9:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x224);
            piVar11 = (int *)(lVar7 + 0x214);
            piVar10 = (int *)(lVar7 + 0x1ec);
            piVar13 = (int *)(lVar7 + 0x220);
            piVar14 = (int *)(lVar7 + 0x21c);
            piVar15 = (int *)(lVar7 + 0x218);
            piVar17 = (int *)(lVar7 + 0x210);
            piVar16 = (int *)(lVar7 + 0x200);
            piVar18 = (int *)(lVar7 + 0x20c);
            piVar19 = (int *)(lVar7 + 0x208);
            piVar20 = (int *)(lVar7 + 0x204);
            piVar3 = (int *)(lVar7 + 0x1fc);
            piVar4 = (int *)(lVar7 + 0x1f8);
            piVar5 = (int *)(lVar7 + 500);
            piVar6 = (int *)(lVar7 + 0x1f0);
            break;
          case 10:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x260);
            piVar11 = (int *)(lVar7 + 0x250);
            piVar10 = (int *)(lVar7 + 0x228);
            piVar13 = (int *)(lVar7 + 0x25c);
            piVar14 = (int *)(lVar7 + 600);
            piVar15 = (int *)(lVar7 + 0x254);
            piVar17 = (int *)(lVar7 + 0x24c);
            piVar16 = (int *)(lVar7 + 0x23c);
            piVar18 = (int *)(lVar7 + 0x248);
            piVar19 = (int *)(lVar7 + 0x244);
            piVar20 = (int *)(lVar7 + 0x240);
            piVar3 = (int *)(lVar7 + 0x238);
            piVar4 = (int *)(lVar7 + 0x234);
            piVar5 = (int *)(lVar7 + 0x230);
            piVar6 = (int *)(lVar7 + 0x22c);
            break;
          case 0xb:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x29c);
            piVar11 = (int *)(lVar7 + 0x28c);
            piVar10 = (int *)(lVar7 + 0x264);
            piVar13 = (int *)(lVar7 + 0x298);
            piVar14 = (int *)(lVar7 + 0x294);
            piVar15 = (int *)(lVar7 + 0x290);
            piVar17 = (int *)(lVar7 + 0x288);
            piVar16 = (int *)(lVar7 + 0x278);
            piVar18 = (int *)(lVar7 + 0x284);
            piVar19 = (int *)(lVar7 + 0x280);
            piVar20 = (int *)(lVar7 + 0x27c);
            piVar3 = (int *)(lVar7 + 0x274);
            piVar4 = (int *)(lVar7 + 0x270);
            piVar5 = (int *)(lVar7 + 0x26c);
            piVar6 = (int *)(lVar7 + 0x268);
            break;
          case 0xc:
            lVar7 = lVar7 + uVar9 * 0x2dc;
            piVar12 = (int *)(lVar7 + 0x2d8);
            piVar11 = (int *)(lVar7 + 0x2c8);
            piVar10 = (int *)(lVar7 + 0x2a0);
            piVar13 = (int *)(lVar7 + 0x2d4);
            piVar14 = (int *)(lVar7 + 0x2d0);
            piVar15 = (int *)(lVar7 + 0x2cc);
            piVar17 = (int *)(lVar7 + 0x2c4);
            piVar16 = (int *)(lVar7 + 0x2b4);
            piVar18 = (int *)(lVar7 + 0x2c0);
            piVar19 = (int *)(lVar7 + 700);
            piVar20 = (int *)(lVar7 + 0x2b8);
            piVar3 = (int *)(lVar7 + 0x2b0);
            piVar4 = (int *)(lVar7 + 0x2ac);
            piVar5 = (int *)(lVar7 + 0x2a8);
            piVar6 = (int *)(lVar7 + 0x2a4);
          }
          if (param_2 != 1) {
            if (param_2 == 3) {
              piVar3 = piVar12;
              piVar4 = piVar13;
              piVar5 = piVar14;
              piVar6 = piVar15;
              piVar10 = piVar11;
            }
            else {
              piVar3 = piVar17;
              piVar4 = piVar18;
              piVar5 = piVar19;
              piVar6 = piVar20;
              piVar10 = piVar16;
              if (param_2 != 2) {
                return '\0';
              }
            }
          }
          cVar2 = '\x02';
          if (*piVar10 == 0) {
            cVar2 = '\x01';
          }
          cVar1 = *piVar10 != 0;
          if (*piVar6 != 0) {
            cVar1 = cVar2;
          }
          if (*piVar5 != 0) {
            cVar1 = cVar1 + '\x01';
          }
          if (*piVar4 != 0) {
            cVar1 = cVar1 + '\x01';
          }
          if (*piVar3 == 0) {
            return cVar1;
          }
          return cVar1 + '\x01';
        }
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < (ulong)((lVar8 >> 2) * 0x6fe99e1395aedd07));
    }
  }
  return '\0';
}


