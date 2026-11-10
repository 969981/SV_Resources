/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00256780; name: FUN_00256780
 */


void FUN_00256780(undefined8 *param_1,char *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  EnvironmentIdentifier aEStack_128 [8];
  char acStack_120 [255];
  undefined1 local_21;
  
  uVar2 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[10] = 0;
  param_1[0xb] = uVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[0xe] = 0;
  param_1[0xf] = uVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar2 = FUN_01cf7e20();
  uVar1 = *PTR_DAT_047cc220;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = uVar2;
  param_1[0x1a] = 0;
  nn::nsd::GetEnvironmentIdentifier(aEStack_128);
  snprintf(acStack_120,0x100,"%s.%s.t.npln.srv.nintendo.net:443",param_2,(char *)aEStack_128);
  local_21 = 0;
  sVar3 = strlen(acStack_120);
                    /* try { // try from 0025683c to 00256847 has its CatchHandler @ 00256858 */
  FUN_01f77cc0(param_1,acStack_120,sVar3);
  return;
}


