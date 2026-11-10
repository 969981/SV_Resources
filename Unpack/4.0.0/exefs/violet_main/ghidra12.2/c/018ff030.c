/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ff030; name: FUN_018ff030
 */


void FUN_018ff030(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  local_4c = 1;
  local_48 = 0xffffffffffffffff;
  local_58 = 0;
  local_68 = DAT_0485ea98;
  local_60 = (undefined2)DAT_045dfcb0;
  local_5c = (undefined2)DAT_045dfcb8;
  local_5e = (undefined2)DAT_045dfcb4;
  local_50 = 0;
  FUN_019001b0(auStack_78);
  FUN_018ffcb0(auStack_88);
  FUN_018ff39c(auStack_78,auStack_88);
  FUN_01900424(auStack_88,&local_68);
  uVar3 = FUN_018ff39c(auStack_78,auStack_88);
  FUN_018ff39c(auStack_78,uVar3);
  lVar1 = *(long *)PTR_DAT_047d0860 + 0x10;
  uVar2 = FUN_018ff474(lVar1,0);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x7c);
  FUN_018fffb4(auStack_88,uVar3,DAT_045dfcbc,DAT_045dfcc0);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea68 = uVar2;
  uVar2 = FUN_018ff564(lVar1,0);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x80);
  FUN_018ff90c(auStack_88,uVar3,DAT_045dfcc4,DAT_045dfcc8);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea74 = uVar2;
  uVar2 = FUN_018ffa58(lVar1);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x68);
  FUN_01900620(auStack_88,uVar3,DAT_045dfccc);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea80 = uVar2;
  uVar2 = FUN_018ff474(lVar1,1);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x7c);
  FUN_018fffb4(auStack_88,uVar3,DAT_045dfcdc,DAT_045dfce0);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea6c = uVar2;
  uVar2 = FUN_018ff564(lVar1,1);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x80);
  FUN_018ff90c(auStack_88,uVar3,DAT_045dfcdc,DAT_045dfce0);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea78 = uVar2;
  uVar2 = FUN_018ff474(lVar1,2);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x7c);
  FUN_018fffb4(auStack_88,uVar3,DAT_045dfce4,DAT_045dfce8);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea70 = uVar2;
  uVar2 = FUN_018ff564(lVar1,2);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x80);
  FUN_018ff90c(auStack_88,uVar3,DAT_045dfce4,DAT_045dfce8);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea7c = uVar2;
  if (DAT_045dfcd0 != 0) {
    uVar5 = 0;
    do {
      uVar2 = FUN_018ff624(lVar1,uVar5 & 0xffffffff);
      uVar3 = FUN_00f21488(lVar1,uVar2,0x81);
      FUN_018ffde8(auStack_88,uVar3,DAT_045dfcd4,DAT_045dfcd8);
      FUN_018ff39c(auStack_78,auStack_88);
      uVar4 = (ulong)DAT_045dfcd0;
      (&DAT_0485ea48)[uVar5] = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar2 = FUN_018ffb18(lVar1);
  FUN_00f21488(lVar1,uVar2,0x77);
  FUN_018ff8a4(auStack_88);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea44 = uVar2;
  uVar2 = FUN_018ffbe4(lVar1);
  uVar3 = FUN_00f21488(lVar1,uVar2,0x74);
  FUN_01900274(auStack_88,uVar3,DAT_045dfcec);
  FUN_018ff39c(auStack_78,auStack_88);
  DAT_0485ea88 = uVar2;
  FUN_018ffd50(auStack_88);
  FUN_018ff39c(auStack_78,auStack_88);
  return;
}


