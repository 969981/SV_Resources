/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b24d0; name: FUN_003b24d0
 */


undefined8 FUN_003b24d0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_003b25a0();
  if ((int)uVar1 != 0) {
    FUN_00452f80(*(undefined8 *)(param_1 + 0x810),"external/openssl/ssl/ssl_lib.c",0x24b);
    *(undefined8 *)(param_1 + 0x818) = 0;
    *(undefined8 *)(param_1 + 0x810) = 0;
    FUN_00452f80(*(undefined8 *)(param_1 + 0x820),"external/openssl/ssl/ssl_lib.c",0x24e);
    puVar2 = *(undefined8 **)(param_1 + 0x848);
    *(undefined8 *)(param_1 + 0x828) = 0;
    *(undefined8 *)(param_1 + 0x820) = 0;
    *(undefined4 *)(param_1 + 0x838) = 0;
    *(undefined8 *)(param_1 + 0x830) = 0;
    while (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x848) = *puVar2;
      FUN_00452f80(puVar2,"external/openssl/ssl/ssl_lib.c",0x259);
      puVar2 = *(undefined8 **)(param_1 + 0x848);
    }
    *(undefined8 *)(param_1 + 0x850) = 0;
    FUN_003f3160(*(undefined8 *)(param_1 + 0x840));
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x840) = 0;
    *(undefined8 *)(param_1 + 0x858) = 0;
    *(undefined8 *)(param_1 + 0x3c4) = 0;
    *(undefined8 *)(param_1 + 0x3bc) = 0;
    *(undefined8 *)(param_1 + 0x3d4) = 0;
    *(undefined8 *)(param_1 + 0x3cc) = 0;
    *(undefined8 *)(param_1 + 0x3e4) = 0;
    *(undefined8 *)(param_1 + 0x3dc) = 0;
    *(undefined8 *)(param_1 + 0x3f4) = 0;
    *(undefined8 *)(param_1 + 0x3ec) = 0;
    *(undefined8 *)(param_1 + 0x404) = 0;
    *(undefined8 *)(param_1 + 0x3fc) = 0;
    *(undefined8 *)(param_1 + 0x414) = 0;
    *(undefined8 *)(param_1 + 0x40c) = 0;
    *(undefined8 *)(param_1 + 0x424) = 0;
    *(undefined8 *)(param_1 + 0x41c) = 0;
    *(undefined8 *)(param_1 + 0x434) = 0;
    *(undefined8 *)(param_1 + 0x42c) = 0;
    *(undefined8 *)(param_1 + 0x444) = 0;
    *(undefined8 *)(param_1 + 0x43c) = 0;
    *(undefined8 *)(param_1 + 0x454) = 0;
    *(undefined8 *)(param_1 + 0x44c) = 0;
    *(undefined8 *)(param_1 + 0x464) = 0;
    *(undefined8 *)(param_1 + 0x45c) = 0;
    *(undefined8 *)(param_1 + 0x474) = 0;
    *(undefined8 *)(param_1 + 0x46c) = 0;
  }
  return uVar1;
}


