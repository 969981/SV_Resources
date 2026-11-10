/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d777c; name: FUN_007d777c
 */


void FUN_007d777c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_650 [16];
  undefined1 auStack_640 [32];
  undefined4 local_620 [4];
  undefined1 auStack_610 [16];
  undefined4 local_600;
  undefined1 local_5fc;
  ulong local_5fb;
  undefined2 local_5f3;
  undefined1 local_5f1;
  undefined1 local_5f0;
  undefined1 auStack_5ef [1455];
  
  puVar2 = PTR_DAT_047d0a08;
  lVar1 = *(long *)PTR_DAT_047d0a08 + 0x178;
  FUN_007c70a8(auStack_610);
  uVar5 = FUN_007c7184(auStack_610);
  uVar5 = uVar5 & 0xffffffff;
  local_620[0] = 0;
  local_600 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_620 | 4),(Result *)&local_600);
  local_600._0_2_ = CONCAT11((char)(uVar5 >> 0x18),3);
  local_600 = CONCAT13((char)(uVar5 >> 8),CONCAT12((char)(uVar5 >> 0x10),(undefined2)local_600));
  local_5fc = (undefined1)uVar5;
  uVar5 = FUN_007e5328(lVar1);
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  local_5fb = uVar5 >> 0x20 | uVar5 << 0x20;
  uVar3 = FUN_007e5330(lVar1);
  local_5f1 = (undefined1)((ushort)uVar3 >> 8);
  local_5f0 = (undefined1)uVar3;
  local_5f3 = 0;
  uVar6 = FUN_007e5304(auStack_640,lVar1);
  iVar4 = FUN_007d58b4(uVar6,auStack_5ef,auStack_640,0);
  FUN_007e5304(auStack_640,*(long *)puVar2 + 0x1b8);
  FUN_007d5520(auStack_650,param_1,auStack_640,&local_600,iVar4 - (int)&local_600,0);
  FUN_018ff39c(local_620,auStack_650);
  return;
}


