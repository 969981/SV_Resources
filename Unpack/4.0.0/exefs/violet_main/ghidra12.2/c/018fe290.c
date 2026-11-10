/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fe290; name: FUN_018fe290
 */


void FUN_018fe290(void)

{
  ulong uVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long local_30;
  ulong local_28;
  
  uVar1 = FUN_018fe360();
  if ((uVar1 & 1) == 0) {
    if (DAT_0485ea90 == 0) {
      DAT_0485ea90 = (**(code **)(*DAT_0485ea38 + 0x10))(DAT_0485ea38,DAT_045dfca8,DAT_045dfcac);
    }
    local_28 = (ulong)DAT_045dfca8;
    local_30 = DAT_0485ea90;
    FUN_018feb30(auStack_40,&local_30);
    FUN_018fe7f0(auStack_50);
    FUN_018ff39c(auStack_40,auStack_50);
    FUN_018fe9f4(auStack_50);
    FUN_018ff39c(auStack_40,auStack_50);
    FUN_018fe36c(auStack_50);
    FUN_018ff39c(auStack_40,auStack_50);
    FUN_018fe3a0(auStack_50);
    FUN_018ff39c(auStack_40,auStack_50);
    FUN_018fe380(&LAB_02bdc190);
  }
  return;
}


