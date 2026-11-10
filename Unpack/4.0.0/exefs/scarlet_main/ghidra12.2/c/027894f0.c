/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027894f0; name: FUN_027894f0
 */


void FUN_027894f0(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 auStack_560 [16];
  undefined1 auStack_550 [8];
  undefined2 local_548;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  undefined1 auStack_2a8 [632];
  
  FUN_0278a7c0(&local_2d8,DAT_0485ea38);
  ppuVar2 = local_2d8;
  lVar1 = (long)DAT_0485e9d8;
  local_2d8 = (undefined **)0x0;
  DAT_0485e9d8 = ppuVar2;
  if (lVar1 != 0) {
    FUN_02789318(&DAT_0485e9e0);
  }
  DAT_0485e9e8 = local_2c8;
  DAT_0485e9e0 = local_2d0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2d8 = &PTR_LAB_045dff48;
  DAT_0485e9f0 = local_2c0;
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_0278a8c4(auStack_2a8);
  local_2d8 = &PTR_LAB_045dff10;
  local_2b0 = auStack_2a8;
  FUN_0278a8c4(auStack_550);
  local_548 = DAT_045dfcfc;
  FUN_0278aa14(auStack_560,&local_2d8,auStack_550);
  (**(code **)(*DAT_0485e9d8 + 0x10))(auStack_560,DAT_0485e9d8,&local_2d8);
  DAT_0485ea98 = (**(code **)(*DAT_0485e9d8 + 0xa0))();
  return;
}


