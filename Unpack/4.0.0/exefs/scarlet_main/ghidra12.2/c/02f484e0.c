/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f484e0; name: FUN_02f484e0
 */


void FUN_02f484e0(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0xd8) = 0x14;
  uVar6 = *(uint *)(param_1 + 0x3c);
  bVar4 = cVar3 != '\0';
  uVar1 = uVar6 & 0x3ff | (uint)bVar4 << 10;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x3c) = uVar6 & 0xfffff800 | uVar1;
  *(undefined4 *)(param_1 + 0x88) = 10;
  *(uint *)(param_1 + 0xdc) =
       *(uint *)(param_1 + 0xdc) & 0xfffff800 |
       *(uint *)(param_1 + 0xdc) & 0x3ff | (uint)bVar4 << 10;
  uVar5 = (uint)bVar4;
  *(undefined4 *)(param_1 + 0x128) = 0x1e;
  *(uint *)(param_1 + 300) =
       *(uint *)(param_1 + 300) & 0xfffff800 | *(uint *)(param_1 + 300) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x178) = 0x28;
  *(uint *)(param_1 + 0x17c) =
       *(uint *)(param_1 + 0x17c) & 0xfffff800 | *(uint *)(param_1 + 0x17c) & 0x3ff | uVar5 << 10;
  uVar2 = *(uint *)(param_1 + 0x1cc);
  *(uint *)(param_1 + 0x1cc) = uVar2 & 0xfffff800 | uVar2 & 0x3ff | uVar5 << 10;
  *(uint *)(param_1 + 0x21c) =
       *(uint *)(param_1 + 0x21c) & 0xfffff800 | *(uint *)(param_1 + 0x21c) & 0x3ff | uVar5 << 10;
  uVar5 = (uint)bVar4;
  *(uint *)(param_1 + 0x26c) =
       *(uint *)(param_1 + 0x26c) & 0xfffff800 | *(uint *)(param_1 + 0x26c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x2b8) = 0x50;
  *(uint *)(param_1 + 700) =
       *(uint *)(param_1 + 700) & 0xfffff800 | *(uint *)(param_1 + 700) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x308) = 0x5a;
  *(uint *)(param_1 + 0x30c) =
       *(uint *)(param_1 + 0x30c) & 0xfffff800 | *(uint *)(param_1 + 0x30c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x358) = 100;
  *(uint *)(param_1 + 0x35c) =
       *(uint *)(param_1 + 0x35c) & 0xfffff800 | *(uint *)(param_1 + 0x35c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x3a8) = 0x6e;
  *(uint *)(param_1 + 0x3ac) =
       *(uint *)(param_1 + 0x3ac) & 0xfffff800 | *(uint *)(param_1 + 0x3ac) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x3f8) = 0x78;
  *(uint *)(param_1 + 0x3fc) =
       *(uint *)(param_1 + 0x3fc) & 0xfffff800 | *(uint *)(param_1 + 0x3fc) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x448) = 0x82;
  *(uint *)(param_1 + 0x44c) =
       *(uint *)(param_1 + 0x44c) & 0xfffff800 | *(uint *)(param_1 + 0x44c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x498) = 0x8c;
  *(uint *)(param_1 + 0x49c) =
       *(uint *)(param_1 + 0x49c) & 0xfffff800 | *(uint *)(param_1 + 0x49c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x4e8) = 0x96;
  uVar7 = (uint)bVar4;
  *(uint *)(param_1 + 0x4ec) =
       *(uint *)(param_1 + 0x4ec) & 0xfffff800 | *(uint *)(param_1 + 0x4ec) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x538) = 0xa0;
  *(uint *)(param_1 + 0x53c) =
       *(uint *)(param_1 + 0x53c) & 0xfffff800 | *(uint *)(param_1 + 0x53c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x588) = 0xaa;
  *(undefined4 *)(param_1 + 0x1c8) = 0x32;
  *(undefined4 *)(param_1 + 0x218) = 0x3c;
  *(undefined4 *)(param_1 + 0x268) = 0x46;
  uVar5 = *(uint *)(param_1 + 0x8c) & 0xfffff800 | *(uint *)(param_1 + 0x8c) & 0x3ff | uVar7 << 10;
  *(uint *)(param_1 + 0x3c) = uVar6 & 0xfffff000 | uVar1;
  *(uint *)(param_1 + 0x8c) = uVar5;
  *(uint *)(param_1 + 0x8c) = uVar5 & 0xfffeffbf;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | uVar7 << 10 | 0x21808;
  *(undefined4 *)(param_1 + 0x94) = 0x3e4ccccd;
  *(uint *)(param_1 + 0x58c) =
       *(uint *)(param_1 + 0x58c) & 0xfffff800 | *(uint *)(param_1 + 0x58c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x5d8) = 0xb4;
  *(uint *)(param_1 + 0x5dc) =
       *(uint *)(param_1 + 0x5dc) & 0xfffff800 | *(uint *)(param_1 + 0x5dc) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x628) = 0xbe;
  *(uint *)(param_1 + 0x62c) =
       *(uint *)(param_1 + 0x62c) & 0xfffff800 | *(uint *)(param_1 + 0x62c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x678) = 200;
  *(uint *)(param_1 + 0x67c) =
       *(uint *)(param_1 + 0x67c) & 0xfffff800 | *(uint *)(param_1 + 0x67c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x6c8) = 0xd2;
  *(uint *)(param_1 + 0x6cc) =
       *(uint *)(param_1 + 0x6cc) & 0xfffff800 | *(uint *)(param_1 + 0x6cc) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x718) = 0xdc;
  *(uint *)(param_1 + 0x71c) =
       *(uint *)(param_1 + 0x71c) & 0xfffff800 | *(uint *)(param_1 + 0x71c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x768) = 0xe6;
  *(uint *)(param_1 + 0x76c) =
       *(uint *)(param_1 + 0x76c) & 0xfffff800 | *(uint *)(param_1 + 0x76c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x7b8) = 0xf0;
  *(uint *)(param_1 + 0x7bc) =
       *(uint *)(param_1 + 0x7bc) & 0xfffff800 | *(uint *)(param_1 + 0x7bc) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x808) = 0xfa;
  *(uint *)(param_1 + 0x80c) =
       *(uint *)(param_1 + 0x80c) & 0xfffff800 | *(uint *)(param_1 + 0x80c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x858) = 0x104;
  *(uint *)(param_1 + 0x85c) =
       *(uint *)(param_1 + 0x85c) & 0xfffff800 | *(uint *)(param_1 + 0x85c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x8a8) = 0x10e;
  *(uint *)(param_1 + 0x8ac) =
       *(uint *)(param_1 + 0x8ac) & 0xfffff800 | *(uint *)(param_1 + 0x8ac) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x8f8) = 0x118;
  *(uint *)(param_1 + 0x8fc) =
       *(uint *)(param_1 + 0x8fc) & 0xfffff800 | *(uint *)(param_1 + 0x8fc) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x948) = 0x122;
  uVar6 = (uint)bVar4;
  *(uint *)(param_1 + 0x94c) =
       *(uint *)(param_1 + 0x94c) & 0xfffff800 | *(uint *)(param_1 + 0x94c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x998) = 300;
  *(uint *)(param_1 + 0x99c) =
       *(uint *)(param_1 + 0x99c) & 0xfffff800 | *(uint *)(param_1 + 0x99c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x9e8) = 0x136;
  uVar7 = (uint)bVar4 << 10;
  *(uint *)(param_1 + 0x9ec) =
       *(uint *)(param_1 + 0x9ec) & 0xfffff800 | *(uint *)(param_1 + 0x9ec) & 0x3ff | uVar6 << 10;
  memcpy((undefined4 *)(param_1 + 0xd8),(undefined4 *)(param_1 + 0x88),0x34);
  uVar5 = *(uint *)(param_1 + 0x130) | uVar6 << 10;
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x200;
  *(uint *)(param_1 + 0x130) = uVar5 | 0x20800;
  cVar3 = *param_2;
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) | uVar6 << 10 | 0x20a08;
  uVar1 = 0x20808;
  if (cVar3 != '\0') {
    uVar1 = 0x20880;
  }
  *(uint *)(param_1 + 0x130) = uVar1 | uVar5;
  *(uint *)(param_1 + 0x1cc) = uVar2 & 0xfffffbff;
  *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) | 0x20902;
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | uVar6 << 10 | 0x20880;
  memcpy((void *)(param_1 + 0x268),(void *)(param_1 + 0x1c8),0x34);
  *(uint *)(param_1 + 0x270) = *(uint *)(param_1 + 0x270) | 0x80;
  uVar1 = *(uint *)(param_1 + 0x2c0) | uVar6 << 10;
  *(uint *)(param_1 + 0x2c0) = uVar1 | 0x10040;
  if (param_2[1] != '\0') {
    *(uint *)(param_1 + 0x2c0) = uVar1 | 0x100c2;
  }
  *(undefined8 *)(param_1 + 0x2c4) = 0x33c23d70a;
  *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) & 0xfffffbff;
  *(undefined4 *)(param_1 + 0x2cc) = 3;
  *(undefined8 *)(param_1 + 0x318) = 0x400000004;
  *(undefined8 *)(param_1 + 0x368) = 0x400000004;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffbff | 0x180;
  *(uint *)(param_1 + 0x35c) = *(uint *)(param_1 + 0x35c) & 0xfffffbff;
  *(uint *)(param_1 + 0x3ac) = *(uint *)(param_1 + 0x3ac) & 0xfffffbff;
  *(uint *)(param_1 + 0x360) = *(uint *)(param_1 + 0x360) & 0xfffffbff | 0x80;
  *(uint *)(param_1 + 0x3b0) = *(uint *)(param_1 + 0x3b0) & 0xfffefa7f | 0x10180;
  *(undefined8 *)(param_1 + 0x3b8) = 0x300000003;
  memcpy((void *)(param_1 + 0x3f8),(void *)(param_1 + 0x3a8),0x34);
  *(undefined8 *)(param_1 + 0x458) = 0x500000005;
  *(uint *)(param_1 + 0x400) = *(uint *)(param_1 + 0x400) | 2;
  *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) | 0x2100;
  *(uint *)(param_1 + 0x49c) = *(uint *)(param_1 + 0x49c) & 0xfffffff7;
  *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) | 0x30;
  *(uint *)(param_1 + 0x4a0) = uVar7 | *(uint *)(param_1 + 0x4a0) | 0x10;
  *(uint *)(param_1 + 0x4ec) = *(uint *)(param_1 + 0x4ec) & 0xfffffff7;
  *(uint *)(param_1 + 0x540) = uVar7 | *(uint *)(param_1 + 0x540) | 0x4010;
  *(uint *)(param_1 + 0x53c) = *(uint *)(param_1 + 0x53c) & 0xfffffff7;
  *(uint *)(param_1 + 0x590) = *(uint *)(param_1 + 0x590) | 0x4030;
  *(uint *)(param_1 + 0x58c) = *(uint *)(param_1 + 0x58c) & 0xfffffff7;
  *(uint *)(param_1 + 0x5e0) = uVar7 | *(uint *)(param_1 + 0x5e0) | 0x10;
  *(uint *)(param_1 + 0x5dc) = *(uint *)(param_1 + 0x5dc) & 0xfffffff7;
  *(undefined4 *)(param_1 + 0x5f4) = 0x5f7ffff0;
  *(undefined4 *)(param_1 + 0x5f0) = 0x5f7ffff0;
  *(undefined4 *)(param_1 + 0x5fc) = 0x5f7ffff0;
  *(undefined4 *)(param_1 + 0x5f8) = 0x5f7ffff0;
  return;
}


