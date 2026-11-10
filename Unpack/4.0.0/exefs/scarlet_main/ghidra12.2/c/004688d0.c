/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004688d0; name: FUN_004688d0
 */


undefined8 FUN_004688d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  uVar4 = FUN_00440620();
  iVar1 = FUN_00440390(param_1,0xffffffff,0xf8,0xd,0,&local_18);
  if (((0 < iVar1) && (iVar1 = FUN_0046a3b0(param_1,0x3f8,0x1008,0,&local_28), 0 < iVar1)) &&
     (iVar1 = FUN_0046a3b0(param_1,0x18,0x1007,0,&local_2c), iVar1 != 0)) {
    if (local_2c == 0xffffffff) {
      local_2c = FUN_0043b720(local_18);
    }
    else if (local_2c + 3 < 2) {
      iVar1 = FUN_0043dbf0(uVar4);
      iVar2 = FUN_0043b720(local_18);
      local_2c = (iVar1 - iVar2) - 2;
      uVar3 = FUN_0043dbb0(uVar4);
      if ((uVar3 & 7) == 1) {
        local_2c = local_2c - 1;
      }
      if ((int)local_2c < 0) {
        return 0;
      }
    }
    lVar5 = FUN_00466d40(local_18,local_28,local_2c);
    if (lVar5 != 0) {
      uVar4 = FUN_003e00a0(lVar5,PTR_DAT_047cd4a8,0);
      FUN_00468da0(lVar5);
      return uVar4;
    }
  }
  return 0;
}


