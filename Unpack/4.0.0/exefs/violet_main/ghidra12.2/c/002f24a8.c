/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f24a8; name: FUN_002f24a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f24a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  
  local_50 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uStack_58 = _UNK_03cabb98;
  local_60 = _DAT_03cabb90;
  uVar1 = CONCAT53(s_OAuth2TokenFetcherCredentials_03c0f567._16_5_,
                   s_OAuth2TokenFetcherCredentials_03c0f567._13_3_);
  *(undefined8 *)(local_50 + 0x15) = s_OAuth2TokenFetcherCredentials_03c0f567._21_8_;
  *(undefined8 *)(local_50 + 0xd) = uVar1;
  puStack_38 = PTR_LAB_047cc7b8;
  uVar1 = s_OAuth2TokenFetcherCredentials_03c0f567._0_8_;
  *(ulong *)(local_50 + 8) =
       CONCAT35(s_OAuth2TokenFetcherCredentials_03c0f567._13_3_,
                s_OAuth2TokenFetcherCredentials_03c0f567._8_5_);
  *(undefined8 *)local_50 = uVar1;
  local_50[0x1d] = '\0';
  local_40 = *(undefined8 *)(param_2 + 0x88);
  puStack_28 = PTR_FUN_047cc5f8;
                    /* try { // try from 002f2518 to 002f2533 has its CatchHandler @ 002f255c */
  local_30 = (undefined1 *)&local_60;
  FUN_00391b20(param_1,"GoogleRefreshToken{ClientID:%s,%s}",0x22,&local_40,2);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return;
}


