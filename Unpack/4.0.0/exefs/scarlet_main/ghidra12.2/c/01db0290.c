/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db0290; name: FUN_01db0290
 */


ulong FUN_01db0290(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    lVar3 = param_1[0xf] - param_1[0xe];
    if (lVar3 == 0) {
      uVar6 = param_1[1] - *param_1 >> 7;
      FUN_01db03bc(param_1,param_2);
      goto LAB_01db0374;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar3 + param_1[0xe] + -8;
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
  uVar2 = param_2[1];
  puVar1[4] = *param_2;
  puVar1[5] = uVar2;
  *puVar1 = &LAB_01db0c90;
  puVar1[1] = FUN_00a2dd74;
  puVar1[2] = &LAB_00a2de4c;
  puVar1[3] = &LAB_00a2de58;
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_01db0374:
    param_1[0x15] = uVar6 + 1;
  }
  return uVar6;
}


