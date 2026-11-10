/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003591e0; name: FUN_003591e0
 */


undefined8 * FUN_003591e0(undefined8 param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 *local_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x188);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x30] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x29] = 0;
    puVar1[0x28] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x25] = 0;
    puVar1[0x24] = 0;
    puVar1[0x27] = 0;
    puVar1[0x26] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  FUN_0038da60(param_1);
  *puVar1 = param_1;
  puVar1[2] = FUN_00359380;
  puVar1[3] = puVar1;
  puVar1[4] = 0;
  puVar1[8] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x21] = 0;
  puVar1[0x25] = 0;
  puVar1[6] = FUN_00359420;
  puVar1[7] = puVar1;
  puVar1[0x1b] = &LAB_003594d0;
  puVar1[0x1c] = puVar1;
  puVar1[0x1f] = &LAB_003595b0;
  puVar1[0x20] = puVar1;
  puVar1[0x23] = &LAB_003596a0;
  puVar1[0x24] = puVar1;
  FUN_0038db00(puVar1 + 0xb);
  puVar1[9] = 1;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  puVar1[0x13] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  if (param_2 == (char *)0x0) {
    local_68 = "anonymous_resource_user_";
    uStack_60 = 0x18;
    lStack_90 = FUN_00394d80(puVar1,auStack_88);
    lStack_90 = lStack_90 - (long)auStack_88;
    local_98 = auStack_88;
    FUN_003959c0(&local_38,&local_68,&local_98);
    if ((*(byte *)(puVar1 + 0x2e) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar1[0x30]);
    }
    puVar1[0x30] = local_28;
    puVar1[0x2f] = uStack_30;
    puVar1[0x2e] = local_38;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_0026c6b8(puVar1 + 0x2e,param_2,sVar2);
  }
  return puVar1;
}


