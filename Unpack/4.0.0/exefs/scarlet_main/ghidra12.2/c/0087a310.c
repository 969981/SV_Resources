/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087a310; name: FUN_0087a310
 */


void FUN_0087a310(long param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 8) == '\0')) {
    return;
  }
  memcpy((void *)(param_1 + 0x30),param_2,0x270);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),param_1 + 0x490);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),param_1 + 0x4a0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x70),param_1 + 0x4b0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
               *(undefined4 *)(param_1 + 0x84),param_1 + 0x4c0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
               *(undefined4 *)(param_1 + 0x98),param_1 + 0x4d0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
               *(undefined4 *)(param_1 + 0xac),param_1 + 0x4e0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
               *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
               *(undefined4 *)(param_1 + 0xe0),param_1 + 0x390);
  FUN_0087b010(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),
               *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0),
               *(undefined4 *)(param_1 + 0xf4),param_1 + 0x3a0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104),
               *(undefined4 *)(param_1 + 0x108),param_1 + 0x3b0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x110),
               *(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
               *(undefined4 *)(param_1 + 0x11c),param_1 + 0x3c0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c),
               *(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),
               *(undefined4 *)(param_1 + 0x148),param_1 + 0x3d0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),
               *(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),
               *(undefined4 *)(param_1 + 0x15c),param_1 + 0x3e0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164),
               *(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c),
               *(undefined4 *)(param_1 + 0x170),param_1 + 0x3f0);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178),
               *(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x180),
               *(undefined4 *)(param_1 + 0x184),param_1 + 0x400);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a4),
               *(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac),
               *(undefined4 *)(param_1 + 0x1b0),param_1 + 0x410);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_1 + 0x1b8),
               *(undefined4 *)(param_1 + 0x1bc),*(undefined4 *)(param_1 + 0x1c0),
               *(undefined4 *)(param_1 + 0x1c4),param_1 + 0x420);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),
               *(undefined4 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d4),
               *(undefined4 *)(param_1 + 0x1d8),param_1 + 0x430);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1e0),
               *(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
               *(undefined4 *)(param_1 + 0x1ec),param_1 + 0x440);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),
               *(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214),
               *(undefined4 *)(param_1 + 0x218),param_1 + 0x450);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x220),
               *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x228),
               *(undefined4 *)(param_1 + 0x22c),param_1 + 0x460);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),
               *(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c),
               *(undefined4 *)(param_1 + 0x240),param_1 + 0x470);
  FUN_0087b010(*(undefined4 *)(param_1 + 0x244),*(undefined4 *)(param_1 + 0x248),
               *(undefined4 *)(param_1 + 0x24c),*(undefined4 *)(param_1 + 0x250),
               *(undefined4 *)(param_1 + 0x254),param_1 + 0x480);
  lVar5 = *(long *)(param_1 + 0x4f0);
  if ((lVar5 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar3 = 0;
    uVar1 = *(uint *)(param_1 + 0x34);
    do {
      if (uVar1 < 6) {
        memset((void *)(lVar5 + uVar3 * 0x170 + (ulong)uVar1 * 0x10 + 0x104),0,
               (ulong)(uVar1 * -0x10 + 0x60));
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
      if (*(uint *)(param_1 + 0xb4) < 4) {
        memset((void *)(lVar5 + uVar3 * 0x170 + uVar2 * 0x40 + 4),0,uVar2 * -0x40 + 0x100);
        uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
        if (*(uint *)(param_1 + 0xb4) != 0) goto LAB_0087a5ec;
      }
      else {
LAB_0087a5ec:
        uVar6 = 0;
        lVar5 = lVar5 + uVar3 * 0x170 + 4;
        puVar4 = (uint *)(param_1 + 0xbc);
        do {
          uVar1 = *puVar4;
          if (uVar1 < 4) {
            memset((void *)(lVar5 + (ulong)uVar1 * 0x10),0,(ulong)(uVar1 * -0x10 + 0x40));
            uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x40;
          puVar4 = puVar4 + 0x1a;
        } while (uVar6 < uVar2);
      }
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 0xc) <= uVar3) break;
      lVar5 = *(long *)(param_1 + 0x4f0);
      uVar1 = *(uint *)(param_1 + 0x34);
    } while( true );
  }
  lVar5 = *(long *)(param_1 + 0x4f8);
  if (lVar5 == 0) goto LAB_0087a7a4;
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 < 6) {
    memset((void *)(lVar5 + (ulong)uVar1 * 0x10 + 0x104),0,(ulong)(uVar1 * -0x10 + 0x60));
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
  if (*(uint *)(param_1 + 0xb4) < 4) {
    memset((void *)(lVar5 + uVar3 * 0x40 + 4),0,uVar3 * -0x40 + 0x100);
    uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
    if (*(uint *)(param_1 + 0xb4) != 0) goto LAB_0087a6b4;
  }
  else {
LAB_0087a6b4:
    uVar2 = 0;
    lVar5 = lVar5 + 4;
    puVar4 = (uint *)(param_1 + 0xbc);
    do {
      uVar1 = *puVar4;
      if (uVar1 < 4) {
        memset((void *)(lVar5 + (ulong)uVar1 * 0x10),0,(ulong)(uVar1 * -0x10 + 0x40));
        uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
      puVar4 = puVar4 + 0x1a;
    } while (uVar2 < uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  lVar5 = *(long *)(param_1 + 0x4f8);
  if (uVar1 < 6) {
    memset((void *)(lVar5 + (ulong)uVar1 * 0x10 + 0x274),0,(ulong)(uVar1 * -0x10 + 0x60));
    uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
  }
  if ((uint)uVar3 < 4) {
    memset((void *)(lVar5 + uVar3 * 0x40 + 0x174),0,(ulong)((uint)uVar3 * -0x40 + 0x100));
    uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
    if (*(uint *)(param_1 + 0xb4) == 0) goto LAB_0087a7a4;
  }
  uVar2 = 0;
  lVar5 = lVar5 + 0x174;
  puVar4 = (uint *)(param_1 + 0xbc);
  do {
    uVar1 = *puVar4;
    if (uVar1 < 4) {
      memset((void *)(lVar5 + (ulong)uVar1 * 0x10),0,(ulong)(uVar1 * -0x10 + 0x40));
      uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
    }
    uVar2 = uVar2 + 1;
    lVar5 = lVar5 + 0x40;
    puVar4 = puVar4 + 0x1a;
  } while (uVar2 < uVar3);
LAB_0087a7a4:
  lVar5 = *(long *)(param_1 + 0x500);
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x510) == 0)) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 0x34);
  do {
    if (uVar1 < 6) {
      memset((void *)(lVar5 + uVar3 * 0x170 + (ulong)uVar1 * 0x10 + 0x104),0,
             (ulong)(uVar1 * -0x10 + 0x60));
    }
    uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
    if (*(uint *)(param_1 + 0xb4) < 4) {
      memset((void *)(lVar5 + uVar3 * 0x170 + uVar2 * 0x40 + 4),0,uVar2 * -0x40 + 0x100);
      uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
      if (*(uint *)(param_1 + 0xb4) != 0) goto LAB_0087a81c;
    }
    else {
LAB_0087a81c:
      uVar6 = 0;
      lVar5 = lVar5 + uVar3 * 0x170 + 4;
      puVar4 = (uint *)(param_1 + 0xbc);
      do {
        uVar1 = *puVar4;
        if (uVar1 < 4) {
          memset((void *)(lVar5 + (ulong)uVar1 * 0x10),0,(ulong)(uVar1 * -0x10 + 0x40));
          uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x40;
        puVar4 = puVar4 + 0x1a;
      } while (uVar6 < uVar2);
    }
    uVar3 = uVar3 + 1;
    if (*(uint *)(param_1 + 0x510) <= uVar3) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x500);
    uVar1 = *(uint *)(param_1 + 0x34);
  } while( true );
}


