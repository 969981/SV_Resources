/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464f80; name: FUN_00464f80
 */


undefined8 FUN_00464f80(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_0047e650(&DAT_047f1a88,&LAB_00464bf0);
  if ((iVar2 != 0) && (DAT_047f1a8c != 0)) {
    FUN_0047e5e0(DAT_047f1aa0);
    if (DAT_047f1a98 == (undefined *)0x0) {
      DAT_047f1a98 = PTR_PTR_047cd498;
    }
    puVar1 = DAT_047f1a98;
    FUN_0047e600(DAT_047f1aa0);
    if (*(code **)(puVar1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00465000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(puVar1 + 8))(param_1,param_2);
      return uVar3;
    }
  }
  FUN_004806c0(0x24,100,0x65,"external/openssl/crypto/rand/rand_lib.c",0x3ae);
  return 0xffffffff;
}


