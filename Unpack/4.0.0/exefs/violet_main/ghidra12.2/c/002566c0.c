/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002566c0; name: FUN_002566c0
 */


void FUN_002566c0(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  byte *pbVar4;
  char *__s;
  
  __s = *(char **)PTR_PTR_047cc218;
  sVar3 = strlen(__s);
                    /* try { // try from 002566e8 to 002566ef has its CatchHandler @ 0025677c */
  FUN_01f77cc0(param_1 + 0x60,__s,sVar3);
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
    *param_1 = 0x1e;
  }
  else {
    param_1[8] = 0xf;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  uVar1 = CONCAT17(s_localhost_30051_03c46f2f[7],s_localhost_30051_03c46f2f._0_7_);
  *(ulong *)(pbVar4 + 7) = CONCAT71(s_localhost_30051_03c46f2f._8_7_,s_localhost_30051_03c46f2f[7]);
  *(undefined8 *)pbVar4 = uVar1;
  pbVar4[0xf] = 0;
  if ((param_1[0x80] & 1) == 0) {
    pbVar4 = param_1 + 0x81;
    param_1[0x80] = 0x2a;
  }
  else {
    param_1[0x88] = 0x15;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    pbVar4 = *(byte **)(param_1 + 0x90);
  }
  uVar2 = s_localhost_localdomain_03bd1e3a._0_8_;
  uVar1 = CONCAT35(s_localhost_localdomain_03bd1e3a._13_3_,s_localhost_localdomain_03bd1e3a._8_5_);
  *(ulong *)(pbVar4 + 0xd) =
       CONCAT53(s_localhost_localdomain_03bd1e3a._16_5_,s_localhost_localdomain_03bd1e3a._13_3_);
  pbVar4[0x15] = 0;
  *(undefined8 *)(pbVar4 + 8) = uVar1;
  *(undefined8 *)pbVar4 = uVar2;
  return;
}


