/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00358a20; name: FUN_00358a20
 */


undefined8 * FUN_00358a20(char *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined1 *local_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
  }
  FUN_0038da50(puVar1,1);
  uVar2 = FUN_00350660();
  puVar1[2] = uVar2;
  puVar1[5] = 0;
  puVar1[4] = 0x7fffffffffffffff;
  puVar1[3] = 0x7fffffffffffffff;
  puVar1[6] = 0x7fffffffffffffff;
  FUN_0038db00(puVar1 + 7);
  puVar1[0xb] = DAT_03cb5618;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  puVar1[1] = 0;
  if (param_1 == (char *)0x0) {
    local_68 = "anonymous_pool_";
    uStack_60 = 0xf;
    lStack_90 = FUN_00394d80(puVar1,auStack_88);
    lStack_90 = lStack_90 - (long)auStack_88;
    local_98 = auStack_88;
    FUN_003959c0(&local_38,&local_68,&local_98);
    if ((*(byte *)(puVar1 + 0x1b) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar1[0x1d]);
    }
    puVar1[0x1d] = local_28;
    puVar1[0x1c] = uStack_30;
    puVar1[0x1b] = local_38;
  }
  else {
    sVar3 = strlen(param_1);
    FUN_0026c6b8(puVar1 + 0x1b,param_1,sVar3);
  }
  puVar1[0xe] = &LAB_00358b80;
  puVar1[0xf] = puVar1;
  puVar1[0x10] = 0;
  puVar1[0x12] = &LAB_00358ff0;
  puVar1[0x13] = puVar1;
  puVar1[0x14] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  return puVar1;
}


