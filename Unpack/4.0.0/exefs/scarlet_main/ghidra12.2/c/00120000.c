/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120000; name: FUN_00120000
 */


void FUN_00120000(undefined4 param_1)

{
  int iVar1;
  ulong local_30;
  long local_28;
  
  while( true ) {
    do {
      iVar1 = FUN_0011faf0(param_1,0xffffffff,&local_30,8);
    } while (iVar1 == 0);
    if (local_30 == 0) break;
    iVar1 = FUN_00102840(local_30 & 0xffffffffffffff00,(uint)local_30 & 0xff);
    local_28 = (long)iVar1;
    while (iVar1 = FUN_0011fa30(param_1,&local_30,0x10), iVar1 == 0) {
      FUN_0011fab0(param_1);
    }
  }
  return;
}


