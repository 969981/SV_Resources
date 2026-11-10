/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e3b50; name: FUN_007e3b50
 */


undefined8 FUN_007e3b50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int local_40 [4];
  undefined4 local_30 [4];
  
  lVar3 = *(long *)(param_1 + 0x100);
  uVar1 = FUN_007e44e4(lVar3);
  lVar3 = *(long *)(*(long *)(lVar3 + 8) + (uVar1 & 0xffffffff) * 0x18);
  do {
    if (lVar3 == 0) {
      local_30[0] = 0x2c0a;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      FUN_00cbd7c0(local_40,local_30);
      uVar2 = 0;
LAB_007e3bf0:
      if (local_40[0] != 0) {
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar1 = FUN_0078b278(lVar3,param_2);
    if ((uVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(lVar3 + 0x20);
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      FUN_00cbd7c0(local_40,local_30);
      goto LAB_007e3bf0;
    }
    lVar3 = *(long *)(lVar3 + 0x48);
  } while( true );
}


