/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d95c8; name: FUN_007d95c8
 */


void FUN_007d95c8(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [16];
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  undefined4 local_28 [2];
  
  puVar4 = auStack_60;
  lVar2 = FUN_007ec50c();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_007ec50c(param_1);
    lVar3 = FUN_007ec4a8(param_1);
    bVar1 = lVar2 == lVar3;
  }
  if ((param_3 == 10) && (!bVar1)) {
    uVar5 = *(undefined8 *)PTR_DAT_047d0a08;
    if (*(char *)(param_2 + 9) == '\x04') {
      local_50[0] = 0xa469;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_00cbd7c0(auStack_40,local_50);
      puVar4 = auStack_40;
    }
    else {
      local_50[0] = 0x8c52;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_00cbd7c0(auStack_60,local_50);
    }
    FUN_007cd5e8(uVar5,puVar4,3);
  }
  return;
}


