/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025d940; name: FUN_0025d940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0025d940(undefined4 *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_FUN_047cba38;
  pcVar2 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  pcVar2[0x20] = '\0';
  uVar6 = s_Failed_streaming_RPC_keep_alive__03c82628._24_8_;
  uVar5 = s_Failed_streaming_RPC_keep_alive__03c82628._16_8_;
  uVar4 = s_Failed_streaming_RPC_keep_alive__03c82628._0_8_;
  *(undefined8 *)(pcVar2 + 8) = s_Failed_streaming_RPC_keep_alive__03c82628._8_8_;
  *(undefined8 *)pcVar2 = uVar4;
  *(undefined8 *)(pcVar2 + 0x18) = uVar6;
  *(undefined8 *)(pcVar2 + 0x10) = uVar5;
  *param_1 = 0xe;
  puVar3 = (undefined8 *)FUN_0049e770(puVar1,0x30);
  puVar1 = PTR_LAB_047cba48;
  uVar5 = _UNK_03cab268;
  uVar4 = _DAT_03cab260;
  *(undefined8 **)(param_1 + 6) = puVar3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *(undefined8 *)(param_1 + 2) = uVar4;
  uVar7 = *(undefined8 *)(pcVar2 + 8);
  uVar6 = *(undefined8 *)pcVar2;
  uVar5 = *(undefined8 *)(pcVar2 + 0x18);
  uVar4 = *(undefined8 *)(pcVar2 + 0x10);
  *(char *)(puVar3 + 4) = pcVar2[0x20];
  puVar3[1] = uVar7;
  *puVar3 = uVar6;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_0049e790(puVar1,pcVar2);
  return;
}


