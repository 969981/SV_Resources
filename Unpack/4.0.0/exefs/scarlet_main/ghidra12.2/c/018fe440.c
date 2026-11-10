/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018fe440; name: FUN_018fe440
 */


void FUN_018fe440(void)

{
  long lVar1;
  long lVar2;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined2 local_8;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined2 local_4;
  undefined1 uStack_2;
  
  if (DAT_045dfcf4 != 0 || DAT_045dfcf0 != 0) {
    local_8 = (undefined2)DAT_045dfcf0;
    uStack_2 = 0;
    uStack_6 = (undefined1)DAT_045dfcf4;
    uStack_5 = (undefined1)((uint)DAT_045dfcf4 >> 8);
    local_4 = (undefined2)DAT_045dfcf8;
    FUN_018fe8f0(&local_40,DAT_0485ea38);
    lVar2 = local_40;
    lVar1 = DAT_0485e9f8;
    local_40 = 0;
    DAT_0485e9f8 = lVar2;
    if (lVar1 == 0) {
      DAT_0485ea00 = local_38;
      DAT_0485ea08 = uStack_30;
      DAT_0485ea10 = local_28;
    }
    else {
      FUN_018fe510(&DAT_0485ea00);
      DAT_0485ea00 = local_38;
      DAT_0485ea08 = uStack_30;
      DAT_0485ea10 = local_28;
    }
    if (DAT_0485e9f8 != 0) {
      FUN_018fecc0(&local_40,DAT_0485e9f8,&local_8);
    }
  }
  return;
}


