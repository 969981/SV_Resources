/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f1f6c; name: FUN_028f1f6c
 */


ulong FUN_028f1f6c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar5 = param_1[1] - *param_1 >> 7;
      FUN_028f203c(param_1,param_2);
      goto LAB_028f2020;
    }
    uVar5 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar4) =
         *(ulong *)(param_1[7] + uVar4) & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar5);
  puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x80);
  pcVar3 = (code *)puVar1[1];
  if (pcVar3 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar3)(puVar1 + 4);
  }
  FUN_028f2064(puVar1,param_2);
  if ((ulong)param_1[0x15] <= uVar5) {
LAB_028f2020:
    param_1[0x15] = uVar5 + 1;
  }
  return uVar5;
}


