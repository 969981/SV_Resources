/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9725c; name: FUN_00e9725c
 */


void FUN_00e9725c(ulong *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
  *param_1 = *param_1 & 0xfffffffffffff800 | uVar6 & 0x7ff;
  uVar6 = FUN_00e974d8(*param_2);
  *param_1 = *param_1 & 0xffffffffff800000 | *param_1 & 0x7ff | (uVar6 & 0xfff) << 0xb;
  uVar6 = FUN_01180328(*(undefined8 *)(*param_2 + 0x70));
  *param_1 = *param_1 & 0xffffffff80000000 | *param_1 & 0x7fffff | (uVar6 & 0xff) << 0x17;
  cVar2 = FUN_00cec030(*(undefined8 *)(*param_2 + 0x70));
  *param_1 = *param_1 & 0xffffffff00000000 |
             *param_1 & 0x7fffffff | (ulong)(cVar2 == '\x01') << 0x1f;
  lVar7 = *param_2;
  uVar4 = FUN_00dbf838(*(undefined8 *)(lVar7 + 0x70));
  uVar5 = FUN_00dbfb7c(*(undefined8 *)(lVar7 + 0x70));
  *param_1 = *param_1 & 0xfffffffe00000000 |
             *param_1 & 0xffffffff |
             (ulong)((uVar4 & 0xfff0 ^ uVar4 >> 0x10 ^ uVar5 >> 0x10 ^ uVar5 & 0xfff0) < 0x10) <<
             0x20;
  uVar4 = FUN_00cf41a8(*(undefined8 *)(*param_2 + 0x70));
  *param_1 = *param_1 & 0xffffffc000000000 | *param_1 & 0x1ffffffff | (ulong)(uVar4 & 0x1f) << 0x21;
  uVar5 = FUN_00e9980c(*param_2);
  uVar4 = 1;
  *param_1 = *param_1 & 0xffe0000000000000 | *param_1 & 0x3fffffffff | (ulong)(uVar5 & 0x7f) << 0x26
  ;
  puVar1 = PTR_DAT_047d90c8;
  while ((*(uint *)(*(long *)puVar1 + 0x3d4) < uVar4 ||
         (uVar6 = FUN_00e99324(*(undefined8 *)(*param_2 + 0x70),uVar4), (uVar6 & 1) == 0))) {
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x6d) {
LAB_00e97398:
      uVar4 = FUN_00e97b70(*param_2);
      *param_1 = *param_1 & 0xfc00000000000000 |
                 *param_1 & 0x1fffffffffffff | (ulong)(uVar4 & 0x1f) << 0x35;
      uVar4 = FUN_00e97824(*param_2);
      *param_1 = *param_1 & 0x8000000000000000 |
                 *param_1 & 0x3ffffffffffffff | (ulong)(uVar4 & 0x1f) << 0x3a;
      uVar4 = FUN_00e97ebc(*param_2,0);
      *(uint *)(param_1 + 1) =
           (uint)param_1[1] & 0xffffe000 | (uint)param_1[1] & 0xff | (uVar4 & 0x1f) << 8;
      uVar4 = FUN_00e97ebc(*param_2,1);
      *(uint *)(param_1 + 1) =
           (uint)param_1[1] & 0xfffc0000 | (uint)param_1[1] & 0x1fff | (uVar4 & 0x1f) << 0xd;
      uVar4 = FUN_00e97ebc(*param_2,2);
      *(uint *)(param_1 + 1) =
           (uint)param_1[1] & 0xff800000 | (uint)param_1[1] & 0x3ffff | (uVar4 & 0x1f) << 0x12;
      uVar4 = FUN_00e97ebc(*param_2,5);
      *(uint *)(param_1 + 1) =
           (uint)param_1[1] & 0xf0000000 | (uint)param_1[1] & 0x7fffff | (uVar4 & 0x1f) << 0x17;
      uVar3 = FUN_00e97ebc(*param_2,3);
      *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) & 0xffe0 | uVar3 & 0x1f;
      uVar3 = FUN_00e97ebc(*param_2,4);
      *(ushort *)((long)param_1 + 0xc) =
           (uVar3 & 0x1f) << 5 | *(ushort *)((long)param_1 + 0xc) & 0xfc1f;
      uVar3 = FUN_00e99784(*param_2);
      *(ushort *)((long)param_1 + 0xc) =
           *(ushort *)((long)param_1 + 0xc) & 0xf3ff | (uVar3 & 3) << 10;
      uVar4 = FUN_00e997c4(*param_2);
      *(uint *)(param_1 + 1) = (uint)param_1[1] & 0xfffffff0 | uVar4 & 0xf;
      return;
    }
  }
  *(uint *)(param_1 + 1) = (uint)param_1[1] | uVar4 >> 0x13;
  *param_1 = *param_1 & 0xffe01fffffffffff | (ulong)uVar4 << 0x2d;
  goto LAB_00e97398;
}


