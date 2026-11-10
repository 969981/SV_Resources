/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d8de0; name: FUN_007d8de0
 */


void FUN_007d8de0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined1 auStack_640 [16];
  undefined1 auStack_630 [32];
  undefined4 local_610 [4];
  undefined4 local_600;
  uint5 uStack_5fc;
  undefined2 local_5f7;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 auStack_5f3 [1459];
  
  local_610[0] = 0;
  lVar1 = *(long *)PTR_DAT_047d0a08 + 0x178;
  local_600 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_610 | 4),(Result *)&local_600);
  local_600 = CONCAT31(local_600._1_3_,7);
  uVar4 = FUN_007e5328(lVar1);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar2 = uVar4 & 0xffff0000ffff;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | uVar2 << 0x10;
  uStack_5fc = (uint5)(byte)(uVar2 >> 0x28) | (uint5)((uVar4 << 0x20) >> 0x18);
  local_600._1_3_ = (undefined3)(uVar4 >> 0x20);
  uVar3 = FUN_007e5330(lVar1);
  local_5f5 = (undefined1)((ushort)uVar3 >> 8);
  local_5f4 = (undefined1)uVar3;
  local_5f7 = 0;
  uVar5 = FUN_007e5304(auStack_630,lVar1);
  puVar6 = (ulong *)FUN_007d58b4(uVar5,auStack_5f3,auStack_630,0);
  uVar4 = FUN_007e5328(param_2);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  *puVar6 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar3 = FUN_007e5330(param_2);
  *(undefined2 *)(puVar6 + 1) = 0;
  *(char *)((long)puVar6 + 0xb) = (char)uVar3;
  *(char *)((long)puVar6 + 10) = (char)((ushort)uVar3 >> 8);
  *(ushort *)((long)puVar6 + 0xc) =
       *(ushort *)(param_1 + 0xe0) >> 8 | *(ushort *)(param_1 + 0xe0) << 8;
  FUN_007e5304(auStack_630,param_2);
  FUN_007d5520(auStack_640,param_1,auStack_630,&local_600,((int)puVar6 - (int)&local_600) + 0xe,0);
  FUN_018ff39c(local_610,auStack_640);
  return;
}


