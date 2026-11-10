/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01feec64; name: FUN_01feec64
 */


ulong FUN_01feec64(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar6 = param_1[1] - *param_1 >> 7;
      FUN_01feed70(param_1,param_2);
      goto LAB_01feed50;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar5) =
         *(ulong *)(param_1[7] + uVar5) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar6);
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x80);
  pcVar4 = (code *)puVar1[1];
  if (pcVar4 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar4)(puVar1 + 4);
  }
  memcpy(puVar1 + 4,param_2,0x28);
  *puVar1 = PTR_LAB_047dbe30;
  puVar1[1] = PTR_LAB_047dbe38;
  puVar3 = PTR_LAB_047dbe48;
  puVar1[2] = PTR_LAB_047dbe40;
  puVar1[3] = puVar3;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_01feed50:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


