/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01913b20; name: FUN_01913b20
 */


void FUN_01913b20(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return;
  }
  lVar1 = *(long *)PTR_DAT_047d0860 + 0x10;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea68,0x7c);
  if (lVar2 != 0) {
    FUN_027899e4();
    FUN_01913dc4(lVar1,DAT_0485ea68);
  }
  DAT_0485ea68 = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea74,0x80);
  if (lVar2 != 0) {
    FUN_02789a70();
    FUN_01913dc4(lVar1,DAT_0485ea74);
  }
  DAT_0485ea74 = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea80,0x7c);
  if (lVar2 != 0) {
    FUN_027899e4();
    FUN_01913dc4(lVar1,DAT_0485ea80);
  }
  DAT_0485ea80 = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea6c,0x7c);
  if (lVar2 != 0) {
    FUN_027899e4();
    FUN_01913dc4(lVar1,DAT_0485ea6c);
  }
  DAT_0485ea6c = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea78,0x80);
  if (lVar2 != 0) {
    FUN_02789a70();
    FUN_01913dc4(lVar1,DAT_0485ea78);
  }
  DAT_0485ea78 = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea70,0x7c);
  if (lVar2 != 0) {
    FUN_027899e4();
    FUN_01913dc4(lVar1,DAT_0485ea70);
  }
  DAT_0485ea70 = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea7c,0x80);
  if (lVar2 != 0) {
    FUN_02789a70();
    FUN_01913dc4(lVar1,DAT_0485ea7c);
  }
  DAT_0485ea7c = 0;
  if (DAT_045dfcd0 != 0) {
    uVar4 = 0;
    do {
      lVar2 = FUN_00f21488(lVar1,(&DAT_0485ea48)[uVar4],0x81);
      if (lVar2 != 0) {
        FUN_01913d54();
        FUN_01913dc4(lVar1,(&DAT_0485ea48)[uVar4]);
      }
      uVar3 = (ulong)DAT_045dfcd0;
      (&DAT_0485ea48)[uVar4] = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea44,0x77);
  if (lVar2 != 0) {
    FUN_02789ab4();
    FUN_01913dc4(lVar1,DAT_0485ea44);
  }
  DAT_0485ea44 = 0;
  lVar2 = FUN_00f21488(lVar1,DAT_0485ea88,0x74);
  if (lVar2 != 0) {
    FUN_02789acc();
    FUN_01913dc4(lVar1,DAT_0485ea88);
  }
  DAT_0485ea88 = 0;
  FUN_02789b7c();
  FUN_02789be0();
  return;
}


