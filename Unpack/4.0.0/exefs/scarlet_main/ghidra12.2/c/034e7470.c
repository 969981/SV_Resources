/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e7470; name: FUN_034e7470
 */


void FUN_034e7470(ulong *param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  puVar3 = (ulong *)*param_1;
  while (puVar3 != (ulong *)0x0) {
    *param_1 = *puVar3;
    if ((ulong *)param_1[1] == puVar3) {
      param_1[1] = 0;
    }
    if ((puVar3 < param_1[3]) || (param_1[3] + (ulong)(uint)param_1[4] * 0x20 <= puVar3)) {
      (**(code **)(puVar2 + 0x30))(0);
    }
    else {
      *puVar3 = param_1[2];
      param_1[2] = (ulong)puVar3;
    }
    puVar3 = (ulong *)*param_1;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
  }
  puVar3 = (ulong *)param_1[2];
  while (puVar3 != (ulong *)0x0) {
    puVar4 = (ulong *)*puVar3;
    if ((puVar3 < param_1[3]) ||
       (bVar1 = param_1[3] + (ulong)(uint)param_1[4] * 0x20 <= puVar3, puVar3 = puVar4, bVar1)) {
      (**(code **)(puVar2 + 0x30))(0);
      puVar3 = puVar4;
    }
  }
  if (param_1[3] != 0) {
    (**(code **)(puVar2 + 0x30))(0);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


