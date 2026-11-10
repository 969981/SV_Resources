/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004513d0; name: FUN_004513d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_004513d0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)FUN_00452ce0(0xb0,"external/openssl/crypto/lhash/lhash.c",0x33);
  if (plVar4 != (long *)0x0) {
    lVar5 = FUN_00452ce0(0x80,"external/openssl/crypto/lhash/lhash.c",0x3b);
    *plVar4 = lVar5;
    lVar3 = DAT_03cb5630;
    if (lVar5 == 0) {
      FUN_00452f80(0,"external/openssl/crypto/lhash/lhash.c",0x47);
      FUN_00452f80(plVar4,"external/openssl/crypto/lhash/lhash.c",0x48);
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar4 + 0x24) = 8;
    puVar2 = PTR_FUN_047cd428;
    puVar1 = PTR_strcmp_047cd420;
    plVar4[3] = lVar3;
    lVar5 = _UNK_03cabba8;
    lVar3 = _DAT_03cabba0;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    if (param_1 != (undefined *)0x0) {
      puVar2 = param_1;
    }
    plVar4[1] = (long)puVar1;
    plVar4[2] = (long)puVar2;
    plVar4[6] = lVar5;
    plVar4[5] = lVar3;
  }
  return plVar4;
}


