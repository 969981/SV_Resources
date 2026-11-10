/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02706640; name: FUN_02706640
 */


undefined1  [16] FUN_02706640(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  bool bVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  param_1 = (ulong *)*param_1;
  if ((ulong *)*param_1 == (ulong *)0x0) {
    puVar4 = (ulong *)0x0;
    bVar3 = true;
  }
  else {
    puVar4 = (ulong *)0x0;
    puVar2 = (ulong *)*param_1;
    do {
      param_1 = puVar2;
      bVar3 = *param_2 < param_1[4];
      if (!bVar3) {
        puVar4 = param_1;
      }
      lVar1 = 8;
      if (!bVar3) {
        lVar1 = 0x10;
      }
      puVar2 = *(ulong **)((long)param_1 + lVar1);
    } while (*(ulong **)((long)param_1 + lVar1) != (ulong *)0x0);
    if ((puVar4 != (ulong *)0x0) && (*param_2 <= puVar4[4])) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = puVar4;
      return auVar5;
    }
  }
  *(bool *)param_3 = bVar3;
  *(ulong **)(param_3 + 8) = param_1;
  auVar6._8_8_ = 1;
  auVar6._0_8_ = puVar4;
  return auVar6;
}


