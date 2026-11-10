/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fe5c0; name: FUN_018fe5c0
 */


void FUN_018fe5c0(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 auStack_50 [16];
  undefined **local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined6 uStack_2e;
  undefined8 uStack_28;
  
  FUN_018fe6c0(&local_40,DAT_0485ea38);
  ppuVar2 = local_40;
  lVar1 = (long)DAT_0485e998;
  local_40 = (undefined **)0x0;
  DAT_0485e998 = ppuVar2;
  if (lVar1 != 0) {
    FUN_02789180(&DAT_0485e9a0);
  }
  DAT_0485e9a8 = CONCAT62(uStack_2e,local_30);
  DAT_0485e9a0 = local_38;
  DAT_0485e9b0 = uStack_28;
  local_40 = &PTR_LAB_045dfee0;
  FUN_018fe694(&local_38);
  (*(code *)local_40[2])(&local_40);
  local_30 = DAT_045dfcfc;
  (**(code **)(*DAT_0485e998 + 0x10))(auStack_50,DAT_0485e998,&local_40);
  DAT_0485ea98 = (**(code **)(*DAT_0485e998 + 0xa0))();
  return;
}


