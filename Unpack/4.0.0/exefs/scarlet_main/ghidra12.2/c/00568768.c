/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00568768; name: FUN_00568768
 */


void FUN_00568768(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  FUN_0053dd14(auStack_38);
  bVar3 = *(byte *)(param_2 + 0x50);
  lVar4 = *(long *)(param_2 + 0x60);
  FUN_0056c9b0(auStack_60,param_2);
  local_48 = 0;
  local_40 = (long *)FUN_01cf7e20();
  local_58 = (**(code **)(*local_40 + 0x10))(local_40,8,8);
  lVar1 = local_58 + 8;
  local_48 = lVar1;
  FUN_0056b42c(local_58,auStack_60);
  lVar2 = param_2 + 0x51;
  if ((bVar3 & 1) != 0) {
    lVar2 = lVar4;
  }
  local_50 = lVar1;
  FUN_0053dd84(auStack_38,lVar2,&local_58);
  lVar2 = local_58;
  lVar1 = local_50;
  if (local_58 != 0) {
    while (lVar1 != lVar2) {
      FUN_0056b3f0(lVar1 + -8);
      lVar1 = lVar1 + -8;
    }
    local_50 = lVar2;
    (**(code **)(*local_40 + 0x18))(local_40,local_58,local_48 - local_58,8);
  }
  FUN_0056b3f0(auStack_60);
                    /* try { // try from 00568848 to 0056884f has its CatchHandler @ 0056886c */
  FUN_00568610(param_1 + 0x30,auStack_38);
  FUN_0053dd1c(auStack_38);
  return;
}


