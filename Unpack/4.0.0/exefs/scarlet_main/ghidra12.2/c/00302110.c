/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00302110; name: FUN_00302110
 */


undefined8
FUN_00302110(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (param_4 == (undefined8 *)0x0) {
    if (param_5 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x14);
      uVar2 = s_crypter_is_nullptr__03c1686e._8_8_;
      uVar1 = s_crypter_is_nullptr__03c1686e._0_8_;
      *param_5 = pcVar4;
      *(undefined8 *)(pcVar4 + 8) = uVar2;
      *(undefined8 *)pcVar4 = uVar1;
      pcVar4[0x10] = 't';
      pcVar4[0x11] = 'r';
      pcVar4[0x12] = '.';
      pcVar4[0x13] = '\0';
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_003024f0(param_1,~param_2 & 1,param_3,param_5);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_LAB_04494500;
      *param_4 = puVar3;
      return 0;
    }
  }
  return 9;
}


